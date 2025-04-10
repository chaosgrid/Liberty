#include "PCH.h"
#include "DOSFileSystem.h"

#define pFileSystem _data_6B7A224
extern "C" IFileSystem* pFileSystem;

void Register_DOSFileSystem()
{
	GENRESULT result = GR_GENERIC;
	if (ICOManager* DACOM = DACOM_Acquire())
	{
		if (DOSFileSystemWrapper* pFileSystemWrapper = new DAComponent<DOSFileSystemWrapper>())
		{
			result = DACOM->RegisterComponent(pFileSystemWrapper, FILESYSTEM_INTERFACE_NAME, DACOM_LOW_PRIORITY);
			pFileSystemWrapper->Release();
		}
	}
	// #HACK: DllMain has been modified to keep this around but it needs to be deferenced after the wrapper is created
	pFileSystem->Release();
	unused(result);
}

TRAMPOLINE(GENRESULT, __stdcall, sub_6B770A0, IFileSystem* _this, const C8* interface_name, void** instance); // QueryInterface
TRAMPOLINE(U32, __stdcall, sub_6B77150, IFileSystem* _this); // AddRef
TRAMPOLINE(U32, __stdcall, sub_6B77170, IFileSystem* _this); // Release
TRAMPOLINE(GENRESULT, __stdcall, sub_6B74470, IFileSystem* _this, DACOMDESC* descriptor, void** instance); // CreateInstance
TRAMPOLINE(BOOL, __stdcall, sub_6B74BF0, IFileSystem* _this, HANDLE handle); // CloseHandle
TRAMPOLINE(BOOL, __stdcall, sub_6B74D60, IFileSystem* _this, HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped = 0); // ReadFile
TRAMPOLINE(BOOL, __stdcall, sub_6B75E70, IFileSystem* _this, HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped = 0); // WriteFile
TRAMPOLINE(BOOL, __stdcall, sub_6B75E90, IFileSystem* _this, HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait); // GetOverlappedResult
TRAMPOLINE(DWORD, __stdcall, sub_6B74EB0, IFileSystem* _this, HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh = 0, DWORD dwMoveMethod = FILE_BEGIN); // SetFilePointer
TRAMPOLINE(BOOL, __stdcall, sub_6B75E50, IFileSystem* _this, HANDLE hFile = 0); // SetEndOfFile
TRAMPOLINE(DWORD, __stdcall, sub_6B74FF0, IFileSystem* _this, HANDLE hFile = 0, LPDWORD lpFileSizeHigh = 0); // GetFileSize
TRAMPOLINE(BOOL, __stdcall, sub_6B75EB0, IFileSystem* _this, HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh); // LockFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B75EB0, IFileSystem* _this, HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh); // UnlockFile
TRAMPOLINE(BOOL, __stdcall, sub_6B75070, IFileSystem* _this, HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime); // GetFileTime
TRAMPOLINE(BOOL, __stdcall, sub_6B75E90, IFileSystem* _this, HANDLE hFile, CONST FILETIME* lpCreationTime, CONST FILETIME* lpLastAccessTime, CONST FILETIME* lpLastWriteTime); // SetFileTime
TRAMPOLINE(HANDLE, __stdcall, sub_6B75100, IFileSystem* _this, HANDLE hFile = 0, LPSECURITY_ATTRIBUTES lpFileMappingAttributes = 0, DWORD flProtect = PAGE_READONLY, DWORD dwMaximumSizeHigh = 0, DWORD dwMaximumSizeLow = 0, LPCTSTR lpName = 0); // CreateFileMapping
TRAMPOLINE(LPVOID, __stdcall, sub_6B75230, IFileSystem* _this, HANDLE hFileMappingObject, DWORD dwDesiredAccess = FILE_MAP_READ, DWORD dwFileOffsetHigh = 0, DWORD dwFileOffsetLow = 0, DWORD dwNumberOfBytesToMap = 0); // MapViewOfFile
TRAMPOLINE(BOOL, __stdcall, sub_6B75350, IFileSystem* _this, LPCVOID lpBaseAddress); // UnmapViewOfFile
TRAMPOLINE(HANDLE, __stdcall, sub_6B75360, IFileSystem* _this, LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData); // FindFirstFile
TRAMPOLINE(BOOL, __stdcall, sub_6B75560, IFileSystem* _this, HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData); // FindNextFile
TRAMPOLINE(BOOL, __stdcall, sub_6B755B0, IFileSystem* _this, HANDLE hFindFile); // FindClose
TRAMPOLINE(BOOL, __stdcall, sub_6B75EF0, IFileSystem* _this, LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes = 0); // CreateDirectory
TRAMPOLINE(BOOL, __stdcall, sub_6B75E50, IFileSystem* _this, LPCTSTR lpPathName); // RemoveDirectory
TRAMPOLINE(DWORD, __stdcall, sub_6B75600, IFileSystem* _this, DWORD nBufferLength, LPTSTR lpBuffer); // GetCurrentDirectory
TRAMPOLINE(BOOL, __stdcall, sub_6B756B0, IFileSystem* _this, LPCTSTR lpPathName); // SetCurrentDirectory
//TRAMPOLINE(BOOL, __stdcall, sub_6B75E50, IFileSystem* _this, LPCTSTR lpFileName); // DeleteFile
TRAMPOLINE(BOOL, __stdcall, sub_6B75ED0, IFileSystem* _this, LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists); // CopyFile
TRAMPOLINE(BOOL, __stdcall, sub_6B75EF0, IFileSystem* _this, LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName); // MoveFile
TRAMPOLINE(DWORD, __stdcall, sub_6B758A0, IFileSystem* _this, LPCTSTR lpFileName); // GetFileAttributes
TRAMPOLINE(BOOL, __stdcall, sub_6B75EF0, IFileSystem* _this, LPCTSTR lpFileName, DWORD dwFileAttributes); // SetFileAttributes
TRAMPOLINE(DWORD, __stdcall, sub_6B75A60, IFileSystem* _this); // GetLastError
TRAMPOLINE(HANDLE, __stdcall, sub_6B75A70, IFileSystem* _this, DAFILEDESC* lpDesc); // OpenChild
TRAMPOLINE(DWORD, __stdcall, sub_6B75D00, IFileSystem* _this, HANDLE hFile = 0, PLONG pPositionHigh = 0); // GetFilePosition
TRAMPOLINE(LONG, __stdcall, sub_6B75DA0, IFileSystem* _this, LPSTR lpBuffer, LONG lBufferSize); // GetFileName
TRAMPOLINE(DWORD, __stdcall, sub_6B75E10, IFileSystem* _this); // GetAccessType
TRAMPOLINE(GENRESULT, __stdcall, sub_6B75E20, IFileSystem* _this, LPFILESYSTEM* lplpFileSystem); // GetParentSystem
TRAMPOLINE(GENRESULT, __stdcall, sub_6B776A0, IFileSystem* _this, DWORD dwNumber, DWORD dwValue); // SetPreference
TRAMPOLINE(GENRESULT, __stdcall, sub_6B776A0, IFileSystem* _this, DWORD dwNumber, PDWORD pdwValue); // GetPreference
TRAMPOLINE(GENRESULT, __stdcall, sub_6B776B0, IFileSystem* _this, HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead = 0, DWORD dwStartOffset = 0); // ReadDirectoryExtension
TRAMPOLINE(GENRESULT, __stdcall, sub_6B776B0, IFileSystem* _this, HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten = 0, DWORD dwStartOffset = 0); // WriteDirectoryExtension
TRAMPOLINE(LONG, __stdcall, sub_6B75F10, IFileSystem* _this, LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, void* lpContext); // SerialCall
TRAMPOLINE(BOOL, __stdcall, sub_6B75F60, IFileSystem* _this, char* lpOutput, LPCTSTR lpInput, LONG lSize) ; // GetAbsolutePath

#define DosFileSystem_QueryInterface sub_6B770A0
#define DosFileSystem_AddRef sub_6B77150
#define DosFileSystem_Release sub_6B77170
#define DosFileSystem_CreateInstance sub_6B74470
#define DosFileSystem_CloseHandle sub_6B74BF0
#define DosFileSystem_ReadFile sub_6B74D60
#define DosFileSystem_WriteFile sub_6B75E70
#define DosFileSystem_GetOverlappedResult sub_6B75E90
#define DosFileSystem_SetFilePointer sub_6B74EB0
#define DosFileSystem_SetEndOfFile sub_6B75E50
#define DosFileSystem_GetFileSize sub_6B74FF0
#define DosFileSystem_LockFile sub_6B75EB0
#define DosFileSystem_UnlockFile sub_6B75EB0
#define DosFileSystem_GetFileTime sub_6B75070
#define DosFileSystem_SetFileTime sub_6B75E90
#define DosFileSystem_CreateFileMapping sub_6B75100
#define DosFileSystem_MapViewOfFile sub_6B75230
#define DosFileSystem_UnmapViewOfFile sub_6B75350
#define DosFileSystem_FindFirstFile sub_6B75360
#define DosFileSystem_FindNextFile sub_6B75560
#define DosFileSystem_FindClose sub_6B755B0
#define DosFileSystem_CreateDirectory sub_6B75EF0
#define DosFileSystem_RemoveDirectory sub_6B75E50
#define DosFileSystem_GetCurrentDirectory sub_6B75600
#define DosFileSystem_SetCurrentDirectory sub_6B756B0
#define DosFileSystem_DeleteFile sub_6B75E50
#define DosFileSystem_CopyFile sub_6B75ED0
#define DosFileSystem_MoveFile sub_6B75EF0
#define DosFileSystem_GetFileAttributes sub_6B758A0
#define DosFileSystem_SetFileAttributes sub_6B75EF0
#define DosFileSystem_GetLastError sub_6B75A60
#define DosFileSystem_OpenChild sub_6B75A70
#define DosFileSystem_GetFilePosition sub_6B75D00
#define DosFileSystem_GetFileName sub_6B75DA0
#define DosFileSystem_GetAccessType sub_6B75E10
#define DosFileSystem_GetParentSystem sub_6B75E20
#define DosFileSystem_SetPreference sub_6B776A0
#define DosFileSystem_GetPreference sub_6B776A0
#define DosFileSystem_ReadDirectoryExtension sub_6B776B0
#define DosFileSystem_WriteDirectoryExtension sub_6B776B0
#define DosFileSystem_SerialCall sub_6B75F10
#define DosFileSystem_GetAbsolutePath sub_6B75F60

DOSFileSystemWrapper::DOSFileSystemWrapper()
{
	_data_6B7A224->AddRef();
}

DOSFileSystemWrapper::~DOSFileSystemWrapper()
{
	_data_6B7A224->Release();
}

GENRESULT DOSFileSystemWrapper::CreateInstance(DACOMDESC* descriptor, void** instance)
{
	GENRESULT result = DosFileSystem_CreateInstance(_data_6B7A224, descriptor, instance);
	return result;
}

BOOL DOSFileSystemWrapper::CloseHandle(HANDLE handle)
{
	auto result = DosFileSystem_CloseHandle(_data_6B7A224, handle);
	return result;
}

BOOL DOSFileSystemWrapper::ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)
{
	auto result = DosFileSystem_ReadFile(_data_6B7A224, hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
	return result;
}

BOOL DOSFileSystemWrapper::WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)
{
	auto result = DosFileSystem_WriteFile(_data_6B7A224, hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
	return result;
}

BOOL DOSFileSystemWrapper::GetOverlappedResult(HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait)
{
	auto result = DosFileSystem_GetOverlappedResult(_data_6B7A224, hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
	return result;
}

DWORD DOSFileSystemWrapper::SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
{
	auto result = DosFileSystem_SetFilePointer(_data_6B7A224, hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
	return result;
}

BOOL DOSFileSystemWrapper::SetEndOfFile(HANDLE hFile)
{
	auto result = DosFileSystem_SetEndOfFile(_data_6B7A224, hFile);
	return result;
}

DWORD DOSFileSystemWrapper::GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
{
	auto result = DosFileSystem_GetFileSize(_data_6B7A224, hFile, lpFileSizeHigh);
	return result;
}

BOOL DOSFileSystemWrapper::LockFile(HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh)
{
	auto result = DosFileSystem_LockFile(_data_6B7A224, hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToLockLow, nNumberOfBytesToLockHigh);
	return result;
}

BOOL DOSFileSystemWrapper::UnlockFile(HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh)
{
	auto result = DosFileSystem_UnlockFile(_data_6B7A224, hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToUnlockLow, nNumberOfBytesToUnlockHigh);
	return result;
}

BOOL DOSFileSystemWrapper::GetFileTime(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)
{
	auto result = DosFileSystem_GetFileTime(_data_6B7A224, hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
	return result;
}

BOOL DOSFileSystemWrapper::SetFileTime(HANDLE hFile, CONST FILETIME* lpCreationTime, CONST FILETIME* lpLastAccessTime, CONST FILETIME* lpLastWriteTime)
{
	auto result = DosFileSystem_SetFileTime(_data_6B7A224, hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
	return result;
}

HANDLE DOSFileSystemWrapper::CreateFileMapping(HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCTSTR lpName)
{
	auto result = DosFileSystem_CreateFileMapping(_data_6B7A224, hFile, lpFileMappingAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName);
	return result;
}

LPVOID DOSFileSystemWrapper::MapViewOfFile(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, DWORD dwNumberOfBytesToMap)
{
	auto result = DosFileSystem_MapViewOfFile(_data_6B7A224, hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap);
	return result;
}

BOOL DOSFileSystemWrapper::UnmapViewOfFile(LPCVOID lpBaseAddress)
{
	auto result = DosFileSystem_UnmapViewOfFile(_data_6B7A224, lpBaseAddress);
	return result;
}

HANDLE DOSFileSystemWrapper::FindFirstFile(LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData)
{
	auto result = DosFileSystem_FindFirstFile(_data_6B7A224, lpFileName, lpFindFileData);
	return result;
}

BOOL DOSFileSystemWrapper::FindNextFile(HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData)
{
	auto result = DosFileSystem_FindNextFile(_data_6B7A224, hFindFile, lpFindFileData);
	return result;
}

BOOL DOSFileSystemWrapper::FindClose(HANDLE hFindFile)
{
	auto result = DosFileSystem_FindClose(_data_6B7A224, hFindFile);
	return result;
}

BOOL DOSFileSystemWrapper::CreateDirectory(LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
	auto result = DosFileSystem_CreateDirectory(_data_6B7A224, lpPathName, lpSecurityAttributes);
	return result;
}

BOOL DOSFileSystemWrapper::RemoveDirectory(LPCTSTR lpPathName)
{
	auto result = DosFileSystem_RemoveDirectory(_data_6B7A224, lpPathName);
	return result;
}

DWORD DOSFileSystemWrapper::GetCurrentDirectory(DWORD nBufferLength, LPTSTR lpBuffer)
{
	auto result = DosFileSystem_GetCurrentDirectory(_data_6B7A224, nBufferLength, lpBuffer);
	return result;
}

BOOL DOSFileSystemWrapper::SetCurrentDirectory(LPCTSTR lpPathName)
{
	auto result = DosFileSystem_SetCurrentDirectory(_data_6B7A224, lpPathName);
	return result;
}

BOOL DOSFileSystemWrapper::DeleteFile(LPCTSTR lpFileName)
{
	auto result = DosFileSystem_DeleteFile(_data_6B7A224, lpFileName);
	return result;
}

BOOL DOSFileSystemWrapper::CopyFile(LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists)
{
	auto result = DosFileSystem_CopyFile(_data_6B7A224, lpExistingFileName, lpNewFileName, bFailIfExists);
	return result;
}

BOOL DOSFileSystemWrapper::MoveFile(LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName)
{
	auto result = DosFileSystem_MoveFile(_data_6B7A224, lpExistingFileName, lpNewFileName);
	return result;
}

DWORD DOSFileSystemWrapper::GetFileAttributes(LPCTSTR lpFileName)
{
	auto result = DosFileSystem_GetFileAttributes(_data_6B7A224, lpFileName);
	return result;
}

BOOL DOSFileSystemWrapper::SetFileAttributes(LPCTSTR lpFileName, DWORD dwFileAttributes)
{
	auto result = DosFileSystem_SetFileAttributes(_data_6B7A224, lpFileName, dwFileAttributes);
	return result;
}

DWORD DOSFileSystemWrapper::GetLastError(void)
{
	auto result = DosFileSystem_GetLastError(_data_6B7A224);
	return result;
}

HANDLE DOSFileSystemWrapper::OpenChild(DAFILEDESC* lpDesc)
{
	auto result = DosFileSystem_OpenChild(_data_6B7A224, lpDesc);
	return result;
}

DWORD DOSFileSystemWrapper::GetFilePosition(HANDLE hFile, PLONG pPositionHigh)
{
	auto result = DosFileSystem_GetFilePosition(_data_6B7A224, hFile, pPositionHigh);
	return result;
}

LONG DOSFileSystemWrapper::GetFileName(LPSTR lpBuffer, LONG lBufferSize)
{
	auto result = DosFileSystem_GetFileName(_data_6B7A224, lpBuffer, lBufferSize);
	return result;
}

DWORD DOSFileSystemWrapper::GetAccessType(void)
{
	auto result = DosFileSystem_GetAccessType(_data_6B7A224);
	return result;
}

GENRESULT DOSFileSystemWrapper::GetParentSystem(LPFILESYSTEM* lplpFileSystem)
{
	auto result = DosFileSystem_GetParentSystem(_data_6B7A224, lplpFileSystem);
	return result;
}

GENRESULT DOSFileSystemWrapper::SetPreference(DWORD dwNumber, DWORD dwValue)
{
	auto result = DosFileSystem_SetPreference(_data_6B7A224, dwNumber, dwValue);
	return result;
}

GENRESULT DOSFileSystemWrapper::GetPreference(DWORD dwNumber, PDWORD pdwValue)
{
	auto result = DosFileSystem_GetPreference(_data_6B7A224, dwNumber, pdwValue);
	return result;
}

GENRESULT DOSFileSystemWrapper::ReadDirectoryExtension(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, DWORD dwStartOffset)
{
	auto result = DosFileSystem_ReadDirectoryExtension(_data_6B7A224, hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, dwStartOffset);
	return result;
}

GENRESULT DOSFileSystemWrapper::WriteDirectoryExtension(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, DWORD dwStartOffset)
{
	auto result = DosFileSystem_WriteDirectoryExtension(_data_6B7A224, hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, dwStartOffset);
	return result;
}

LONG DOSFileSystemWrapper::SerialCall(LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, void* lpContext)
{
	auto result = DosFileSystem_SerialCall(_data_6B7A224, lpSystem, lpProc, lpContext);
	return result;
}

BOOL DOSFileSystemWrapper::GetAbsolutePath(char* lpOutput, LPCTSTR lpInput, LONG lSize)
{
	auto result = DosFileSystem_GetAbsolutePath(_data_6B7A224, lpOutput, lpInput, lSize);
	return result;
}
