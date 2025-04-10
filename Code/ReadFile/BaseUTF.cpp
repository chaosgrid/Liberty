#include "PCH.h"
#include "BaseUTF.h"

REDIRECT(sub_6B73D60, CreateBaseUTF);

TRAMPOLINE(GENRESULT, __stdcall, sub_6B74060, BaseUTF* _this, const C8* interface_name, void** instance); // QueryInterface
TRAMPOLINE(U32, __stdcall, sub_6B74110, BaseUTF* _this); // AddRef
TRAMPOLINE(U32, __stdcall, sub_6B74130, BaseUTF* _this); // Release
TRAMPOLINE(GENRESULT, __stdcall, sub_6B72990, BaseUTF* _this, DACOMDESC* descriptor, void** instance); // CreateInstance
TRAMPOLINE(BOOL, __stdcall, sub_6B73650, BaseUTF* _this, HANDLE handle); // CloseHandle
TRAMPOLINE(BOOL, __stdcall, sub_6B72F90, BaseUTF* _this, HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped = 0); // ReadFile
TRAMPOLINE(BOOL, __stdcall, sub_6B73D50, BaseUTF* _this, HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped = 0); // WriteFile
TRAMPOLINE(BOOL, __stdcall, sub_6B73D40, BaseUTF* _this, HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait); // GetOverlappedResult
TRAMPOLINE(DWORD, __stdcall, sub_6B72EF0, BaseUTF* _this, HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh = 0, DWORD dwMoveMethod = FILE_BEGIN); // SetFilePointer
TRAMPOLINE(BOOL, __stdcall, sub_6B73D10, BaseUTF* _this, HANDLE hFile = 0); // SetEndOfFile
TRAMPOLINE(DWORD, __stdcall, sub_6B72E90, BaseUTF* _this, HANDLE hFile = 0, LPDWORD lpFileSizeHigh = 0); // GetFileSize
TRAMPOLINE(BOOL, __stdcall, sub_6B73A10, BaseUTF* _this, HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh); // LockFile
//TRAMPOLINE(BOOL, __stdcall, sub_6B73A10, BaseUTF* _this, HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh); // UnlockFile
TRAMPOLINE(BOOL, __stdcall, sub_6B73A30, BaseUTF* _this, HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime); // GetFileTime
TRAMPOLINE(BOOL, __stdcall, sub_6B73D40, BaseUTF* _this, HANDLE hFile, CONST FILETIME* lpCreationTime, CONST FILETIME* lpLastAccessTime, CONST FILETIME* lpLastWriteTime); // SetFileTime
TRAMPOLINE(HANDLE, __stdcall, sub_6B737D0, BaseUTF* _this, HANDLE hFile = 0, LPSECURITY_ATTRIBUTES lpFileMappingAttributes = 0, DWORD flProtect = PAGE_READONLY, DWORD dwMaximumSizeHigh = 0, DWORD dwMaximumSizeLow = 0, LPCTSTR lpName = 0); // CreateFileMapping
TRAMPOLINE(LPVOID, __stdcall, sub_6B738A0, BaseUTF* _this, HANDLE hFileMappingObject, DWORD dwDesiredAccess = FILE_MAP_READ, DWORD dwFileOffsetHigh = 0, DWORD dwFileOffsetLow = 0, DWORD dwNumberOfBytesToMap = 0); // MapViewOfFile
TRAMPOLINE(BOOL, __stdcall, sub_6B739E0, BaseUTF* _this, LPCVOID lpBaseAddress); // UnmapViewOfFile
TRAMPOLINE(HANDLE, __stdcall, sub_6B73280, BaseUTF* _this, LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData); // FindFirstFile
TRAMPOLINE(BOOL, __stdcall, sub_6B73350, BaseUTF* _this, HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData); // FindNextFile
TRAMPOLINE(BOOL, __stdcall, sub_6B733B0, BaseUTF* _this, HANDLE hFindFile); // FindClose
TRAMPOLINE(BOOL, __stdcall, sub_6B73D20, BaseUTF* _this, LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes = 0); // CreateDirectory
TRAMPOLINE(BOOL, __stdcall, sub_6B73D10, BaseUTF* _this, LPCTSTR lpPathName); // RemoveDirectory
TRAMPOLINE(DWORD, __stdcall, sub_6B73470, BaseUTF* _this, DWORD nBufferLength, LPTSTR lpBuffer); // GetCurrentDirectory
TRAMPOLINE(BOOL, __stdcall, sub_6B73500, BaseUTF* _this, LPCTSTR lpPathName); // SetCurrentDirectory
//TRAMPOLINE(BOOL, __stdcall, sub_6B73D10, BaseUTF* _this, LPCTSTR lpFileName); // DeleteFile
TRAMPOLINE(BOOL, __stdcall, sub_6B73D30, BaseUTF* _this, LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists); // CopyFile
TRAMPOLINE(BOOL, __stdcall, sub_6B73D20, BaseUTF* _this, LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName); // MoveFile
TRAMPOLINE(DWORD, __stdcall, sub_6B73AC0, BaseUTF* _this, LPCTSTR lpFileName); // GetFileAttributes
TRAMPOLINE(BOOL, __stdcall, sub_6B73D20, BaseUTF* _this, LPCTSTR lpFileName, DWORD dwFileAttributes); // SetFileAttributes
TRAMPOLINE(DWORD, __stdcall, sub_6B73B70, BaseUTF* _this); // GetLastError
TRAMPOLINE(HANDLE, __stdcall, sub_6B73B80, BaseUTF* _this, DAFILEDESC* lpDesc); // OpenChild
TRAMPOLINE(DWORD, __stdcall, sub_6B73410, BaseUTF* _this, HANDLE hFile = 0, PLONG pPositionHigh = 0); // GetFilePosition
TRAMPOLINE(LONG, __stdcall, sub_6B73C70, BaseUTF* _this, LPSTR lpBuffer, LONG lBufferSize); // GetFileName
TRAMPOLINE(DWORD, __stdcall, sub_6B77680, BaseUTF* _this); // GetAccessType
TRAMPOLINE(GENRESULT, __stdcall, sub_6B73CC0, BaseUTF* _this, LPFILESYSTEM* lplpFileSystem); // GetParentSystem
TRAMPOLINE(GENRESULT, __stdcall, sub_6B776A0, BaseUTF* _this, DWORD dwNumber, DWORD dwValue); // SetPreference
TRAMPOLINE(GENRESULT, __stdcall, sub_6B776A0, BaseUTF* _this, DWORD dwNumber, PDWORD pdwValue); // GetPreference
TRAMPOLINE(GENRESULT, __stdcall, sub_6B776B0, BaseUTF* _this, HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead = 0, DWORD dwStartOffset = 0); // ReadDirectoryExtension
TRAMPOLINE(GENRESULT, __stdcall, sub_6B776B0, BaseUTF* _this, HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten = 0, DWORD dwStartOffset = 0); // WriteDirectoryExtension
TRAMPOLINE(LONG, __stdcall, sub_6B73CF0, BaseUTF* _this, LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, void* lpContext); // SerialCall
TRAMPOLINE(BOOL, __stdcall, sub_6B73130, BaseUTF* _this, char* lpOutput, LPCTSTR lpInput, LONG lSize); // GetAbsolutePath
TRAMPOLINE(BaseUTF*, __thiscall, sub_6B73F00, BaseUTF* _this, char flag); // ~BaseUTF

#define BaseUTF_QueryInterface sub_6B74060
#define BaseUTF_AddRef sub_6B74110
#define BaseUTF_Release sub_6B74130
#define BaseUTF_CreateInstance sub_6B72990
#define BaseUTF_CloseHandle sub_6B73650
#define BaseUTF_ReadFile sub_6B72F90
#define BaseUTF_WriteFile sub_6B73D50
#define BaseUTF_GetOverlappedResult sub_6B73D40
#define BaseUTF_SetFilePointer sub_6B72EF0
#define BaseUTF_SetEndOfFile sub_6B73D10
#define BaseUTF_GetFileSize sub_6B72E90
#define BaseUTF_LockFile sub_6B73A10
#define BaseUTF_UnlockFile sub_6B73A10
#define BaseUTF_GetFileTime sub_6B73A30
#define BaseUTF_SetFileTime sub_6B73D40
#define BaseUTF_CreateFileMapping sub_6B737D0
#define BaseUTF_MapViewOfFile sub_6B738A0
#define BaseUTF_UnmapViewOfFile sub_6B739E0
#define BaseUTF_FindFirstFile sub_6B73280
#define BaseUTF_FindNextFile sub_6B73350
#define BaseUTF_FindClose sub_6B733B0
#define BaseUTF_CreateDirectory sub_6B73D20
#define BaseUTF_RemoveDirectory sub_6B73D10
#define BaseUTF_GetCurrentDirectory sub_6B73470
#define BaseUTF_SetCurrentDirectory sub_6B73500
#define BaseUTF_DeleteFile sub_6B73D10
#define BaseUTF_CopyFile sub_6B73D30
#define BaseUTF_MoveFile sub_6B73D20
#define BaseUTF_GetFileAttributes sub_6B73AC0
#define BaseUTF_SetFileAttributes sub_6B73D20
#define BaseUTF_GetLastError sub_6B73B70
#define BaseUTF_OpenChild sub_6B73B80
#define BaseUTF_GetFilePosition sub_6B73410
#define BaseUTF_GetFileName sub_6B73C70
#define BaseUTF_GetAccessType sub_6B77680
#define BaseUTF_GetParentSystem sub_6B73CC0
#define BaseUTF_SetPreference sub_6B776A0
#define BaseUTF_GetPreference sub_6B776A0
#define BaseUTF_ReadDirectoryExtension sub_6B776B0
#define BaseUTF_WriteDirectoryExtension sub_6B776B0
#define BaseUTF_SerialCall sub_6B73CF0
#define BaseUTF_GetAbsolutePath sub_6B73130
#define BaseUTF_Dtor sub_6B73F00




extern "C" void _sub_6B74060();
extern "C" void _sub_6B74110();
extern "C" void _sub_6B74130();
extern "C" void _sub_6B72990();
extern "C" void _sub_6B73650();
extern "C" void _sub_6B72F90();
extern "C" void _sub_6B73D50();
extern "C" void _sub_6B73D40();
extern "C" void _sub_6B72EF0();
extern "C" void _sub_6B73D10();
extern "C" void _sub_6B72E90();
extern "C" void _sub_6B73A10();
extern "C" void _sub_6B73A10();
extern "C" void _sub_6B73A30();
extern "C" void _sub_6B73D40();
extern "C" void _sub_6B737D0();
extern "C" void _sub_6B738A0();
extern "C" void _sub_6B739E0();
extern "C" void _sub_6B73280();
extern "C" void _sub_6B73350();
extern "C" void _sub_6B733B0();
extern "C" void _sub_6B73D20();
extern "C" void _sub_6B73D10();
extern "C" void _sub_6B73470();
extern "C" void _sub_6B73500();
extern "C" void _sub_6B73D10();
extern "C" void _sub_6B73D30();
extern "C" void _sub_6B73D20();
extern "C" void _sub_6B73AC0();
extern "C" void _sub_6B73D20();
extern "C" void _sub_6B73B70();
extern "C" void _sub_6B73B80();
extern "C" void _sub_6B73410();
extern "C" void _sub_6B73C70();
extern "C" void _sub_6B77680();
extern "C" void _sub_6B73CC0();
extern "C" void _sub_6B776A0();
extern "C" void _sub_6B776A0();
extern "C" void _sub_6B776B0();
extern "C" void _sub_6B776B0();
extern "C" void _sub_6B73CF0();
extern "C" void _sub_6B73130();
extern "C" void _sub_6B73F00();




template<typename t_result, typename t_type, typename ...t_args>
void* convert(t_result(__stdcall t_type::* ptr)(t_args...))
{
	union
	{
		void* physical;
		t_result(t_type::* member)(t_args...);
	} u;

	static_assert(sizeof(u.physical) == sizeof(u.member), "Size mismatch in conversion");

	u.member = ptr;
	return u.physical;
}

template<typename t_func>
void* convert(t_func func)
{
	union
	{
		void* physical;
		void* member;
	} u;

	static_assert(sizeof(u.physical) == sizeof(u.member), "Size mismatch in conversion");

	u.member = func;
	return u.physical;
}

//extern "C"
//{
//	extern void* off_6B79138[];
//}

#define CONVERT_MEMBER_TO_VOID(expression) ([] { auto member = &BaseUTF::AddRef; return *(void**)&member; })()


//
//
//static GENRESULT __stdcall _QueryInterface(BaseUTF* _this, const C8* interface_name, void** instance) { return _this->QueryInterface(interface_name, instance); }
//static U32 __stdcall _AddRef(BaseUTF* _this) { return _this->AddRef(); }
//static U32 __stdcall _Release(BaseUTF* _this) { return _this->Release(); }
//static GENRESULT __stdcall _CreateInstance(BaseUTF* _this, DACOMDESC* descriptor, void** instance) { return _this->CreateInstance(descriptor, instance); }
//static BOOL __stdcall _CloseHandle(BaseUTF* _this, HANDLE handle) { return _this->CloseHandle(handle); }
//static BOOL __stdcall _ReadFile(BaseUTF* _this, HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped) { return _this->ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped); }
//static BOOL __stdcall _WriteFile(BaseUTF* _this, HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped) { return _this->WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped); }
//static BOOL __stdcall _GetOverlappedResult(BaseUTF* _this, HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait) { return _this->GetOverlappedResult(hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait); }
//static DWORD __stdcall _SetFilePointer(BaseUTF* _this, HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod) { return _this->SetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod); }
//static BOOL __stdcall _SetEndOfFile(BaseUTF* _this, HANDLE hFile) { return _this->SetEndOfFile(hFile); }
//static DWORD __stdcall _GetFileSize(BaseUTF* _this, HANDLE hFile, LPDWORD lpFileSizeHigh) { return _this->GetFileSize(hFile, lpFileSizeHigh); }
//static BOOL __stdcall _LockFile(BaseUTF* _this, HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh) { return _this->LockFile(hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToLockLow, nNumberOfBytesToLockHigh); }
//static BOOL __stdcall _UnlockFile(BaseUTF* _this, HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh) { return _this->UnlockFile(hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToUnlockLow, nNumberOfBytesToUnlockHigh); }
//static BOOL __stdcall _GetFileTime(BaseUTF* _this, HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime) { return _this->GetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime); }
//static BOOL __stdcall _SetFileTime(BaseUTF* _this, HANDLE hFile, CONST FILETIME* lpCreationTime, CONST FILETIME* lpLastAccessTime, CONST FILETIME* lpLastWriteTime) { return _this->SetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime); }
//static HANDLE __stdcall _CreateFileMapping(BaseUTF* _this, HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCTSTR lpName) { return _this->CreateFileMapping(hFile, lpFileMappingAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName); }
//static LPVOID __stdcall _MapViewOfFile(BaseUTF* _this, HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, DWORD dwNumberOfBytesToMap) { return _this->MapViewOfFile(hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap); }
//static BOOL __stdcall _UnmapViewOfFile(BaseUTF* _this, LPCVOID lpBaseAddress) { return _this->UnmapViewOfFile(lpBaseAddress); }
//static HANDLE __stdcall _FindFirstFile(BaseUTF* _this, LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData) { return _this->FindFirstFile(lpFileName, lpFindFileData); }
//static BOOL __stdcall _FindNextFile(BaseUTF* _this, HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData) { return _this->FindNextFile(hFindFile, lpFindFileData); }
//static BOOL __stdcall _FindClose(BaseUTF* _this, HANDLE hFindFile) { return _this->FindClose(hFindFile); }
//static BOOL __stdcall _CreateDirectory(BaseUTF* _this, LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes) { return _this->CreateDirectory(lpPathName, lpSecurityAttributes); }
//static BOOL __stdcall _RemoveDirectory(BaseUTF* _this, LPCTSTR lpPathName) { return _this->RemoveDirectory(lpPathName); }
//static DWORD __stdcall _GetCurrentDirectory(BaseUTF* _this, DWORD nBufferLength, LPTSTR lpBuffer) { return _this->GetCurrentDirectory(nBufferLength, lpBuffer); }
//static BOOL __stdcall _SetCurrentDirectory(BaseUTF* _this, LPCTSTR lpPathName) { return _this->SetCurrentDirectory(lpPathName); }
//static BOOL __stdcall _DeleteFile(BaseUTF* _this, LPCTSTR lpFileName) { return _this->DeleteFile(lpFileName); }
//static BOOL __stdcall _CopyFile(BaseUTF* _this, LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists) { return _this->CopyFile(lpExistingFileName, lpNewFileName, bFailIfExists); }
//static BOOL __stdcall _MoveFile(BaseUTF* _this, LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName) { return _this->MoveFile(lpExistingFileName, lpNewFileName); }
//static DWORD __stdcall _GetFileAttributes(BaseUTF* _this, LPCTSTR lpFileName) { return _this->GetFileAttributes(lpFileName); }
//static BOOL __stdcall _SetFileAttributes(BaseUTF* _this, LPCTSTR lpFileName, DWORD dwFileAttributes) { return _this->SetFileAttributes(lpFileName, dwFileAttributes); }
//static DWORD __stdcall _GetLastError(BaseUTF* _this) { return _this->GetLastError(); }
//static HANDLE __stdcall _OpenChild(BaseUTF* _this, DAFILEDESC* lpDesc) { return _this->OpenChild(lpDesc); }
//static DWORD __stdcall _GetFilePosition(BaseUTF* _this, HANDLE hFile, PLONG pPositionHigh) { return _this->GetFilePosition(hFile, pPositionHigh); }
//static LONG __stdcall _GetFileName(BaseUTF* _this, LPSTR lpBuffer, LONG lBufferSize) { return _this->GetFileName(lpBuffer, lBufferSize); }
//static DWORD __stdcall _GetAccessType(BaseUTF* _this) { return _this->GetAccessType(); }
//static GENRESULT __stdcall _GetParentSystem(BaseUTF* _this, LPFILESYSTEM* lplpFileSystem) { return _this->GetParentSystem(lplpFileSystem); }
//static GENRESULT __stdcall _SetPreference(BaseUTF* _this, DWORD dwNumber, DWORD dwValue) { return _this->SetPreference(dwNumber, dwValue); }
//static GENRESULT __stdcall _GetPreference(BaseUTF* _this, DWORD dwNumber, PDWORD pdwValue) { return _this->GetPreference(dwNumber, pdwValue); }
//static GENRESULT __stdcall _ReadDirectoryExtension(BaseUTF* _this, HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, DWORD dwStartOffset) { return _this->ReadDirectoryExtension(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, dwStartOffset); }
//static GENRESULT __stdcall _WriteDirectoryExtension(BaseUTF* _this, HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, DWORD dwStartOffset) { return _this->WriteDirectoryExtension(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, dwStartOffset); }
//static LONG __stdcall _SerialCall(BaseUTF* _this, LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, void* lpContext) { return _this->SerialCall(lpSystem, lpProc, lpContext); }
//static BOOL __stdcall _GetAbsolutePath(BaseUTF* _this, char* lpOutput, LPCTSTR lpInput, LONG lSize) { return _this->GetAbsolutePath(lpOutput, lpInput, lSize); }
//
extern "C" void* off_6B79138[43]; // =
//{
//	reinterpret_cast<void*>(&_QueryInterface),
//	reinterpret_cast<void*>(&_AddRef),
//	reinterpret_cast<void*>(&_Release),
//	reinterpret_cast<void*>(&_CreateInstance),
//	reinterpret_cast<void*>(&_CloseHandle),
//	reinterpret_cast<void*>(&_ReadFile),
//	reinterpret_cast<void*>(&_WriteFile),
//	reinterpret_cast<void*>(&_GetOverlappedResult),
//	reinterpret_cast<void*>(&_SetFilePointer),
//	reinterpret_cast<void*>(&_SetEndOfFile),
//	reinterpret_cast<void*>(&_GetFileSize),
//	reinterpret_cast<void*>(&_LockFile),
//	reinterpret_cast<void*>(&_UnlockFile),
//	reinterpret_cast<void*>(&_GetFileTime),
//	reinterpret_cast<void*>(&_SetFileTime),
//	reinterpret_cast<void*>(&_CreateFileMapping),
//	reinterpret_cast<void*>(&_MapViewOfFile),
//	reinterpret_cast<void*>(&_UnmapViewOfFile),
//	reinterpret_cast<void*>(&_FindFirstFile),
//	reinterpret_cast<void*>(&_FindNextFile),
//	reinterpret_cast<void*>(&_FindClose),
//	reinterpret_cast<void*>(&_CreateDirectory),
//	reinterpret_cast<void*>(&_RemoveDirectory),
//	reinterpret_cast<void*>(&_GetCurrentDirectory),
//	reinterpret_cast<void*>(&_SetCurrentDirectory),
//	reinterpret_cast<void*>(&_DeleteFile),
//	reinterpret_cast<void*>(&_CopyFile),
//	reinterpret_cast<void*>(&_MoveFile),
//	reinterpret_cast<void*>(&_GetFileAttributes),
//	reinterpret_cast<void*>(&_SetFileAttributes),
//	reinterpret_cast<void*>(&_GetLastError),
//	reinterpret_cast<void*>(&_OpenChild),
//	reinterpret_cast<void*>(&_GetFilePosition),
//	reinterpret_cast<void*>(&_GetFileName),
//	reinterpret_cast<void*>(&_GetAccessType),
//	reinterpret_cast<void*>(&_GetParentSystem),
//	reinterpret_cast<void*>(&_SetPreference),
//	reinterpret_cast<void*>(&_GetPreference),
//	reinterpret_cast<void*>(&_ReadDirectoryExtension),
//	reinterpret_cast<void*>(&_WriteDirectoryExtension),
//	reinterpret_cast<void*>(&_SerialCall),
//	reinterpret_cast<void*>(&_GetAbsolutePath),
//	reinterpret_cast<void*>(&_sub_6B73F00),
//};

extern "C" void* __thiscall sub_6B72DC0(void* _this);
extern "C" void* __thiscall sub_6B71490(void* _this);

extern "C"
{
	IFileSystem* CreateBaseUTF()
	{
		IFileSystem* pFileSystem = new DAComponent<BaseUTF>;
		void** vtable = *(void***)pFileSystem;
		memcpy(off_6B79138, vtable, sizeof(off_6B79138));
		return pFileSystem;
	}

	void Register_BaseUTF()
	{
		GENRESULT result = GR_GENERIC;
		if (ICOManager* DACOM = DACOM_Acquire())
		{
			if (IFileSystem* pFileSystem = CreateBaseUTF())
			{
				result = DACOM->RegisterComponent(pFileSystem, FILESYSTEM_INTERFACE_NAME, DACOM_LOW_PRIORITY);
				auto x = pFileSystem->Release();
				debug_point;
			}
		}
		unused(result);
	}
}

BaseUTF::BaseUTF()
{
	// szFilename[0] = '\\';
	// hParentFile = INVALID_HANDLE_VALUE;

	hParentFile = INVALID_HANDLE_VALUE;
	sub_6B72DC0(&unknown8);
	szPathUnknown20[0] = '\\';
	szPathUnknown128[0] = '\\';
	unknown22C = 0;
	unknown230 = 0;
	unknown234 = 0;
	unknown238 = 0;
	unknown23C = 0;
	sub_6B71490(&unknown240);
}

BaseUTF::~BaseUTF()
{
	//sub_6B73F00(this, 1);
}

GENRESULT BaseUTF::QueryInterface(const C8* interface_name, void** instance)
{
	GENRESULT result = BaseUTF_QueryInterface(this, interface_name, instance);
	return result;
}

U32 BaseUTF::AddRef(void)
{
	U32 result = BaseUTF_AddRef(this);
	return result;
}

U32 BaseUTF::Release(void)
{
	U32 result = BaseUTF_Release(this);
	return result;
}

GENRESULT BaseUTF::CreateInstance(DACOMDESC* descriptor, void** instance)
{
	DAFILEDESC* lpInfo = (DAFILEDESC*)descriptor;
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

	GENRESULT result = BaseUTF_CreateInstance(this, descriptor, instance);
	return result;
}

BOOL BaseUTF::init(DAFILEDESC* lpDesc)
{
	return TRUE;
}

BOOL BaseUTF::CloseHandle(HANDLE handle)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_CloseHandle(this, handle);
	return result;
}

BOOL BaseUTF::ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)
{
	auto result = BaseUTF_ReadFile(this, hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
	return result;
}

BOOL BaseUTF::WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)
{
	dwLastError = ERROR_ACCESS_DENIED;
	return FALSE;
}

BOOL BaseUTF::GetOverlappedResult(HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_GetOverlappedResult(this, hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
	return result;
}

DWORD BaseUTF::SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_SetFilePointer(this, hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
	return result;
}

BOOL BaseUTF::SetEndOfFile(HANDLE hFile)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_SetEndOfFile(this, hFile);
	return result;
}

DWORD BaseUTF::GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_GetFileSize(this, hFile, lpFileSizeHigh);
	return result;
}

BOOL BaseUTF::LockFile(HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_LockFile(this, hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToLockLow, nNumberOfBytesToLockHigh);
	return result;
}

BOOL BaseUTF::UnlockFile(HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_UnlockFile(this, hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToUnlockLow, nNumberOfBytesToUnlockHigh);
	return result;
}

BOOL BaseUTF::GetFileTime(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_GetFileTime(this, hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
	return result;
}

BOOL BaseUTF::SetFileTime(HANDLE hFile, CONST FILETIME* lpCreationTime, CONST FILETIME* lpLastAccessTime, CONST FILETIME* lpLastWriteTime)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_SetFileTime(this, hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
	return result;
}

HANDLE BaseUTF::CreateFileMapping(HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCTSTR lpName)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_CreateFileMapping(this, hFile, lpFileMappingAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName);
	return result;
}

LPVOID BaseUTF::MapViewOfFile(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, DWORD dwNumberOfBytesToMap)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_MapViewOfFile(this, hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap);
	return result;
}

BOOL BaseUTF::UnmapViewOfFile(LPCVOID lpBaseAddress)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_UnmapViewOfFile(this, lpBaseAddress);
	return result;
}

HANDLE BaseUTF::FindFirstFile(LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_FindFirstFile(this, lpFileName, lpFindFileData);
	return result;
}

BOOL BaseUTF::FindNextFile(HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_FindNextFile(this, hFindFile, lpFindFileData);
	return result;
}

BOOL BaseUTF::FindClose(HANDLE hFindFile)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_FindClose(this, hFindFile);
	return result;
}

BOOL BaseUTF::CreateDirectory(LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_CreateDirectory(this, lpPathName, lpSecurityAttributes);
	return result;
}

BOOL BaseUTF::RemoveDirectory(LPCTSTR lpPathName)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_RemoveDirectory(this, lpPathName);
	return result;
}

DWORD BaseUTF::GetCurrentDirectory(DWORD nBufferLength, LPTSTR lpBuffer)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_GetCurrentDirectory(this, nBufferLength, lpBuffer);
	return result;
}

BOOL BaseUTF::SetCurrentDirectory(LPCTSTR lpPathName)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_SetCurrentDirectory(this, lpPathName);
	return result;
}

BOOL BaseUTF::DeleteFile(LPCTSTR lpFileName)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_DeleteFile(this, lpFileName);
	return result;
}

BOOL BaseUTF::CopyFile(LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_CopyFile(this, lpExistingFileName, lpNewFileName, bFailIfExists);
	return result;
}

BOOL BaseUTF::MoveFile(LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_MoveFile(this, lpExistingFileName, lpNewFileName);
	return result;
}

DWORD BaseUTF::GetFileAttributes(LPCTSTR lpFileName)
{
	auto result = BaseUTF_GetFileAttributes(this, lpFileName);
	return result;
}

BOOL BaseUTF::SetFileAttributes(LPCTSTR lpFileName, DWORD dwFileAttributes)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_SetFileAttributes(this, lpFileName, dwFileAttributes);
	return result;
}

DWORD BaseUTF::GetLastError(void)
{
	auto result = BaseUTF_GetLastError(this);
	return result;
}

HANDLE BaseUTF::OpenChild(DAFILEDESC* lpDesc)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_OpenChild(this, lpDesc);
	return result;
}

DWORD BaseUTF::GetFilePosition(HANDLE hFile, PLONG pPositionHigh)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_GetFilePosition(this, hFile, pPositionHigh);
	return result;
}

LONG BaseUTF::GetFileName(LPSTR lpBuffer, LONG lBufferSize)
{
	auto result = BaseUTF_GetFileName(this, lpBuffer, lBufferSize);
	return result;
}

DWORD BaseUTF::GetAccessType(void)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_GetAccessType(this);
	return result;
}

GENRESULT BaseUTF::GetParentSystem(LPFILESYSTEM* lplpFileSystem)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_GetParentSystem(this, lplpFileSystem);
	return result;
}

GENRESULT BaseUTF::SetPreference(DWORD dwNumber, DWORD dwValue)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_SetPreference(this, dwNumber, dwValue);
	return result;
}

GENRESULT BaseUTF::GetPreference(DWORD dwNumber, PDWORD pdwValue)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_GetPreference(this, dwNumber, pdwValue);
	return result;
}

GENRESULT BaseUTF::ReadDirectoryExtension(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, DWORD dwStartOffset)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_ReadDirectoryExtension(this, hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, dwStartOffset);
	return result;
}

GENRESULT BaseUTF::WriteDirectoryExtension(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, DWORD dwStartOffset)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_WriteDirectoryExtension(this, hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, dwStartOffset);
	return result;
}

LONG BaseUTF::SerialCall(LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, void* lpContext)
{
	NOT_IMPLEMENTED;
	auto result = BaseUTF_SerialCall(this, lpSystem, lpProc, lpContext);
	return result;
}

BOOL BaseUTF::GetAbsolutePath(char* lpOutput, LPCTSTR lpInput, LONG lSize)
{
	// NOT_IMPLEMENTED;
	auto result = BaseUTF_GetAbsolutePath(this, lpOutput, lpInput, lSize);
	return result;
}
