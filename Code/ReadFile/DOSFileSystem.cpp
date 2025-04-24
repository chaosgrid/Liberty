#include "DACOM.h"
#include "DOSFileSystem.h"
#include "FileSys.h"
#include "TComponent.h"
#include "FDump.h"

#include <Windows.h>
#include <Shlwapi.h>
#include <process.h>

extern ICOManager* DACOM;

#define MAX_OVERLAPPED_OPS		32
#define MAX_LOCK_WAIT			60000		// milliseconds to wait for a lock
#define CHECKDESCSIZE(x)    (x->size==sizeof(DAFILEDESC)||x->size==sizeof(DAFILEDESC)-sizeof(U32))
#define DOSFILE_SERIAL	(WM_USER+1)

DOSFileSystem* pFirstSystem = 0;
HINSTANCE hInstance = 0;
HANDLE hEvent = 0;
HANDLE hThread = 0;
DWORD dwThreadID = 0;
QueueNode* pMessageList = 0;




//--------------------------------------------------------------------------//
//-----------------------GLOBAL DATA & MEMBERS OF FILE SYSTEM---------------//
//--------------------------------------------------------------------------//

// if instance represents a directory, instead of a file,
// current directory is stored in szFilename. 
// Path always has a leading and trailing '\\'

// Handle to component object manager




static void WaitForDOSThread(void);




//--------------------------------------------------------------------------//
//
void PostQueuedMessage(QueueNode* node)
{
	EnterCriticalSection(&pFirstSystem->criticalSection);

	node->pNext = 0;
	//
	// add node to the end of the list
	//
	QueueNode* pList = pMessageList;
	if (pList)
	{
		while (pList->pNext)
			pList = pList->pNext;
		pList->pNext = node;
	}
	else
		pMessageList = node;
	LeaveCriticalSection(&pFirstSystem->criticalSection);

	SetEvent(hEvent);
}
//--------------------------------------------------------------------------//
//
void PostReadWriteMessage(READWRITE_STRUCT* rwMessage)
{
	EnterCriticalSection(&pFirstSystem->criticalSection);

	QueueNode* node = &rwMessage->queueNode;

	node->pNext = 0;
	node->message = DOSFILE_SERIAL;
	node->pSerial = rwMessage;
	//
	// add node to the end of the list
	//
	QueueNode* pList = pMessageList;
	if (pList)
	{
		while (pList->pNext)
			pList = pList->pNext;
		pList->pNext = node;
	}
	else
		pMessageList = node;
	LeaveCriticalSection(&pFirstSystem->criticalSection);

	SetEvent(hEvent);
}
//--------------------------------------------------------------------------//
//
bool __stdcall GetQueuedMessage(QueueNode** node)
{
	if (pMessageList)
	{
		EnterCriticalSection(&pFirstSystem->criticalSection);
		*node = pMessageList;
		pMessageList = pMessageList->pNext;
		LeaveCriticalSection(&pFirstSystem->criticalSection);
		return true;
	}

	return false;
}
//--------------------------------------------------------------------------//
//--------------------------DOSFileSystem Methods---------------------------//
//--------------------------------------------------------------------------//
//
DOSFileSystem::~DOSFileSystem(void)
{
	if (pParent)
	{
		pParent->CloseHandle(hFile);
		pParent->Release();
	}
	else
	{
		if (SerialCall(this, (DAFILE_SERIAL_PROC)&DOSFileSystem::CloseAllHandles_S, 0))
			SerialCall(this, (DAFILE_SERIAL_PROC)&DOSFileSystem::CloseAllHandles_S, 0);
		// call it again to flush out extraneous calls in the queue

		if (this == pFirstSystem)
		{
			DWORD dwCode;
			QueueNode node;

			while (hEvent == 0 && GetExitCodeThread(hThread, &dwCode) && dwCode == STILL_ACTIVE)
				Sleep(1);
			node.pSerial = 0;
			node.message = WM_QUIT;
			node.pNext = 0;
			PostQueuedMessage(&node);
			WaitForSingleObject(hThread, INFINITE);
			::CloseHandle(hThread);
			hThread = 0;
			pFirstSystem = 0;
		}
	}

	DeleteCriticalSection(&criticalSection);
}
//--------------------------------------------------------------------------//
//
GENRESULT DOSFileSystem::CreateInstance(DACOMDESC* descriptor,  //)
	void** instance)
{
	DAFILEDESC* lpInfo = (DAFILEDESC*)descriptor;
	GENRESULT		result = GR_OK;
	DOSFileSystem* pNewSystem = NULL;

	//
	// If unsupported interface requested, fail call
	//
		
	if (CHECKDESCSIZE(lpInfo) == 0 || strcmp(lpInfo->interface_name, CLSID_FileSystem))
	{
		result = GR_INTERFACE_UNSUPPORTED;
		goto Done;
	}

	//
	// DOSFileSystem file instances cannot open files or directories
	//

	if (bOpen)
	{
		result = GR_GENERIC;
		goto Done;
	}

	// 
	// if we are an open directory, see if we can find child inside us
	// 	

	if (this != pFirstSystem)
	{
		HANDLE			handle;

		//
		// DOSFileSystem directories cannot have parents
		//

		if (lpInfo->lpParent)
		{
			result = GR_GENERIC;
			goto Done;
		}

		if ((handle = OpenChild(lpInfo)) == INVALID_HANDLE_VALUE)
		{
			//
			// OpenChild() failed; system could not be created
			// See if	file is really a directory
			//
			DWORD dwAttribs;

			if ((pNewSystem = new DAComponent<DOSFileSystem>) == 0)
			{
				result = GR_GENERIC;
				goto Done;
			}

			if (lpInfo->lpFileName)
			{
				memcpy(pNewSystem->szFilename, szFilename, iRootIndex);
				if (GetAbsolutePath(pNewSystem->szFilename + iRootIndex, lpInfo->lpFileName, MAX_PATH - iRootIndex) == 0)
				{
					TCOMPONENT_IGNORE_ABSTRACT_DELETE_PUSH();
					delete pNewSystem; // #TODO Should this be replaced with Release()?
					TCOMPONENT_IGNORE_ABSTRACT_DELETE_POP();
					pNewSystem = 0;
					result = GR_FILE_ERROR;
					goto Done;
				}
			}

			dwAttribs = ::GetFileAttributes(pNewSystem->szFilename);

			if (dwAttribs == 0xFFFFFFFF || (dwAttribs & FILE_ATTRIBUTE_DIRECTORY) == 0)
			{
				TCOMPONENT_IGNORE_ABSTRACT_DELETE_PUSH();
				delete pNewSystem; // #TODO Should this be replaced with Release()?
				TCOMPONENT_IGNORE_ABSTRACT_DELETE_POP();
				pNewSystem = 0;

				result = GR_FILE_ERROR;
				goto Done;
			}
			// 
			// else it is a directory, add a "\\" to the end of the name
			//
			if ((pNewSystem->iRootIndex = strlen(pNewSystem->szFilename)) != 0)
				if (pNewSystem->szFilename[pNewSystem->iRootIndex - 1] == '\\')
					pNewSystem->iRootIndex--;

			pNewSystem->szFilename[pNewSystem->iRootIndex] = '\\';
			pNewSystem->hFile = handle;
			goto Done;
		}

		if (lpInfo->lpImplementation == 0 || strcmp(lpInfo->lpImplementation, "DOS"))
		{
			// need some other implementation

			lpInfo->lpParent = this;
			lpInfo->hParent = handle;
			AddRef();			// child file system will now reference us
			if ((result = DACOM->CreateInstance(lpInfo, (void**)&pNewSystem)) != GR_OK)
			{
				Release();
#if 1 // HACK
				// Some genius decided that instead of exclusively relative, or linux style 
				// paths they were going to try and shove in absolute paths. This hack here
				// forces the DOSFileSystem instance to be created for an file that doesn't
				// have any other suitable interface, but did manage to create a HANDLE
				// What would have fixed this would have been specifying lpInfo->lpImplementation
				// but nooo the genius decided to leave that blank too so who knows what they
				// intended
				result = GR_OK;
				if ((pNewSystem = new DAComponent<DOSFileSystem>) == 0)
				{
					CloseHandle(handle);
					result = GR_GENERIC;
					goto Done;
				}

				strncpy(pNewSystem->szFilename, lpInfo->lpFileName, sizeof(szFilename));
				pNewSystem->dwAccess = lpInfo->dwDesiredAccess;
				pNewSystem->hFile = handle;
				pNewSystem->bOpen = 1;
#else
				CloseHandle(handle);
				lpInfo->lpParent = 0;
				lpInfo->hParent = 0;
#endif
				goto Done;
			}
			lpInfo->lpParent = 0;
			lpInfo->hParent = 0;

			goto Done;
		}

		// 
		// else create a new instance of DOSFileSystem
		//

		if ((pNewSystem = new DAComponent<DOSFileSystem>) == 0)
		{
			result = GR_GENERIC;
			goto Done;
		}

		strncpy(pNewSystem->szFilename, lpInfo->lpFileName, sizeof(szFilename));
		pNewSystem->dwAccess = lpInfo->dwDesiredAccess;
		pNewSystem->hFile = handle;
		pNewSystem->bOpen = 1;

		goto Done;
	}

	// else we are not a directory

	//
	// Attempt to create new file system instance
	//

	if ((pNewSystem = new DAComponent<DOSFileSystem>) == NULL)
	{
		result = GR_GENERIC;
		goto Done;
	}

	//
	// Make sure that File system thread is running
	//

	DWORD dwCode;
	while (hEvent == 0 && GetExitCodeThread(hThread, &dwCode) && dwCode == STILL_ACTIVE)
		Sleep(1);

	//
	// Establish name and access rights for new file system
	//

	pNewSystem->dwAccess = lpInfo->dwDesiredAccess;

	if (lpInfo->lpFileName)
		strncpy(pNewSystem->szFilename, lpInfo->lpFileName, sizeof(szFilename));

	if (lpInfo->lpParent)
	{
		pNewSystem->pParent = lpInfo->lpParent;
		pNewSystem->hFile = lpInfo->hParent;
		pNewSystem->bOpen = 1;
	}
	else
	{
		HANDLE			handle;
		DWORD			dwAttribs;
		//
		// Associate file handle with new file system
		//

		dwAttribs = ::GetFileAttributes(pNewSystem->szFilename);
		if (dwAttribs != 0xFFFFFFFF && (dwAttribs & FILE_ATTRIBUTE_DIRECTORY))
			handle = INVALID_HANDLE_VALUE;
		else
			handle = ::CreateFile(pNewSystem->szFilename,
				lpInfo->dwDesiredAccess,
				lpInfo->dwShareMode,
				lpInfo->lpSecurityAttributes,
				lpInfo->dwCreationDistribution,
				lpInfo->dwFlagsAndAttributes,
				lpInfo->hTemplateFile);

		if (handle == INVALID_HANDLE_VALUE)
		{
			//
			// CreateFile() failed; system could not be created
			// See if	file is really a directory
			//

			if (dwAttribs == 0xFFFFFFFF || (dwAttribs & FILE_ATTRIBUTE_DIRECTORY) == 0)
			{
				TCOMPONENT_IGNORE_ABSTRACT_DELETE_PUSH();
				delete pNewSystem; // #TODO Should this be replaced with Release()?
				TCOMPONENT_IGNORE_ABSTRACT_DELETE_POP();
				pNewSystem = 0;

				dwLastError = ::GetLastError();
				result = GR_FILE_ERROR;
				goto Done;
			}
			// 
			// else it is a directory, add a "\\" to the end of the name
			//
			if ((pNewSystem->iRootIndex = strlen(pNewSystem->szFilename)) != 0)
				if (pNewSystem->szFilename[pNewSystem->iRootIndex - 1] == '\\')
					pNewSystem->iRootIndex--;

			pNewSystem->szFilename[pNewSystem->iRootIndex] = '\\';
		}
		else
			pNewSystem->bOpen = 1;

		pNewSystem->hFile = handle;
	}

Done:
	*instance = pNewSystem;

#ifdef READFILE_EXTRA_LOGGING
	if (lpInfo->lpParent == nullptr && FAILED(result))
	{
		FILE_WARNING(lpInfo->lpFileName, __FUNCTION__);
	}
#endif

	return result;
}
//--------------------------------------------------------------------------//
//
inline HANDLE DOSFileSystem::TranslateHandle(HANDLE handle)
{
	if (handle == 0)
		return hFile;

	return handle;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::CloseHandle(HANDLE handle)
{
	BOOL result;

	if (handle == 0 || handle == hFile)
	{
		dwLastError = ERROR_INVALID_HANDLE;
		return 0;
	}

	if (pParent)
		result = pParent->CloseHandle(handle);
	else
		result = ::CloseHandle(handle);

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::ReadFile(HANDLE hFileHandle, LPVOID lpBuffer, DWORD nNumberOfBytesToRead,
	LPDWORD lpNumberOfBytesRead,
	LPOVERLAPPED lpOverlapped)
{
	BOOL result = FALSE;

	if (pParent)
	{
		result = pParent->ReadFile(TranslateHandle(hFileHandle),
			lpBuffer,
			nNumberOfBytesToRead,
			lpNumberOfBytesRead,
			lpOverlapped);
		if (result == FALSE)
			dwLastError = pParent->GetLastError();
		return result;
	}

	READWRITE_STRUCT read =
	{
		// .iIndex = ,
		.bBusy = true,
		.bResult = false,
		.bError = false,
		.bWrite = false,
		.hFileHandle = TranslateHandle(hFileHandle),
		.lpBuffer = lpBuffer,
		.nNumberOfBytesToRead = nNumberOfBytesToRead,
		// .lpNumberOfBytesRead = ,
		// .lpOverlapped = ,
		// .start_offset = ,
		// .queueNode = ,
	};

	if ((read.lpNumberOfBytesRead = lpNumberOfBytesRead) != 0)
		*lpNumberOfBytesRead = 0;

	if ((read.lpOverlapped = lpOverlapped) == 0)
		read.start_offset.dwLow = GetFilePosition(hFileHandle, (PLONG)&read.start_offset.dwHigh);
	else
	{
		read.start_offset.dwLow = lpOverlapped->Offset;
		read.start_offset.dwHigh = lpOverlapped->OffsetHigh;
		lpOverlapped->Internal =
			lpOverlapped->InternalHigh = 0;
		if (lpOverlapped->hEvent)
			ResetEvent(lpOverlapped->hEvent);
	}

	SerialCall(this, (DAFILE_SERIAL_PROC)&DOSFileSystem::StartReadWrite_S, &read);
	if (read.bBusy)  // could not find an open slot
	{
		dwLastError = ERROR_OUT_OF_STRUCTURES;
		result = FALSE;
		return result;
	}

	// read.bBusy must be false, read op started

	int iIndex = read.iIndex;

	if (operations[iIndex].bResult)
	{
		result = (operations[iIndex].bError == 0);	// was there an error?
		operations[iIndex].bBusy = 0;
		numOperations--;
	}
	else
		if (lpOverlapped)
		{
			dwLastError = ERROR_IO_PENDING;
			result = FALSE;
		}
		else
			GENERAL_FATAL("ReadFile() internal error");

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::WriteFile(HANDLE hFileHandle, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite,
	LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)
{
	BOOL result = FALSE;
	READWRITE_STRUCT read;
	int iIndex;

	if (pParent)
	{
		result = pParent->WriteFile(TranslateHandle(hFileHandle),
			lpBuffer,
			nNumberOfBytesToWrite,
			lpNumberOfBytesWritten,
			lpOverlapped);
		if (result == 0)
			dwLastError = pParent->GetLastError();
		return result;
	}

	read.bBusy = true;
	read.bWrite = true;
	read.bResult = false;
	read.bError = false;
	read.hFileHandle = TranslateHandle(hFileHandle);
	read.lpBuffer = lpBuffer;
	read.nNumberOfBytesToRead = nNumberOfBytesToWrite;
	if ((read.lpNumberOfBytesRead = lpNumberOfBytesWritten) != 0)
		*lpNumberOfBytesWritten = 0;

	if ((read.lpOverlapped = lpOverlapped) == 0)
		read.start_offset.dwLow = GetFilePosition(hFileHandle, (PLONG)&read.start_offset.dwHigh);
	else
	{
		read.start_offset.dwLow = lpOverlapped->Offset;
		read.start_offset.dwHigh = lpOverlapped->OffsetHigh;
		lpOverlapped->Internal =
			lpOverlapped->InternalHigh = 0;
		if (lpOverlapped->hEvent)
			ResetEvent(lpOverlapped->hEvent);
	}

	SerialCall(this, (DAFILE_SERIAL_PROC)&DOSFileSystem::StartReadWrite_S, &read);
	if (read.bBusy)  // could not find an open slot
	{
		dwLastError = ERROR_OUT_OF_STRUCTURES;
		result = FALSE;
		return result;
	}

	// read.bBusy is now false, write op was started

	iIndex = read.iIndex;

	if (operations[iIndex].bResult)
	{
		result = (operations[iIndex].bError == 0);	// was there an error?
		operations[iIndex].bBusy = 0;
		numOperations--;
	}
	else
		if (lpOverlapped)
		{
			dwLastError = ERROR_IO_PENDING;
			result = FALSE;
		}
		else
			GENERAL_FATAL("WriteFile() internal error");

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::GetOverlappedResult(HANDLE hFileHandle, LPOVERLAPPED lpOverlapped,
	LPDWORD lpNumberOfBytesTransferred, BOOL bWait)
{
	DWORD i;

	if (pParent)
	{
		BOOL result = pParent->GetOverlappedResult(TranslateHandle(hFileHandle),
			lpOverlapped,
			lpNumberOfBytesTransferred,
			bWait);
		if (result == 0)
			dwLastError = pParent->GetLastError();
		return result;
	}

	if (lpOverlapped == 0)
	{
		dwLastError = ERROR_INVALID_PARAMETER;
		return 0;
	}
	hFileHandle = TranslateHandle(hFileHandle);

	for (i = 0; i < MAX_OVERLAPPED_OPS; i++)
		if (operations[i].bBusy &&
			operations[i].lpOverlapped == lpOverlapped &&
			operations[i].hFileHandle == hFileHandle)
		{
			// found it

			if (bWait)
				while (operations[i].bResult == 0)
				{
					if (lpOverlapped->hEvent && GetCurrentThreadId() != dwThreadID)
					{
						WaitForSingleObject(lpOverlapped->hEvent, INFINITE);
						while (operations[i].bResult == 0)
							WaitForDOSThread();
					}
					else
						WaitForDOSThread();
				}

			if (operations[i].bResult == 0)
			{
				dwLastError = ERROR_IO_PENDING;
				return 0;
			}

			*lpNumberOfBytesTransferred = lpOverlapped->Internal;
			BOOL result = (operations[i].bError == 0);
			operations[i].lpOverlapped = 0;
			operations[i].hFileHandle = 0;
			operations[i].bBusy = 0;
			numOperations--;
			return result;
		}

	// overlapped operation was not found

	dwLastError = ERROR_INVALID_PARAMETER;
	return 0;
}
//--------------------------------------------------------------------------//
//
DWORD DOSFileSystem::SetFilePointer(HANDLE hFileHandle, LONG lDistanceToMove,
	PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
{
	DWORD result;

	if (pParent)
	{
		result = pParent->SetFilePointer(TranslateHandle(hFileHandle),
			lDistanceToMove,
			lpDistanceToMoveHigh,
			dwMoveMethod);
		if (result == 0xFFFFFFFF)
			dwLastError = pParent->GetLastError();

		return result;
	}

	SEEK_STRUCT seek;
	seek.hFileHandle = TranslateHandle(hFileHandle);
	seek.lDistanceToMove = lDistanceToMove;
	seek.lpDistanceToMoveHigh = lpDistanceToMoveHigh;
	seek.dwMoveMethod = dwMoveMethod;
	result = SerialCall(this, (DAFILE_SERIAL_PROC)&DOSFileSystem::Seek_S, &seek);

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::SetEndOfFile(HANDLE hFileHandle)
{
	BOOL result;

	if (pParent)
	{
		result = pParent->SetEndOfFile(TranslateHandle(hFileHandle));

		if (result == 0)
			dwLastError = pParent->GetLastError();
	}
	else
	{
		result = ::SetEndOfFile(TranslateHandle(hFileHandle));

		if (result == 0)
			dwLastError = ::GetLastError();
	}

	return result;
}
//--------------------------------------------------------------------------//
//
DWORD DOSFileSystem::GetFileSize(HANDLE hFileHandle, LPDWORD lpFileSizeHigh)
{
	DWORD result;

	if (pParent)
		result = pParent->GetFileSize(TranslateHandle(hFileHandle), lpFileSizeHigh);
	else
		result = ::GetFileSize(TranslateHandle(hFileHandle), lpFileSizeHigh);

	if (result == 0xFFFFFFFF)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::LockFile(HANDLE hFileHandle,
	DWORD dwFileOffsetLow,
	DWORD dwFileOffsetHigh,
	DWORD nNumberOfBytesToLockLow,
	DWORD nNumberOfBytesToLockHigh)
{
	BOOL result;

	if (pParent)
	{
		result = pParent->LockFile(TranslateHandle(hFileHandle),
			dwFileOffsetLow,
			dwFileOffsetHigh,
			nNumberOfBytesToLockLow,
			nNumberOfBytesToLockHigh);

		if (result == 0)
			dwLastError = pParent->GetLastError();
	}
	else
	{
		result = ::LockFile(TranslateHandle(hFileHandle),
			dwFileOffsetLow,
			dwFileOffsetHigh,
			nNumberOfBytesToLockLow,
			nNumberOfBytesToLockHigh);

		if (result == 0)
		{
			LONG lOrigTick = GetTickCount();
			LONG lTickDiff;

			if ((dwLastError = ::GetLastError()) == ERROR_LOCK_VIOLATION)
				do
				{
					Sleep(1);
					lTickDiff = GetTickCount() - lOrigTick;

					result = ::LockFile(TranslateHandle(hFileHandle),
						dwFileOffsetLow,
						dwFileOffsetHigh,
						nNumberOfBytesToLockLow,
						nNumberOfBytesToLockHigh);

					if (result)
						break;

					dwLastError = ::GetLastError();

				} while (lTickDiff >= 0 && lTickDiff < MAX_LOCK_WAIT);
		}
	}

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::UnlockFile(HANDLE hFileHandle,
	DWORD dwFileOffsetLow,
	DWORD dwFileOffsetHigh,
	DWORD nNumberOfBytesToUnlockLow,
	DWORD nNumberOfBytesToUnlockHigh)
{
	BOOL result;

	if (pParent)
	{
		result = pParent->UnlockFile(TranslateHandle(hFileHandle),
			dwFileOffsetLow,
			dwFileOffsetHigh,
			nNumberOfBytesToUnlockLow,
			nNumberOfBytesToUnlockHigh);

		if (result == 0)
			dwLastError = pParent->GetLastError();
	}
	else
	{
		result = ::UnlockFile(TranslateHandle(hFileHandle),
			dwFileOffsetLow,
			dwFileOffsetHigh,
			nNumberOfBytesToUnlockLow,
			nNumberOfBytesToUnlockHigh);

		if (result == 0)
			dwLastError = ::GetLastError();
	}

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::GetFileTime(HANDLE hFileHandle, LPFILETIME lpCreationTime,
	LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)
{
	BOOL result;

	if (pParent)
		result = pParent->GetFileTime(TranslateHandle(hFileHandle),
			lpCreationTime,
			lpLastAccessTime,
			lpLastWriteTime);
	else
		result = ::GetFileTime(TranslateHandle(hFileHandle),
			lpCreationTime,
			lpLastAccessTime,
			lpLastWriteTime);
	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::SetFileTime(HANDLE hFileHandle, CONST FILETIME* lpCreationTime,
	CONST FILETIME* lpLastAccessTime,
	CONST FILETIME* lpLastWriteTime)
{
	BOOL result;

	if (pParent)
		result = pParent->SetFileTime(TranslateHandle(hFileHandle),
			lpCreationTime,
			lpLastAccessTime,
			lpLastWriteTime);
	else
		result = ::SetFileTime(TranslateHandle(hFileHandle),
			lpCreationTime,
			lpLastAccessTime,
			lpLastWriteTime);

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
HANDLE DOSFileSystem::CreateFileMapping(HANDLE hFileHandle, LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
	DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCTSTR lpName)
{
	if (pParent)
	{
		HANDLE handle;

		handle = pParent->CreateFileMapping(TranslateHandle(hFileHandle),
			lpFileMappingAttributes,
			flProtect,
			dwMaximumSizeHigh,
			dwMaximumSizeLow,
			lpName);
		if (handle == 0)
			dwLastError = pParent->GetLastError();
		return handle;
	}
	else
	{
		SYSTEM_INFO info;
		GetSystemInfo(&info);
		dwAllocationMask = info.dwAllocationGranularity - 1;

		if (hFile == INVALID_HANDLE_VALUE)
		{
			return ::CreateFileMapping(hFileHandle,
				lpFileMappingAttributes,
				flProtect,
				dwMaximumSizeHigh,
				dwMaximumSizeLow,
				lpName);
		}

		if (hFileHandle && hFileHandle != hFile)
		{
			dwLastError = ERROR_INVALID_HANDLE;
			return 0;
		}

		HANDLE hMapping = 0;

		if (dwAccess & GENERIC_WRITE)
		{
			dwLastError = ERROR_ACCESS_DENIED;
		}
		else
		{
			hMapping = ::CreateFileMapping(hFile,
				lpFileMappingAttributes,
				flProtect,
				dwMaximumSizeHigh,
				dwMaximumSizeLow,
				lpName);
			if (hMapping == 0)
				dwLastError = ::GetLastError();
		}

		return hMapping;
	}
}
//--------------------------------------------------------------------------//
//
LPVOID DOSFileSystem::MapViewOfFile(HANDLE hFileMappingObject,
	DWORD dwDesiredAccess,
	DWORD dwFileOffsetHigh,
	DWORD dwFileOffsetLow,
	DWORD dwNumberOfBytesToMap)
{
	LPVOID result;

	if (pParent)
		result = pParent->MapViewOfFile(hFileMappingObject,
			dwDesiredAccess,
			dwFileOffsetHigh,
			dwFileOffsetLow,
			dwNumberOfBytesToMap);
	else
	{
		DWORD dwExtra = dwFileOffsetLow & dwAllocationMask;
		result = ::MapViewOfFile(hFileMappingObject,
			dwDesiredAccess,
			dwFileOffsetHigh,
			dwFileOffsetLow ^ dwExtra,
			dwNumberOfBytesToMap + dwExtra);
		if (result)
			result = (LPVOID)((DWORD)result + dwExtra);
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::UnmapViewOfFile(LPCVOID lpBaseAddress)
{
	BOOL result;

	if (pParent)
		result = pParent->UnmapViewOfFile(lpBaseAddress);
	else
	{
		lpBaseAddress = (LPCVOID)((DWORD)lpBaseAddress & (~0xFFF));		// 4K page resolution
		result = ::UnmapViewOfFile(lpBaseAddress);
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
HANDLE DOSFileSystem::FindFirstFile(LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData)
{
	HANDLE result;

	if (bOpen == 0)
	{
		char buffer[MAX_PATH + 4];

		if (iRootIndex)
			memcpy(buffer, szFilename, iRootIndex);
		if (GetAbsolutePath(buffer + iRootIndex, lpFileName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return INVALID_HANDLE_VALUE;
		}

		result = ::FindFirstFile(buffer, lpFindFileData);
	}
	else
	{
		dwLastError = ERROR_FILE_NOT_FOUND;
		return INVALID_HANDLE_VALUE;
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::FindNextFile(HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData)
{
	BOOL result;

	result = ::FindNextFile(hFindFile, lpFindFileData);

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::FindClose(HANDLE hFindFile)
{
	BOOL result;

	result = ::FindClose(hFindFile);

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::CreateDirectory(LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
	BOOL result;

	if (bOpen == 0)
	{
		char buffer[MAX_PATH + 4];

		if (iRootIndex)
			memcpy(buffer, szFilename, iRootIndex);
		if (GetAbsolutePath(buffer + iRootIndex, lpPathName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return 0;
		}

		result = ::CreateDirectory(buffer, lpSecurityAttributes);
	}
	else
	{
		dwLastError = ERROR_ACCESS_DENIED;
		return 0;
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::RemoveDirectory(LPCTSTR lpPathName)
{
	BOOL result;

	if (bOpen == 0)
	{
		char buffer[MAX_PATH + 4];

		if (iRootIndex)
			memcpy(buffer, szFilename, iRootIndex);
		if (GetAbsolutePath(buffer + iRootIndex, lpPathName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return 0;
		}

		result = ::RemoveDirectory(buffer);
	}
	else
	{
		dwLastError = ERROR_ACCESS_DENIED;
		return 0;
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
DWORD DOSFileSystem::GetCurrentDirectory(DWORD nBufferLength, LPTSTR lpBuffer)
{
	DWORD result;

	if (bOpen == 0)
	{
		DWORD len;

		len = strlen(szFilename + iRootIndex);
		len = __max(len, 2);
		len = __min(len, nBufferLength);
		if (len > 0)
		{
			memcpy(lpBuffer, szFilename + iRootIndex, len);
			lpBuffer[len - 1] = 0;
			result = len - 1;
		}
		else
			result = 0;
	}
	else
	{
		dwLastError = ERROR_ACCESS_DENIED;
		return 0;
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::SetCurrentDirectory(LPCTSTR lpPathName)
{
	BOOL result;

	if (bOpen == 0)
	{
		char buffer[MAX_PATH + 4];

		memcpy(buffer, szFilename, iRootIndex);
		if ((result = GetAbsolutePath(buffer + iRootIndex, lpPathName, MAX_PATH - iRootIndex)) == 0)
			dwLastError = ERROR_BAD_PATHNAME;
		else
		{
			int len;
			DWORD dwAttribs;

			dwAttribs = ::GetFileAttributes(buffer);

			if (dwAttribs == 0xFFFFFFFF || (dwAttribs & FILE_ATTRIBUTE_DIRECTORY) == 0)
			{
				dwLastError = ERROR_BAD_PATHNAME;
				return 0;
			}
			else
			{
				len = strlen(buffer);
				memcpy(szFilename, buffer, len + 1);
				if (szFilename[len - 1] != '\\')
				{
					szFilename[len] = '\\';
					szFilename[len + 1] = 0;
				}
			}
		}

		return result;
	}
	else
	{
		dwLastError = ERROR_ACCESS_DENIED;
		return 0;
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::DeleteFile(LPCTSTR lpFileName)
{
	BOOL result;

	if (bOpen == 0)
	{
		char buffer[MAX_PATH + 4];

		if (iRootIndex)
			memcpy(buffer, szFilename, iRootIndex);
		if (GetAbsolutePath(buffer + iRootIndex, lpFileName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return 0;
		}

		result = ::DeleteFile(buffer);
	}
	else
	{
		dwLastError = ERROR_ACCESS_DENIED;
		return 0;
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::CopyFile(LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists)
{
	BOOL result;

	if (bOpen == 0)
	{
		char buffer1[MAX_PATH + 4];
		char buffer2[MAX_PATH + 4];

		if (iRootIndex)
		{
			memcpy(buffer1, szFilename, iRootIndex);
			memcpy(buffer2, szFilename, iRootIndex);
		}
		if (GetAbsolutePath(buffer1 + iRootIndex, lpExistingFileName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return 0;
		}
		if (GetAbsolutePath(buffer2 + iRootIndex, lpNewFileName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return 0;
		}

		result = ::CopyFile(buffer1, buffer2, bFailIfExists);
	}
	else
	{
		dwLastError = ERROR_ACCESS_DENIED;
		return 0;
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::MoveFile(LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName)
{
	BOOL result;

	if (bOpen == 0)
	{
		char buffer1[MAX_PATH + 4];
		char buffer2[MAX_PATH + 4];

		if (iRootIndex)
		{
			memcpy(buffer1, szFilename, iRootIndex);
			memcpy(buffer2, szFilename, iRootIndex);
		}
		if (GetAbsolutePath(buffer1 + iRootIndex, lpExistingFileName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return 0;
		}
		if (GetAbsolutePath(buffer2 + iRootIndex, lpNewFileName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return 0;
		}

		result = ::MoveFile(buffer1, buffer2);
	}
	else
	{
		dwLastError = ERROR_ACCESS_DENIED;
		return 0;
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
DWORD DOSFileSystem::GetFileAttributes(LPCTSTR lpFileName)
{
	DWORD result;

	if (bOpen == 0)
	{
		char buffer[MAX_PATH + 4];

		if (iRootIndex)
			memcpy(buffer, szFilename, iRootIndex);
		if (GetAbsolutePath(buffer + iRootIndex, lpFileName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return 0;
		}

		result = ::GetFileAttributes(buffer);
	}
	else
	{
		dwLastError = ERROR_ACCESS_DENIED;
		return 0;
	}

	if (result == 0xFFFFFFFF)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL DOSFileSystem::SetFileAttributes(LPCTSTR lpFileName, DWORD dwFileAttributes)
{
	BOOL result;

	if (bOpen == 0)
	{
		char buffer[MAX_PATH + 4];

		if (iRootIndex)
			memcpy(buffer, szFilename, iRootIndex);
		if (GetAbsolutePath(buffer + iRootIndex, lpFileName, MAX_PATH - iRootIndex) == 0)
		{
			dwLastError = ERROR_BAD_PATHNAME;
			return 0;
		}

		result = ::SetFileAttributes(buffer, dwFileAttributes);
	}
	else
	{
		dwLastError = ERROR_ACCESS_DENIED;
		return 0;
	}

	if (result == 0)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
DWORD DOSFileSystem::GetLastError(VOID)
{
	return dwLastError;
}
//--------------------------------------------------------------------------//
//
HANDLE DOSFileSystem::OpenChild(DAFILEDESC* lpInfo)
{
	char buffer[MAX_PATH + 4];
	HANDLE handle;
	DWORD dwAttribs;

	if (bOpen || lpInfo->lpFileName == 0)
	{
		dwLastError = ERROR_FILE_NOT_FOUND;
		return INVALID_HANDLE_VALUE;
	}

	if (iRootIndex)
		memcpy(buffer, szFilename, iRootIndex);
	if (GetAbsolutePath(buffer + iRootIndex, lpInfo->lpFileName, MAX_PATH - iRootIndex) == 0)
	{
		dwLastError = ERROR_FILE_NOT_FOUND;
		return INVALID_HANDLE_VALUE;
	}

	dwAttribs = ::GetFileAttributes(buffer);
	if (dwAttribs != 0xFFFFFFFF && (dwAttribs & FILE_ATTRIBUTE_DIRECTORY))
		handle = INVALID_HANDLE_VALUE;
	else
		handle = ::CreateFile(buffer,
			lpInfo->dwDesiredAccess,
			lpInfo->dwShareMode,
			lpInfo->lpSecurityAttributes,
			lpInfo->dwCreationDistribution,
			lpInfo->dwFlagsAndAttributes,
			lpInfo->hTemplateFile);


	if (handle == INVALID_HANDLE_VALUE)
		dwLastError = ::GetLastError();

	return handle;
}
//--------------------------------------------------------------------------//
//
DWORD DOSFileSystem::GetFilePosition(HANDLE hFileHandle, PLONG pPositionHigh)
{
	DWORD result;

	if (pParent)
		return pParent->GetFilePosition(TranslateHandle(hFileHandle), pPositionHigh);

	if (hFileHandle == 0 || hFileHandle == hFile)
	{
		if (pPositionHigh)
			*pPositionHigh = file_position.dwHigh;
		return file_position.dwLow;
	}

	if (pPositionHigh)
		*pPositionHigh = 0;
	result = ::SetFilePointer(hFileHandle, 0, pPositionHigh, FILE_CURRENT);

	if (result == 0xFFFFFFFF)
		dwLastError = (pParent) ? (pParent->GetLastError()) : (::GetLastError());

	return result;
}
//--------------------------------------------------------------------------//
//
LONG DOSFileSystem::GetFileName(LPSTR lpBuffer, LONG lBufferSize)
{
	lBufferSize = __min(lBufferSize, (LONG)strlen(szFilename) + 1);

	if (lBufferSize > 0 && lpBuffer)
	{
		memcpy(lpBuffer, szFilename, lBufferSize);
		if (iRootIndex && lBufferSize > iRootIndex)
			lpBuffer[iRootIndex] = 0;
		else
			lpBuffer[lBufferSize - 1] = 0;
	}

	return lBufferSize;
}
//--------------------------------------------------------------------------//
//
DWORD DOSFileSystem::GetAccessType(VOID)
{
	return dwAccess;
}
//--------------------------------------------------------------------------//
//
GENRESULT DOSFileSystem::GetParentSystem(LPFILESYSTEM* lplpFileSystem)
{
	if ((*lplpFileSystem = pParent) != 0)
		pParent->AddRef();
	return GR_OK;
}
//--------------------------------------------------------------------------//
//
GENRESULT DOSFileSystem::SetPreference(DWORD dwNumber, DWORD  dwValue)
{
	return GR_GENERIC;
}
//--------------------------------------------------------------------------//
//
GENRESULT DOSFileSystem::GetPreference(DWORD dwNumber, PDWORD pdwValue)
{
	return GR_GENERIC;
}
//--------------------------------------------------------------------------//
//
GENRESULT DOSFileSystem::ReadDirectoryExtension(HANDLE hFile, LPVOID lpBuffer,
	DWORD nNumberOfBytesToRead,
	LPDWORD lpNumberOfBytesRead, DWORD dwStartOffset)
{
	return GR_GENERIC;
}
//--------------------------------------------------------------------------//
//
GENRESULT DOSFileSystem::WriteDirectoryExtension(HANDLE hFile, LPCVOID lpBuffer,
	DWORD nNumberOfBytesToWrite,
	LPDWORD lpNumberOfBytesWritten, DWORD dwStartOffset)
{
	return GR_GENERIC;
}
//--------------------------------------------------------------------------//
//
LONG DOSFileSystem::SerialCall(LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, VOID* lpContext)
{
	if (pParent)
		return pParent->SerialCall(lpSystem, lpProc, lpContext);
	else
	{
		EnterCriticalSection(&criticalSection);
		LONG result = (lpSystem->*(lpProc))(lpContext);
		LeaveCriticalSection(&criticalSection);
		return result;
	}
}
//--------------------------------------------------------------------------//
//
LONG DOSFileSystem::Seek_S(void* lpContext)
{
	SEEK_STRUCT* pSeek = (SEEK_STRUCT*)lpContext;
	FILE_OFFSET newPosition, currentPosition;

	newPosition.dwLow = pSeek->lDistanceToMove;
	if (pSeek->lpDistanceToMoveHigh)
		newPosition.dwHigh = *(pSeek->lpDistanceToMoveHigh);
	else
		newPosition.dwHigh = (S32(newPosition.dwLow) < 0) ? ((U32)-1) : 0;

	// convert to absolute seek to prevent coherency problem with file mapping

	switch (pSeek->dwMoveMethod)
	{
	case FILE_BEGIN:
	default:
		break;

	case FILE_CURRENT:
		currentPosition.dwLow = GetFilePosition(pSeek->hFileHandle, (PLONG)&currentPosition.dwHigh);
		newPosition += currentPosition;
		break;

	case FILE_END:
		currentPosition.dwLow = GetFileSize(pSeek->hFileHandle, &currentPosition.dwHigh);
		currentPosition -= newPosition;
		newPosition = currentPosition;
		break;
	}

	newPosition.dwLow = ::SetFilePointer(pSeek->hFileHandle,
		newPosition.dwLow,
		(PLONG)&newPosition.dwHigh,
		FILE_BEGIN);

	if (newPosition.dwLow != 0xFFFFFFFF ||
		(dwLastError = ::GetLastError()) == NO_ERROR)
	{
		if (pSeek->hFileHandle == hFile)
			file_position = newPosition;

		if (pSeek->lpDistanceToMoveHigh)
			*(pSeek->lpDistanceToMoveHigh) = newPosition.dwHigh;
	}

	return newPosition.dwLow;
}
//--------------------------------------------------------------------------//
//
LONG DOSFileSystem::StartReadWrite_S(VOID* lpContext)
{
	READWRITE_STRUCT* pRead = (READWRITE_STRUCT*)lpContext;

	DWORD i;

	i = (pRead->lpOverlapped) ? 1 : 0;		// only non-overlapped get access to slot 0

	for (; i < MAX_OVERLAPPED_OPS; i++)
		if (operations[i].bBusy == 0)
		{
			operations[i] = *pRead;
			numOperations++;
			pRead->iIndex = i;
			pRead->bBusy = 0;		// signal that read has started

			if (operations[i].lpOverlapped == 0)
				return ReadWrite_S(&(operations[i]));
			else   // schedule file read/write
			{
				operations[i].lpSystem = this;
				operations[i].lpProc = (DAFILE_SERIAL_PROC)&DOSFileSystem::ReadWrite_S;
				PostReadWriteMessage(operations + i);
				return 0;
			}
		}

	GENERAL_WARNING("Max overlapped read/write ops exceeded.\n");
	return 0;
}
//--------------------------------------------------------------------------//
//
LONG DOSFileSystem::ReadWrite_S(VOID* lpContext)
{
	READWRITE_STRUCT* pRead = (READWRITE_STRUCT*)lpContext;
	DWORD dwBytesRead, dwBytesToRead;
	FILE_OFFSET offset;
	LONG result;

	// seek if file pointer is not in the right place

	offset.dwLow = GetFilePosition(pRead->hFileHandle, (PLONG)&offset.dwHigh);
	if (offset != pRead->start_offset)
	{
		SEEK_STRUCT seek;

		seek.hFileHandle = pRead->hFileHandle;
		seek.lDistanceToMove = pRead->start_offset.dwLow;
		seek.lpDistanceToMoveHigh = (PLONG) & (pRead->start_offset.dwHigh);
		seek.dwMoveMethod = FILE_BEGIN;
		result = Seek_S(&seek);

		if (result == 0xFFFFFFFF && dwLastError != NO_ERROR)
		{
			pRead->bError = 1;
			pRead->bResult = 1;
			return 0;
		}
	}

	dwBytesToRead = pRead->nNumberOfBytesToRead;	// always write full size
	dwBytesRead = 0;

	if (pRead->bWrite)
	{
		result = ::WriteFile(pRead->hFileHandle,
			pRead->lpBuffer,
			dwBytesToRead,
			&dwBytesRead,
			0);
	}
	else
	{
		result = ::ReadFile(pRead->hFileHandle,
			(void*)pRead->lpBuffer,
			dwBytesToRead,
			&dwBytesRead,
			0);
	}

	if (result)		// update read structure
	{
		pRead->lpBuffer = ((char*)pRead->lpBuffer) + dwBytesRead;
		if (pRead->lpNumberOfBytesRead)
			*(pRead->lpNumberOfBytesRead) += dwBytesRead;
		pRead->start_offset += dwBytesRead;
		if (pRead->lpOverlapped)
			pRead->lpOverlapped->Internal += dwBytesRead;
		pRead->nNumberOfBytesToRead -= dwBytesRead;
	}

	if (result == 0)
		dwLastError = ::GetLastError();
	else
	{
		if (pRead->hFileHandle == hFile)
			file_position += dwBytesRead;
	}

	if (pRead->lpOverlapped && pRead->lpOverlapped->hEvent)
		SetEvent(pRead->lpOverlapped->hEvent);

	pRead->bError = (result == 0);
	pRead->bResult = 1;
	return 1;
}
//--------------------------------------------------------------------------//
//
LONG DOSFileSystem::CloseAllHandles_S(VOID* lpContext)
{
	DWORD j;
	LONG result = 0;

	if (hFile && hFile != INVALID_HANDLE_VALUE)
	{
		for (j = 0; j < MAX_OVERLAPPED_OPS; j++)
		{
			if (operations[j].hFileHandle == hFile)
			{
				operations[j].hFileHandle = INVALID_HANDLE_VALUE;
				if (operations[j].bBusy)
				{
					result++;
					operations[j].bBusy = 0;
					numOperations--;
				}

			}
		}

		::CloseHandle(hFile);
		hFile = INVALID_HANDLE_VALUE;
	}

	return result;
}
//--------------------------------------------------------------------------//
//

//--------------------------------------------------------------------------//
// Get absolute path in terms of this file system
//  returns a path with a leading '\\'
BOOL DOSFileSystem::GetAbsolutePath(char* lpOutput, LPCTSTR lpInput, LONG lSize)
{
	int len;
	char* ptr;
	BOOL result = TRUE;

	if (lSize <= 0)
		return FALSE;

	// #HACK Some paths are absolute for reasons unknown to sanity
	// so this 'fixes' the output. Really this whole function
	// just needs a nice rewrite
	{
		DWORD dwAttribs = ::GetFileAttributes(lpInput);
		if (dwAttribs != 0xFFFFFFFF && (dwAttribs & FILE_ATTRIBUTE_ARCHIVE))
		{
			size_t inputLength = strlen(lpInput);
			if (PathIsRelativeA(lpInput))
			{
				if (strstr(lpInput, szFilename) == lpInput)
				{
					lpInput += strlen(szFilename);
				}
			}
			// crappy way to detect if the path begins with a hard drive
			// If lpInput is already an absolute path (begins with a hard drive letter), simply copy it.
			else if(inputLength >= 2 && lpInput[1] == ':')
			{
				strcpy(lpOutput, lpInput);
				return TRUE;
			}
		}
	}

	// If lpInput is already an absolute path (begins with a backslash), simply copy it.
	if (lpInput[0] == '\\')
	{
		strncpy(lpOutput, lpInput, lSize);
		lpOutput[lSize - 1] = '\0';
		switchchar_convert(lpOutput);
		return TRUE;
	}

	// If lpInput begins with a parent-directory token (".."), produce a relative result.
	if (lpInput[0] == '.' && lpInput[1] == '.')
	{
		// Start with an empty string (no base directory copied)
		lpOutput[0] = '\0';
	}
	else
	{
		// Otherwise, use the base (szFilename + iRootIndex) as before.
		strncpy(lpOutput, szFilename + iRootIndex, lSize);
	}

	// Skip a leading "./" or ".\" if present.
	if (lpInput[0] == '.' && (lpInput[1] == '\\' || lpInput[1] == '/'))
		lpInput += 2;

	// Process relative ".." tokens.
	while (lpInput[0] == '.' && lpInput[1] == '.')
	{
		len = strlen(lpOutput);
		if (len == 0)
		{
			// When lpOutput is empty, simply append "..\\".
			if (len + 3 < lSize)
			{
				strcat(lpOutput, "..\\");
			}
			else
			{
				result = FALSE;
				break;
			}
		}
		else
		{
			// If there is an existing base, try to remove one directory level.
			if (len > 1)
			{
				// Remove trailing '\' if it exists.
				if (lpOutput[len - 1] == '\\')
				{
					lpOutput[len - 1] = '\0';
					len--;
				}
				// Find the previous backslash and terminate the string after it.
				if ((ptr = strrchr(lpOutput, '\\')) != NULL)
					ptr[1] = '\0';
				else
					result = FALSE;
			}
			else
			{
				// If lpOutput is only a single character (like a leading '\'),
				// clear it and append the "..\\".
				lpOutput[0] = '\0';
				if (strlen(lpOutput) + 3 < lSize)
					strcat(lpOutput, "..\\");
				else
				{
					result = FALSE;
					break;
				}
			}
		}
		lpInput += 2;
		// Skip any directory separator following the ".." pair.
		if (lpInput[0] == '\\' || lpInput[0] == '/')
			lpInput++;
	}

	// Append the remaining portion of lpInput.
	len = strlen(lpOutput);
	if (lSize - len > 0)
	{
		strncat(lpOutput, lpInput, lSize - len);
	}

	//// Ensure the resulting path ends with a backslash.
	//len = strlen(lpOutput);
	//if (len > 0 && lpOutput[len - 1] != '\\')
	//{
	//	if (len + 1 < lSize)
	//		strcat(lpOutput, "\\");
	//	else
	//		result = FALSE;
	//}

	switchchar_convert(lpOutput);
	return result;
}

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//




//--------------------------------------------------------------------------//
//
static BOOL32 __fastcall _local_PatternMatch(const char* string, const char* pattern)
{
	BOOL32 result;

	if (pattern[0] == '*')
	{
		if ((result = _local_PatternMatch(string, ++pattern)) == 0)
		{
			while (string[0])
				if ((result = _local_PatternMatch(++string, pattern)) != 0)
					break;
		}
	}
	else
	{
		if (pattern[0] == 0 && string[0] == 0)
			result = 1;
		else
		{
			if (pattern[0] == '?' && string[0] == 0)
				result = 0;
			else
				if (pattern[0] != '?' && toupper(pattern[0]) != toupper(string[0]))
					result = 0;
				else
					return _local_PatternMatch(string + 1, pattern + 1);
		}
	}

	return result;
}
//--------------------------------------------------------------------------//
//
BOOL32 __fastcall PatternMatch(const char* _string, const char* _pattern)
{
	char string[MAX_PATH + 4];
	char pattern[MAX_PATH + 4];
	const char* ptr;

	if ((ptr = strchr(_pattern, '.')) != 0)
	{
		if (ptr == _pattern)	// if pattern starts with a '.'
		{
			pattern[0] = '*';			// prepend a '*'
			strcpy(pattern + 1, _pattern);
		}
		else
		{
			strcpy(pattern, _pattern);	// else pattern is ok
		}
	}
	else	// no '.' in pattern
	{
		strcpy(pattern, _pattern);	// else pattern is ok
		strcat(pattern, ".*");		// append ".*" to pattern (conform to DOS rules)
	}

	strcpy(string, _string);
	if ((ptr = strchr(_string, '.')) == 0)
		strcat(string, ".");		// append "." to filename (conform to DOS rules)

	return _local_PatternMatch(string, pattern);
}
//--------------------------------------------------------------------------
//  
#if ENABLE_DOS_THREADING
static long __stdcall DispatchQueuedMessage(const QueueNode* node)
{
	switch (node->message)
	{
	case DOSFILE_SERIAL:
	{
		SERIAL_STRUCT* serial = node->pSerial;
		return serial->lpSystem->SerialCall(serial->lpSystem, serial->lpProc, (void*)serial);
	}
	break;

	}	// end of switch

	return 0;
}
#endif
//--------------------------------------------------------------------------//
//
static void WaitForDOSThread(void)
{
#if ENABLE_DOS_THREADING
	// if we are already running in the file system thread
	if (GetCurrentThreadId() == dwThreadID)
	{
		QueueNode* node;

		if (GetQueuedMessage(&node))
		{
			if (node->message == WM_QUIT)
				PostQueuedMessage(node);		// repost the quit message
			else
				DispatchQueuedMessage(node);
		}
	}
	else
		Sleep(0);
#else
	NOT_IMPLEMENTED;
#endif // ENABLE_DOS_THREADING
}

#if ENABLE_DOS_THREADING
static DWORD CALLBACK DOSFileMain(void* pNull)
{
	//
	// create event
	//
	hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);		// create an auto-reset event

	if (!hEvent)
	{
		GENERAL_ERROR("Failed to create event");
		goto Done;
	}

	// main loop

	while (1)
	{
		QueueNode* node;

		WaitForSingleObject(hEvent, INFINITE);

		while (GetQueuedMessage(&node))
		{
			if (node->message == WM_QUIT)
				goto Done;
			else
				DispatchQueuedMessage(node);
		}
	}

	// close down the show
Done:
	if (hEvent)
	{
		CloseHandle(hEvent);
		hEvent = 0;
	}

	return 0;
}
#endif // ENABLE_DOS_THREADING

#if ENABLE_DOS_THREADING
extern "C" BOOL StartUpFileSystem(void)
{
	if (hThread)
		return 1;

	hThread = CreateThread(0, 4096, (LPTHREAD_START_ROUTINE)DOSFileMain,
		(LPVOID)0, 0, &dwThreadID);

	if (hThread == 0)
		return 0;

	return 1;
}
#endif // ENABLE_DOS_THREADING



extern "C"
{
	LONG __stdcall DOS__SerialCall(LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, VOID* lpContext)
	{
		EnterCriticalSection(&pFirstSystem->criticalSection);
		LONG result = (lpSystem->*(lpProc))(lpContext);
		LeaveCriticalSection(&pFirstSystem->criticalSection);
		return result;
	}

	IFileSystem* CreateDOSFileSystem()
	{
		IFileSystem* pFileSystem = new DAComponent<DOSFileSystem>;
		return pFileSystem;
	}

	void Register_DOSFileSystem()
	{
		GENRESULT result = GR_GENERIC;
		if (DACOM)
		{
			if (IFileSystem* pFileSystem = CreateDOSFileSystem())
			{
				result = DACOM->RegisterComponent(pFileSystem, CLSID_FileSystem, DACOM_LOW_PRIORITY);
				pFileSystem->Release();
			}
		}
		unused(result);
	}
}
