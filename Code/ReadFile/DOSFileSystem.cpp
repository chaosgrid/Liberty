#include "PCH.h"
#include "DOSFileSystem.h"

//--------------------------------------------------------------------------//
//                                                                          //
//                              DOSFILE.CPP                                 //
//                                                                          //
//               COPYRIGHT (C) 1997 BY DIGITAL ANVIL, INC.                  //
//                                                                          //
//--------------------------------------------------------------------------//
/*
$Header: /Libs/dev/Src/DOSFile/Dosfile.cpp 20    2/17/00 9:23a Jasony $
*/
//--------------------------------------------------------------------------//


#include <windows.h>
#include <process.h>

#include "DACOM.h"
#include "FileSys.h"
//#include "da_heap_utility.h"
#include "TComponent.h"
#include "FDump.h"

//--------------------------------------------------------------------------//
//-----------------------GLOBAL DATA & MEMBERS OF FILE SYSTEM---------------//
//--------------------------------------------------------------------------//

// if instance represents a directory, instead of a file,
// current directory is stored in szFilename. Path always has a leading and trailing '\\'


#define MAX_OVERLAPPED_OPS		32
#define MAX_LOCK_WAIT			60000		// milliseconds to wait for a lock
#define CHECKDESCSIZE(x)    (x->size==sizeof(DAFILEDESC)||x->size==sizeof(DAFILEDESC)-sizeof(U32))

struct DOSFileSystem* pFirstSystem = 0;
HINSTANCE hInstance = 0;
HANDLE hEvent = 0;
HANDLE hThread = 0;
DWORD dwThreadID = 0;
C8 interface_name[] = "IFileSystem";

static void WaitForDOSThread(void);

#define DOSFILE_SERIAL	(WM_USER+1)

struct SERIAL_STRUCT
{
	LPFILESYSTEM lpSystem;
	DAFILE_SERIAL_PROC lpProc;
};

struct SEEK_STRUCT
{
	HANDLE hFileHandle;
	LONG lDistanceToMove;
	PLONG lpDistanceToMoveHigh;
	DWORD dwMoveMethod;
};

struct CREATE_MAPPING
{
	HANDLE hFileHandle;
	LPSECURITY_ATTRIBUTES lpFileMappingAttributes;
	DWORD flProtect;
	DWORD dwMaximumSizeHigh;
	DWORD dwMaximumSizeLow;
	LPCTSTR lpName;
};

struct FILE_OFFSET
{
	DWORD dwLow;
	DWORD dwHigh;

	FILE_OFFSET& operator += (FILE_OFFSET& offset)
	{
		*((__int64*)this) += *((__int64*)&offset);
		return *this;
	}

	FILE_OFFSET& operator -= (FILE_OFFSET& offset)
	{
		*((__int64*)this) -= *((__int64*)&offset);
		return *this;
	}

	FILE_OFFSET& operator += (DWORD offset)
	{
		*((__int64*)this) += offset;
		return *this;
	}

	FILE_OFFSET& operator -= (DWORD offset)
	{
		*((__int64*)this) -= offset;
		return *this;
	}

	BOOL operator == (FILE_OFFSET& offset)
	{
		return (dwLow == offset.dwLow && dwHigh == offset.dwHigh);
	}

	BOOL operator != (FILE_OFFSET& offset)
	{
		return !(*this == offset);
	}
};

struct QueueNode
{
	struct QueueNode* pNext;
	UINT   message;
	SERIAL_STRUCT* pSerial;
};

struct READWRITE_STRUCT : public SERIAL_STRUCT
{
	int				iIndex : 8;
	BOOL			bBusy : 1;
	BOOL			bResult : 1;
	BOOL			bError : 1;
	BOOL			bWrite : 1;
	HANDLE			hFileHandle;
	LPCVOID			lpBuffer;
	DWORD			nNumberOfBytesToRead;
	LPDWORD			lpNumberOfBytesRead;
	LPOVERLAPPED	lpOverlapped;
	FILE_OFFSET		start_offset;
	QueueNode		queueNode;
};

QueueNode* pMessageList;
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
struct DACOM_NO_VTABLE DOSFileSystem : public IFileSystem
{
	char			debugTag[9];		// "DOSFile: "
	char			szFilename[MAX_PATH + 4];
	DWORD			dwAccess;            // The mode for the file
	DWORD			dwLastError;
	LPFILESYSTEM	pParent;
	HANDLE			hFile;
	DWORD			dwAllocationMask;		// related to page allocation granularity
	FILE_OFFSET		file_position;
	BOOL			bOpen;
	int				iRootIndex;			// point where non-root begins (index of last '\\'+1)

	READWRITE_STRUCT	operations[MAX_OVERLAPPED_OPS];
	CRITICAL_SECTION	criticalSection;
	int					numOperations;		// current number of read/write operations in progress


	BEGIN_DACOM_MAP_INBOUND(DOSFileSystem)
		DACOM_INTERFACE_ENTRY(IFileSystem)
		DACOM_INTERFACE_ENTRY2(IID_IFileSystem, IFileSystem)
		END_DACOM_MAP()

	//---------------------------
	// public methods
	//---------------------------

	void* operator new (size_t size)
	{
		return calloc(size, 1);
	}

	void operator delete(void* ptr)
	{
		free(ptr);
	}

	DOSFileSystem(void)
	{
#ifdef DA_HEAP_ENABLED
		HEAP->SetBlockMessage(this, debugTag);
		memcpy(debugTag, "DOSFile: ", sizeof(debugTag));
#endif
		szFilename[0] = '\\';
		hFile = INVALID_HANDLE_VALUE;
		InitializeCriticalSection(&criticalSection);
	}

	~DOSFileSystem(void);

	// *** IComponentFactory methods ***

	DACOM_DEFMETHOD(CreateInstance) (DACOMDESC* descriptor, void** instance);

	// *** IFileSystem methods ***

	DACOM_DEFMETHOD_(BOOL, CloseHandle) (HANDLE handle = 0);

	DACOM_DEFMETHOD_(BOOL, ReadFile) (HANDLE hFileHandle, LPVOID lpBuffer, DWORD nNumberOfBytesToRead,
		LPDWORD lpNumberOfBytesRead,
		LPOVERLAPPED lpOverlapped);

	DACOM_DEFMETHOD_(BOOL, WriteFile) (HANDLE hFileHandle, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite,
		LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);

	DACOM_DEFMETHOD_(BOOL, GetOverlappedResult)   (HANDLE hFileHandle,
		LPOVERLAPPED lpOverlapped,
		LPDWORD lpNumberOfBytesTransferred,
		BOOL bWait);

	DACOM_DEFMETHOD_(DWORD, SetFilePointer) (HANDLE hFileHandle, LONG lDistanceToMove,
		PLONG lpDistanceToMoveHigh = 0, DWORD dwMoveMethod = FILE_BEGIN);

	DACOM_DEFMETHOD_(BOOL, SetEndOfFile) (HANDLE hFileHandle = 0);

	DACOM_DEFMETHOD_(DWORD, GetFileSize) (HANDLE hFileHandle, LPDWORD lpFileSizeHigh = 0);

	DACOM_DEFMETHOD_(BOOL, LockFile) (HANDLE hFile,
		DWORD dwFileOffsetLow,
		DWORD dwFileOffsetHigh,
		DWORD nNumberOfBytesToLockLow,
		DWORD nNumberOfBytesToLockHigh);

	DACOM_DEFMETHOD_(BOOL, UnlockFile) (HANDLE hFile,
		DWORD dwFileOffsetLow,
		DWORD dwFileOffsetHigh,
		DWORD nNumberOfBytesToUnlockLow,
		DWORD nNumberOfBytesToUnlockHigh);

	DACOM_DEFMETHOD_(BOOL, GetFileTime) (HANDLE hFileHandle, LPFILETIME lpCreationTime,
		LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);

	DACOM_DEFMETHOD_(BOOL, SetFileTime) (HANDLE hFileHandle, CONST FILETIME* lpCreationTime,
		CONST FILETIME* lpLastAccessTime,
		CONST FILETIME* lpLastWriteTime);

	DACOM_DEFMETHOD_(HANDLE, CreateFileMapping)   (HANDLE hFileHandle,
		LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
		DWORD flProtect,
		DWORD dwMaximumSizeHigh,
		DWORD dwMaximumSizeLow,
		LPCTSTR lpName);

	DACOM_DEFMETHOD_(LPVOID, MapViewOfFile)      (HANDLE hFileMappingObject,
		DWORD dwDesiredAccess,
		DWORD dwFileOffsetHigh,
		DWORD dwFileOffsetLow,
		DWORD dwNumberOfBytesToMap);

	DACOM_DEFMETHOD_(BOOL, UnmapViewOfFile)      (LPCVOID lpBaseAddress);

	DACOM_DEFMETHOD_(HANDLE, FindFirstFile) (LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData);

	DACOM_DEFMETHOD_(BOOL, FindNextFile) (HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData);

	DACOM_DEFMETHOD_(BOOL, FindClose) (HANDLE hFindFile);

	DACOM_DEFMETHOD_(BOOL, CreateDirectory) (LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);

	DACOM_DEFMETHOD_(BOOL, RemoveDirectory) (LPCTSTR lpPathName);

	DACOM_DEFMETHOD_(DWORD, GetCurrentDirectory) (DWORD nBufferLength, LPTSTR lpBuffer);

	DACOM_DEFMETHOD_(BOOL, SetCurrentDirectory) (LPCTSTR lpPathName);

	DACOM_DEFMETHOD_(BOOL, DeleteFile)  (LPCTSTR lpFileName);

	DACOM_DEFMETHOD_(BOOL, CopyFile)    (LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists);

	DACOM_DEFMETHOD_(BOOL, MoveFile) (LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName);

	DACOM_DEFMETHOD_(DWORD, GetFileAttributes) (LPCTSTR lpFileName);

	DACOM_DEFMETHOD_(BOOL, SetFileAttributes) (LPCTSTR lpFileName, DWORD dwFileAttributes);

	DACOM_DEFMETHOD_(DWORD, GetLastError) (VOID);

	//---------------   
	// IFileSystem extensions to WIN32 system
	//---------------   

	DACOM_DEFMETHOD_(HANDLE, OpenChild) (DAFILEDESC* lpDesc);

	DACOM_DEFMETHOD_(DWORD, GetFilePosition) (HANDLE hFileHandle = 0, PLONG pPositionHigh = 0);

	DACOM_DEFMETHOD_(LONG, GetFileName) (LPSTR lpBuffer, LONG lBufferSize);

	DACOM_DEFMETHOD_(DWORD, GetAccessType) (VOID);

	DACOM_DEFMETHOD(GetParentSystem) (LPFILESYSTEM* lplpFileSystem);

	DACOM_DEFMETHOD(SetPreference)  (DWORD dwNumber, DWORD  dwValue);

	DACOM_DEFMETHOD(GetPreference)  (DWORD dwNumber, PDWORD pdwValue);

	DACOM_DEFMETHOD(ReadDirectoryExtension) (HANDLE hFile, LPVOID lpBuffer,
		DWORD nNumberOfBytesToRead,
		LPDWORD lpNumberOfBytesRead = 0, DWORD dwStartOffset = 0);

	DACOM_DEFMETHOD(WriteDirectoryExtension) (HANDLE hFile, LPCVOID lpBuffer,
		DWORD nNumberOfBytesToWrite,
		LPDWORD lpNumberOfBytesWritten = 0, DWORD dwStartOffset = 0);

	DACOM_DEFMETHOD_(LONG, SerialCall) (LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, VOID* lpContext);

	DACOM_DEFMETHOD_(BOOL, GetAbsolutePath) (char* lpOutput, LPCTSTR lpInput, LONG lSize);

	//---------------   
	// DOSFileSystem methods
	//---------------   

	HANDLE TranslateHandle(HANDLE handle);

	SERIALMETHOD(Seek_S);

	SERIALMETHOD(StartReadWrite_S);

	SERIALMETHOD(ReadWrite_S);

	SERIALMETHOD(CloseAllHandles_S);
};
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

	static U32						size; size = lpInfo->size;
	static const C8*				interface_name; interface_name = lpInfo->interface_name;
	static LPCTSTR					lpImplementation; lpImplementation = lpInfo->lpImplementation;
	static LPCTSTR					lpFileName; lpFileName = lpInfo->lpFileName;
	static DWORD					dwDesiredAccess; dwDesiredAccess = lpInfo->dwDesiredAccess;
	static DWORD					dwShareMode; dwShareMode = lpInfo->dwShareMode;
	static LPSECURITY_ATTRIBUTES	lpSecurityAttributes; lpSecurityAttributes = lpInfo->lpSecurityAttributes;
	static DWORD					dwCreationDistribution; dwCreationDistribution = lpInfo->dwCreationDistribution;
	static DWORD					dwFlagsAndAttributes; dwFlagsAndAttributes = lpInfo->dwFlagsAndAttributes;
	static HANDLE					hTemplateFile; hTemplateFile = lpInfo->hTemplateFile;
	static LPFILESYSTEM				lpParent; lpParent = lpInfo->lpParent;
	static HANDLE					hParent; hParent = lpInfo->hParent;
	static HANDLE					hFindFirst; hFindFirst = lpInfo->hFindFirst;

	//
	// If unsupported interface requested, fail call
	//
		
	if (CHECKDESCSIZE(lpInfo) == 0 || strcmp(lpInfo->interface_name, interface_name))
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
					delete pNewSystem;
					pNewSystem = 0;
					result = GR_FILE_ERROR;
					goto Done;
				}
			}

			dwAttribs = ::GetFileAttributes(pNewSystem->szFilename);

			if (dwAttribs == 0xFFFFFFFF || (dwAttribs & FILE_ATTRIBUTE_DIRECTORY) == 0)
			{
				delete pNewSystem;
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
			// Handle to component object manager
			ICOManager* DACOM = DACOM_Acquire();
			if ((result = DACOM->CreateInstance(lpInfo, (void**)&pNewSystem)) != GR_OK)
			{
				Release();
				CloseHandle(handle);
				lpInfo->lpParent = 0;
				lpInfo->hParent = 0;
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
				delete pNewSystem;
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

	if (FAILED(result))
	{
		FILE_WARNING(lpFileName, __FUNCTION__);
	}

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
	BOOL result;
	READWRITE_STRUCT read;
	int iIndex;

	if (pParent)
	{
		result = pParent->ReadFile(TranslateHandle(hFileHandle),
			lpBuffer,
			nNumberOfBytesToRead,
			lpNumberOfBytesRead,
			lpOverlapped);
		if (result == 0)
			dwLastError = pParent->GetLastError();
		return result;
	}

	read.hFileHandle = TranslateHandle(hFileHandle);
	read.bBusy = 1;
	read.bError = 0;
	read.bResult = read.bWrite = 0;
	read.lpBuffer = lpBuffer;
	read.nNumberOfBytesToRead = nNumberOfBytesToRead;
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
		result = 0;
		return result;
	}

	// read.bBusy must be false, read op started

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
			result = 0;
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
	BOOL result;
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

	read.bBusy = read.bWrite = 1;
	read.bResult = 0;
	read.bError = 0;
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
		result = 0;
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
			result = 0;
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

	/*
	SEEK_STRUCT seek;

	  seek.hFileHandle = TranslateHandle(hFileHandle);
	  seek.lDistanceToMove = lDistanceToMove;
	  seek.lpDistanceToMoveHigh = lpDistanceToMoveHigh;
	  seek.dwMoveMethod = dwMoveMethod;
	  result = SerialCall(this, (DAFILE_SERIAL_PROC) Seek_S, &seek);
	*/
	// take advantage of parameters on the stack
	hFileHandle = TranslateHandle(hFileHandle);
	result = SerialCall(this, (DAFILE_SERIAL_PROC)&DOSFileSystem::Seek_S, &hFileHandle);

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

	dwAttribs = ::GetFileAttributes(lpInfo->lpFileName);
	//if (dwAttribs != 0xFFFFFFFF)
	//{
	//	strcpy(buffer, lpInfo->lpFileName);
	//}

	// #HACK For some reason some audio files are given as absolute paths
	LPCTSTR lpFileName = lpInfo->lpFileName;
	{
		dwAttribs = ::GetFileAttributes(lpInfo->lpFileName);
		if (dwAttribs != 0xFFFFFFFF && (dwAttribs & FILE_ATTRIBUTE_ARCHIVE))
		{
			if (strstr(lpFileName, szFilename) == lpFileName)
			{
				lpFileName += strlen(szFilename);
			}
		}
	}

	if (iRootIndex)
		memcpy(buffer, szFilename, iRootIndex);
	if (GetAbsolutePath(buffer + iRootIndex, lpFileName, MAX_PATH - iRootIndex) == 0)
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
void __fastcall switchchar_convert(char* string)
{
	while ((string = strchr(string, '/')) != 0)
	{
		*string++ = '\\';
	}
}
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
//--------------------------------------------------------------------------//
//
static void WaitForDOSThread(void)
{
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
}
//--------------------------------------------------------------------------
//  
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
//--------------------------------------------------------------------------
//  
static BOOL StartUpFileSystem(void)
{
	if (hThread)
		return 1;

	hThread = CreateThread(0, 4096, (LPTHREAD_START_ROUTINE)DOSFileMain,
		(LPVOID)0, 0, &dwThreadID);

	if (hThread == 0)
		return 0;

	return 1;
}

LONG __stdcall DOS__SerialCall(LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, VOID* lpContext)
{
	EnterCriticalSection(&pFirstSystem->criticalSection);
	LONG result = (lpSystem->*(lpProc))(lpContext);
	LeaveCriticalSection(&pFirstSystem->criticalSection);
	return result;
}

extern "C"
{
	extern void* _import_6B7906C; // = __imp("MSVCRT.dll", "calloc");
	extern void* _import_6B79070; // = __imp("MSVCRT.dll", "free");
	extern "C" void* off_6B79218[43]; // DOSFileSystem_vtbl

	IFileSystem* CreateDOSFileSystem()
	{
		IFileSystem* pFileSystem = new DAComponent<DOSFileSystem>;
		//void** vtable = *(void***)pFileSystem;
		//memcpy(off_6B79138, vtable, sizeof(off_6B79138));
		return pFileSystem;
	}

	void Register_DOSFileSystem()
	{
		GENRESULT result = GR_GENERIC;
		if (ICOManager* DACOM = DACOM_Acquire())
		{
			if (IFileSystem* pFileSystem = CreateDOSFileSystem())
			{
				result = DACOM->RegisterComponent(pFileSystem, FILESYSTEM_INTERFACE_NAME, DACOM_LOW_PRIORITY);
				pFileSystem->Release();
			}
		}
		unused(result);
	}
}

//
//DA_HEAP_DEFINE_NEW_OPERATOR_DECLARE_HACK(READFILE_DEC, DOSFileSystem, _import_6B7906C, _import_6B79070);
//
//#define pFileSystem _data_6B7A224
//extern "C" IFileSystem* pFileSystem;
//
//void Register_DOSFileSystem()
//{
//	GENRESULT result = GR_GENERIC;
//	if (ICOManager* DACOM = DACOM_Acquire())
//	{
//		if (DOSFileSystemWrapper* pFileSystemWrapper = new DAComponent<DOSFileSystemWrapper>())
//		{
//			result = DACOM->RegisterComponent(pFileSystemWrapper, FILESYSTEM_INTERFACE_NAME, DACOM_LOW_PRIORITY);
//			pFileSystemWrapper->Release();
//		}
//	}
//	// #HACK: DllMain has been modified to keep this around but it needs to be deferenced after the wrapper is created
//	pFileSystem->Release();
//	unused(result);
//}
//
//TRAMPOLINE(GENRESULT, __stdcall, sub_6B770A0, IFileSystem* _this, const C8* interface_name, void** instance); // QueryInterface
//TRAMPOLINE(U32, __stdcall, sub_6B77150, IFileSystem* _this); // AddRef
//TRAMPOLINE(U32, __stdcall, sub_6B77170, IFileSystem* _this); // Release
//TRAMPOLINE(GENRESULT, __stdcall, sub_6B74470, IFileSystem* _this, DACOMDESC* descriptor, void** instance); // CreateInstance
//TRAMPOLINE(BOOL, __stdcall, sub_6B74BF0, IFileSystem* _this, HANDLE handle); // CloseHandle
//TRAMPOLINE(BOOL, __stdcall, sub_6B74D60, IFileSystem* _this, HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped = 0); // ReadFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B75E70, IFileSystem* _this, HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped = 0); // WriteFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B75E90, IFileSystem* _this, HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait); // GetOverlappedResult
//TRAMPOLINE(DWORD, __stdcall, sub_6B74EB0, IFileSystem* _this, HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh = 0, DWORD dwMoveMethod = FILE_BEGIN); // SetFilePointer
//TRAMPOLINE(BOOL, __stdcall, sub_6B75E50, IFileSystem* _this, HANDLE hFile = 0); // SetEndOfFile
//TRAMPOLINE(DWORD, __stdcall, sub_6B74FF0, IFileSystem* _this, HANDLE hFile = 0, LPDWORD lpFileSizeHigh = 0); // GetFileSize
//TRAMPOLINE(BOOL, __stdcall, sub_6B75EB0, IFileSystem* _this, HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh); // LockFile
////TRAMPOLINE(BOOL, __stdcall, sub_6B75EB0, IFileSystem* _this, HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh); // UnlockFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B75070, IFileSystem* _this, HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime); // GetFileTime
//TRAMPOLINE(BOOL, __stdcall, sub_6B75E90, IFileSystem* _this, HANDLE hFile, CONST FILETIME* lpCreationTime, CONST FILETIME* lpLastAccessTime, CONST FILETIME* lpLastWriteTime); // SetFileTime
//TRAMPOLINE(HANDLE, __stdcall, sub_6B75100, IFileSystem* _this, HANDLE hFile = 0, LPSECURITY_ATTRIBUTES lpFileMappingAttributes = 0, DWORD flProtect = PAGE_READONLY, DWORD dwMaximumSizeHigh = 0, DWORD dwMaximumSizeLow = 0, LPCTSTR lpName = 0); // CreateFileMapping
//TRAMPOLINE(LPVOID, __stdcall, sub_6B75230, IFileSystem* _this, HANDLE hFileMappingObject, DWORD dwDesiredAccess = FILE_MAP_READ, DWORD dwFileOffsetHigh = 0, DWORD dwFileOffsetLow = 0, DWORD dwNumberOfBytesToMap = 0); // MapViewOfFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B75350, IFileSystem* _this, LPCVOID lpBaseAddress); // UnmapViewOfFile
//TRAMPOLINE(HANDLE, __stdcall, sub_6B75360, IFileSystem* _this, LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData); // FindFirstFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B75560, IFileSystem* _this, HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData); // FindNextFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B755B0, IFileSystem* _this, HANDLE hFindFile); // FindClose
//TRAMPOLINE(BOOL, __stdcall, sub_6B75EF0, IFileSystem* _this, LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes = 0); // CreateDirectory
//TRAMPOLINE(BOOL, __stdcall, sub_6B75E50, IFileSystem* _this, LPCTSTR lpPathName); // RemoveDirectory
//TRAMPOLINE(DWORD, __stdcall, sub_6B75600, IFileSystem* _this, DWORD nBufferLength, LPTSTR lpBuffer); // GetCurrentDirectory
//TRAMPOLINE(BOOL, __stdcall, sub_6B756B0, IFileSystem* _this, LPCTSTR lpPathName); // SetCurrentDirectory
////TRAMPOLINE(BOOL, __stdcall, sub_6B75E50, IFileSystem* _this, LPCTSTR lpFileName); // DeleteFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B75ED0, IFileSystem* _this, LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists); // CopyFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B75EF0, IFileSystem* _this, LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName); // MoveFile
//TRAMPOLINE(DWORD, __stdcall, sub_6B758A0, IFileSystem* _this, LPCTSTR lpFileName); // GetFileAttributes
//TRAMPOLINE(BOOL, __stdcall, sub_6B75EF0, IFileSystem* _this, LPCTSTR lpFileName, DWORD dwFileAttributes); // SetFileAttributes
//TRAMPOLINE(DWORD, __stdcall, sub_6B75A60, IFileSystem* _this); // GetLastError
//TRAMPOLINE(HANDLE, __stdcall, sub_6B75A70, IFileSystem* _this, DAFILEDESC* lpDesc); // OpenChild
//TRAMPOLINE(DWORD, __stdcall, sub_6B75D00, IFileSystem* _this, HANDLE hFile = 0, PLONG pPositionHigh = 0); // GetFilePosition
//TRAMPOLINE(LONG, __stdcall, sub_6B75DA0, IFileSystem* _this, LPSTR lpBuffer, LONG lBufferSize); // GetFileName
//TRAMPOLINE(DWORD, __stdcall, sub_6B75E10, IFileSystem* _this); // GetAccessType
//TRAMPOLINE(GENRESULT, __stdcall, sub_6B75E20, IFileSystem* _this, LPFILESYSTEM* lplpFileSystem); // GetParentSystem
//TRAMPOLINE(GENRESULT, __stdcall, sub_6B776A0, IFileSystem* _this, DWORD dwNumber, DWORD dwValue); // SetPreference
//TRAMPOLINE(GENRESULT, __stdcall, sub_6B776A0, IFileSystem* _this, DWORD dwNumber, PDWORD pdwValue); // GetPreference
//TRAMPOLINE(GENRESULT, __stdcall, sub_6B776B0, IFileSystem* _this, HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead = 0, DWORD dwStartOffset = 0); // ReadDirectoryExtension
//TRAMPOLINE(GENRESULT, __stdcall, sub_6B776B0, IFileSystem* _this, HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten = 0, DWORD dwStartOffset = 0); // WriteDirectoryExtension
//TRAMPOLINE(LONG, __stdcall, sub_6B75F10, IFileSystem* _this, LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, void* lpContext); // SerialCall
//TRAMPOLINE(BOOL, __stdcall, sub_6B75F60, IFileSystem* _this, char* lpOutput, LPCTSTR lpInput, LONG lSize) ; // GetAbsolutePath
//
//#define DosFileSystem_QueryInterface sub_6B770A0
//#define DosFileSystem_AddRef sub_6B77150
//#define DosFileSystem_Release sub_6B77170
//#define DosFileSystem_CreateInstance sub_6B74470
//#define DosFileSystem_CloseHandle sub_6B74BF0
//#define DosFileSystem_ReadFile sub_6B74D60
//#define DosFileSystem_WriteFile sub_6B75E70
//#define DosFileSystem_GetOverlappedResult sub_6B75E90
//#define DosFileSystem_SetFilePointer sub_6B74EB0
//#define DosFileSystem_SetEndOfFile sub_6B75E50
//#define DosFileSystem_GetFileSize sub_6B74FF0
//#define DosFileSystem_LockFile sub_6B75EB0
//#define DosFileSystem_UnlockFile sub_6B75EB0
//#define DosFileSystem_GetFileTime sub_6B75070
//#define DosFileSystem_SetFileTime sub_6B75E90
//#define DosFileSystem_CreateFileMapping sub_6B75100
//#define DosFileSystem_MapViewOfFile sub_6B75230
//#define DosFileSystem_UnmapViewOfFile sub_6B75350
//#define DosFileSystem_FindFirstFile sub_6B75360
//#define DosFileSystem_FindNextFile sub_6B75560
//#define DosFileSystem_FindClose sub_6B755B0
//#define DosFileSystem_CreateDirectory sub_6B75EF0
//#define DosFileSystem_RemoveDirectory sub_6B75E50
//#define DosFileSystem_GetCurrentDirectory sub_6B75600
//#define DosFileSystem_SetCurrentDirectory sub_6B756B0
//#define DosFileSystem_DeleteFile sub_6B75E50
//#define DosFileSystem_CopyFile sub_6B75ED0
//#define DosFileSystem_MoveFile sub_6B75EF0
//#define DosFileSystem_GetFileAttributes sub_6B758A0
//#define DosFileSystem_SetFileAttributes sub_6B75EF0
//#define DosFileSystem_GetLastError sub_6B75A60
//#define DosFileSystem_OpenChild sub_6B75A70
//#define DosFileSystem_GetFilePosition sub_6B75D00
//#define DosFileSystem_GetFileName sub_6B75DA0
//#define DosFileSystem_GetAccessType sub_6B75E10
//#define DosFileSystem_GetParentSystem sub_6B75E20
//#define DosFileSystem_SetPreference sub_6B776A0
//#define DosFileSystem_GetPreference sub_6B776A0
//#define DosFileSystem_ReadDirectoryExtension sub_6B776B0
//#define DosFileSystem_WriteDirectoryExtension sub_6B776B0
//#define DosFileSystem_SerialCall sub_6B75F10
//#define DosFileSystem_GetAbsolutePath sub_6B75F60
//
//DOSFileSystemWrapper::DOSFileSystemWrapper()
//{
//	_data_6B7A224->AddRef();
//}
//
//DOSFileSystemWrapper::~DOSFileSystemWrapper()
//{
//	_data_6B7A224->Release();
//}
//
//GENRESULT DOSFileSystemWrapper::CreateInstance(DACOMDESC* descriptor, void** instance)
//{
//	GENRESULT result = DosFileSystem_CreateInstance(_data_6B7A224, descriptor, instance);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::CloseHandle(HANDLE handle)
//{
//	auto result = DosFileSystem_CloseHandle(_data_6B7A224, handle);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)
//{
//	auto result = DosFileSystem_ReadFile(_data_6B7A224, hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)
//{
//	auto result = DosFileSystem_WriteFile(_data_6B7A224, hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::GetOverlappedResult(HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait)
//{
//	auto result = DosFileSystem_GetOverlappedResult(_data_6B7A224, hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
//	return result;
//}
//
//DWORD DOSFileSystemWrapper::SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
//{
//	auto result = DosFileSystem_SetFilePointer(_data_6B7A224, hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::SetEndOfFile(HANDLE hFile)
//{
//	auto result = DosFileSystem_SetEndOfFile(_data_6B7A224, hFile);
//	return result;
//}
//
//DWORD DOSFileSystemWrapper::GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
//{
//	auto result = DosFileSystem_GetFileSize(_data_6B7A224, hFile, lpFileSizeHigh);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::LockFile(HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh)
//{
//	auto result = DosFileSystem_LockFile(_data_6B7A224, hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToLockLow, nNumberOfBytesToLockHigh);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::UnlockFile(HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh)
//{
//	auto result = DosFileSystem_UnlockFile(_data_6B7A224, hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToUnlockLow, nNumberOfBytesToUnlockHigh);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::GetFileTime(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)
//{
//	auto result = DosFileSystem_GetFileTime(_data_6B7A224, hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::SetFileTime(HANDLE hFile, CONST FILETIME* lpCreationTime, CONST FILETIME* lpLastAccessTime, CONST FILETIME* lpLastWriteTime)
//{
//	auto result = DosFileSystem_SetFileTime(_data_6B7A224, hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
//	return result;
//}
//
//HANDLE DOSFileSystemWrapper::CreateFileMapping(HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCTSTR lpName)
//{
//	auto result = DosFileSystem_CreateFileMapping(_data_6B7A224, hFile, lpFileMappingAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName);
//	return result;
//}
//
//LPVOID DOSFileSystemWrapper::MapViewOfFile(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, DWORD dwNumberOfBytesToMap)
//{
//	auto result = DosFileSystem_MapViewOfFile(_data_6B7A224, hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::UnmapViewOfFile(LPCVOID lpBaseAddress)
//{
//	auto result = DosFileSystem_UnmapViewOfFile(_data_6B7A224, lpBaseAddress);
//	return result;
//}
//
//HANDLE DOSFileSystemWrapper::FindFirstFile(LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData)
//{
//	auto result = DosFileSystem_FindFirstFile(_data_6B7A224, lpFileName, lpFindFileData);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::FindNextFile(HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData)
//{
//	auto result = DosFileSystem_FindNextFile(_data_6B7A224, hFindFile, lpFindFileData);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::FindClose(HANDLE hFindFile)
//{
//	auto result = DosFileSystem_FindClose(_data_6B7A224, hFindFile);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::CreateDirectory(LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
//{
//	auto result = DosFileSystem_CreateDirectory(_data_6B7A224, lpPathName, lpSecurityAttributes);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::RemoveDirectory(LPCTSTR lpPathName)
//{
//	auto result = DosFileSystem_RemoveDirectory(_data_6B7A224, lpPathName);
//	return result;
//}
//
//DWORD DOSFileSystemWrapper::GetCurrentDirectory(DWORD nBufferLength, LPTSTR lpBuffer)
//{
//	auto result = DosFileSystem_GetCurrentDirectory(_data_6B7A224, nBufferLength, lpBuffer);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::SetCurrentDirectory(LPCTSTR lpPathName)
//{
//	auto result = DosFileSystem_SetCurrentDirectory(_data_6B7A224, lpPathName);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::DeleteFile(LPCTSTR lpFileName)
//{
//	auto result = DosFileSystem_DeleteFile(_data_6B7A224, lpFileName);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::CopyFile(LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists)
//{
//	auto result = DosFileSystem_CopyFile(_data_6B7A224, lpExistingFileName, lpNewFileName, bFailIfExists);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::MoveFile(LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName)
//{
//	auto result = DosFileSystem_MoveFile(_data_6B7A224, lpExistingFileName, lpNewFileName);
//	return result;
//}
//
//DWORD DOSFileSystemWrapper::GetFileAttributes(LPCTSTR lpFileName)
//{
//	auto result = DosFileSystem_GetFileAttributes(_data_6B7A224, lpFileName);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::SetFileAttributes(LPCTSTR lpFileName, DWORD dwFileAttributes)
//{
//	auto result = DosFileSystem_SetFileAttributes(_data_6B7A224, lpFileName, dwFileAttributes);
//	return result;
//}
//
//DWORD DOSFileSystemWrapper::GetLastError(void)
//{
//	auto result = DosFileSystem_GetLastError(_data_6B7A224);
//	return result;
//}
//
//HANDLE DOSFileSystemWrapper::OpenChild(DAFILEDESC* lpDesc)
//{
//	auto result = DosFileSystem_OpenChild(_data_6B7A224, lpDesc);
//	return result;
//}
//
//DWORD DOSFileSystemWrapper::GetFilePosition(HANDLE hFile, PLONG pPositionHigh)
//{
//	auto result = DosFileSystem_GetFilePosition(_data_6B7A224, hFile, pPositionHigh);
//	return result;
//}
//
//LONG DOSFileSystemWrapper::GetFileName(LPSTR lpBuffer, LONG lBufferSize)
//{
//	auto result = DosFileSystem_GetFileName(_data_6B7A224, lpBuffer, lBufferSize);
//	return result;
//}
//
//DWORD DOSFileSystemWrapper::GetAccessType(void)
//{
//	auto result = DosFileSystem_GetAccessType(_data_6B7A224);
//	return result;
//}
//
//GENRESULT DOSFileSystemWrapper::GetParentSystem(LPFILESYSTEM* lplpFileSystem)
//{
//	auto result = DosFileSystem_GetParentSystem(_data_6B7A224, lplpFileSystem);
//	return result;
//}
//
//GENRESULT DOSFileSystemWrapper::SetPreference(DWORD dwNumber, DWORD dwValue)
//{
//	auto result = DosFileSystem_SetPreference(_data_6B7A224, dwNumber, dwValue);
//	return result;
//}
//
//GENRESULT DOSFileSystemWrapper::GetPreference(DWORD dwNumber, PDWORD pdwValue)
//{
//	auto result = DosFileSystem_GetPreference(_data_6B7A224, dwNumber, pdwValue);
//	return result;
//}
//
//GENRESULT DOSFileSystemWrapper::ReadDirectoryExtension(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, DWORD dwStartOffset)
//{
//	auto result = DosFileSystem_ReadDirectoryExtension(_data_6B7A224, hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, dwStartOffset);
//	return result;
//}
//
//GENRESULT DOSFileSystemWrapper::WriteDirectoryExtension(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, DWORD dwStartOffset)
//{
//	auto result = DosFileSystem_WriteDirectoryExtension(_data_6B7A224, hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, dwStartOffset);
//	return result;
//}
//
//LONG DOSFileSystemWrapper::SerialCall(LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, void* lpContext)
//{
//	auto result = DosFileSystem_SerialCall(_data_6B7A224, lpSystem, lpProc, lpContext);
//	return result;
//}
//
//BOOL DOSFileSystemWrapper::GetAbsolutePath(char* lpOutput, LPCTSTR lpInput, LONG lSize)
//{
//	auto result = DosFileSystem_GetAbsolutePath(_data_6B7A224, lpOutput, lpInput, lSize);
//	return result;
//}
