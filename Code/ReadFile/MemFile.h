#pragma once

// MemoryFile, an IFileSystem implementation that reads from memory.

#ifndef __MEMFILE_H__
#define __MEMFILE_H__
#ifdef MEM_FILE_FILESYSTEM

#include "FileSys.h"

enum
{
	// use the memory directly, dont allocate another copy of buffer
	CMF_DONT_COPY_MEMORY = 0x00000001,

	// take ownership of memory buffer, (free memory on destruction)
	// in order to use CMF_OWN_MEMORY correctly, the buffer being handed off 
	// must be allocated from the heap that is used by the MemFile implementation.
	CMF_OWN_MEMORY = 0x00000002,
};

struct MEMFILEDESC : public DAFILEDESC
{
	PVOID lpBuffer;
	DWORD dwBufferSize;
	DWORD dwFlags;

	MEMFILEDESC(const C8* _file_name = NULL, const C8* _interface_name = "IFileSystem") :
		DAFILEDESC(_file_name, _interface_name),
		lpBuffer(),
		dwBufferSize(),
		dwFlags()
	{
		size = sizeof(*this);
		lpImplementation = "MEM";
	}
};

struct DACOM_NO_VTABLE MemoryFile : public IFileSystem
{
	BEGIN_DACOM_MAP_INBOUND(MemoryFile)
		DACOM_INTERFACE_ENTRY(IFileSystem)
		DACOM_INTERFACE_ENTRY2(IID_IFileSystem, IFileSystem)
		END_DACOM_MAP()

	U8* buffer;
	U32 bufferSize;
	U32 filePos;
	BOOL32 bOwnedMemory : 1;
	BOOL32 bNoExtend : 1; // don't extend the memory buffer
	BOOL32 bVirtualAlloc : 1; // allocated through VirtualAlloc()
	DWORD dwMode;
	DWORD dwEndOfFile;
	C8 fileName[MAX_PATH + 4];

	~MemoryFile(void);

	DA_HEAP_DEFINE_NEW_OPERATOR(MemoryFile);

	// *** IComponentFactory methods ***

	DACOM_DEFMETHOD(CreateInstance) (DACOMDESC* descriptor, void** instance);

	// *** IFileSystem methods ***

	DACOM_DEFMETHOD_(BOOL, CloseHandle) (HANDLE handle = 0);
	DACOM_DEFMETHOD_(BOOL, ReadFile) (HANDLE hFileHandle, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
	DACOM_DEFMETHOD_(BOOL, WriteFile) (HANDLE hFileHandle, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
	DACOM_DEFMETHOD_(BOOL, GetOverlappedResult) (HANDLE hFileHandle, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait);
	DACOM_DEFMETHOD_(DWORD, SetFilePointer) (HANDLE hFileHandle, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh = 0, DWORD dwMoveMethod = FILE_BEGIN);
	DACOM_DEFMETHOD_(BOOL, SetEndOfFile) (HANDLE hFileHandle = 0);
	DACOM_DEFMETHOD_(DWORD, GetFileSize) (HANDLE hFileHandle, LPDWORD lpFileSizeHigh = 0);
	DACOM_DEFMETHOD_(BOOL, LockFile) (HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh);
	DACOM_DEFMETHOD_(BOOL, UnlockFile) (HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh);
	DACOM_DEFMETHOD_(BOOL, GetFileTime) (HANDLE hFileHandle, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);
	DACOM_DEFMETHOD_(BOOL, SetFileTime) (HANDLE hFileHandle, CONST FILETIME* lpCreationTime, CONST FILETIME* lpLastAccessTime, CONST FILETIME* lpLastWriteTime);
	DACOM_DEFMETHOD_(HANDLE, CreateFileMapping) (HANDLE hFileHandle, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCTSTR lpName);
	DACOM_DEFMETHOD_(LPVOID, MapViewOfFile) (HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, DWORD dwNumberOfBytesToMap);
	DACOM_DEFMETHOD_(BOOL, UnmapViewOfFile) (LPCVOID lpBaseAddress);
	DACOM_DEFMETHOD_(HANDLE, FindFirstFile) (LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData);
	DACOM_DEFMETHOD_(BOOL, FindNextFile) (HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData);
	DACOM_DEFMETHOD_(BOOL, FindClose) (HANDLE hFindFile);
	DACOM_DEFMETHOD_(BOOL, CreateDirectory) (LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
	DACOM_DEFMETHOD_(BOOL, RemoveDirectory) (LPCTSTR lpPathName);
	DACOM_DEFMETHOD_(DWORD, GetCurrentDirectory) (DWORD nBufferLength, LPTSTR lpBuffer);
	DACOM_DEFMETHOD_(BOOL, SetCurrentDirectory) (LPCTSTR lpPathName);
	DACOM_DEFMETHOD_(BOOL, DeleteFile) (LPCTSTR lpFileName);
	DACOM_DEFMETHOD_(BOOL, CopyFile) (LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists);
	DACOM_DEFMETHOD_(BOOL, MoveFile) (LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName);
	DACOM_DEFMETHOD_(DWORD, GetFileAttributes) (LPCTSTR lpFileName);
	DACOM_DEFMETHOD_(BOOL, SetFileAttributes) (LPCTSTR lpFileName, DWORD dwFileAttributes);
	DACOM_DEFMETHOD_(DWORD, GetLastError) (VOID);

	// IFileSystem extensions to WIN32 system

	DACOM_DEFMETHOD_(HANDLE, OpenChild) (DAFILEDESC* lpDesc);
	DACOM_DEFMETHOD_(DWORD, GetFilePosition) (HANDLE hFileHandle = 0, PLONG pPositionHigh = 0);
	DACOM_DEFMETHOD_(LONG, GetFileName) (LPSTR lpBuffer, LONG lBufferSize);
	DACOM_DEFMETHOD_(DWORD, GetAccessType) (VOID);
	DACOM_DEFMETHOD(GetParentSystem) (LPFILESYSTEM* lplpFileSystem);
	DACOM_DEFMETHOD(SetPreference) (DWORD dwNumber, DWORD dwValue);
	DACOM_DEFMETHOD(GetPreference) (DWORD dwNumber, PDWORD pdwValue);
	DACOM_DEFMETHOD(ReadDirectoryExtension) (HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead = 0, DWORD dwStartOffset = 0);
	DACOM_DEFMETHOD(WriteDirectoryExtension) (HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten = 0, DWORD dwStartOffset = 0);
	DACOM_DEFMETHOD_(LONG, SerialCall) (LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, VOID* lpContext);
	DACOM_DEFMETHOD_(BOOL, GetAbsolutePath) (char* lpOutput, LPCTSTR lpInput, LONG lSize);

	// *** MemoryFile methods ***

	GENRESULT init(MEMFILEDESC* lpDesc);
};

extern "C"
{
	READFILE_DEC IComponentFactory* CreateMemFileFactory(void);
	READFILE_DEC void Register_MemFile();
}

#endif // MEM_FILE_FILESYSTEM
#endif // __MEMFILE_H__
