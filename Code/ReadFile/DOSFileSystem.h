#pragma once

#include "Filesys.h"

#ifndef __DOSFILESYSTEM_H__
#define __DOSFILESYSTEM_H__

struct DACOM_NO_VTABLE DOSFileSystemWrapper : public IFileSystem
{
	BEGIN_DACOM_MAP_INBOUND(DOSFileSystemWrapper)
		DACOM_INTERFACE_ENTRY(IFileSystem)
		DACOM_INTERFACE_ENTRY2(IID_IFileSystem, IFileSystem)
		END_DACOM_MAP()

	DOSFileSystemWrapper();
	~DOSFileSystemWrapper();

	// *** IComponentFactory methods ***

	DACOM_DEFMETHOD(CreateInstance) (DACOMDESC* descriptor, void** instance) override;

	// *** IFileSystem methods ***
	// Note: Windows types used below for optimum compatibility with Win32 file system API calls

	DACOM_DEFMETHOD_(BOOL, CloseHandle) (HANDLE handle) override;
	DACOM_DEFMETHOD_(BOOL, ReadFile) (HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped) override;
	DACOM_DEFMETHOD_(BOOL, WriteFile) (HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped) override;
	DACOM_DEFMETHOD_(BOOL, GetOverlappedResult) (HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait) override;
	DACOM_DEFMETHOD_(DWORD, SetFilePointer) (HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod = FILE_BEGIN) override;
	DACOM_DEFMETHOD_(BOOL, SetEndOfFile) (HANDLE hFile) override;
	DACOM_DEFMETHOD_(DWORD, GetFileSize) (HANDLE hFile, LPDWORD lpFileSizeHigh) override;
	DACOM_DEFMETHOD_(BOOL, LockFile) (HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh) override;
	DACOM_DEFMETHOD_(BOOL, UnlockFile) (HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh) override;
	DACOM_DEFMETHOD_(BOOL, GetFileTime) (HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime) override;
	DACOM_DEFMETHOD_(BOOL, SetFileTime) (HANDLE hFile, CONST FILETIME* lpCreationTime, CONST FILETIME* lpLastAccessTime, CONST FILETIME* lpLastWriteTime) override;
	DACOM_DEFMETHOD_(HANDLE, CreateFileMapping) (HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect/* = PAGE_READONLY*/, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCTSTR lpName) override;
	DACOM_DEFMETHOD_(LPVOID, MapViewOfFile) (HANDLE hFileMappingObject, DWORD dwDesiredAccess/* = FILE_MAP_READ*/, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, DWORD dwNumberOfBytesToMap) override;
	DACOM_DEFMETHOD_(BOOL, UnmapViewOfFile) (LPCVOID lpBaseAddress) override;
	DACOM_DEFMETHOD_(HANDLE, FindFirstFile) (LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData) override;
	DACOM_DEFMETHOD_(BOOL, FindNextFile) (HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData) override;
	DACOM_DEFMETHOD_(BOOL, FindClose) (HANDLE hFindFile) override;
	DACOM_DEFMETHOD_(BOOL, CreateDirectory) (LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes) override;
	DACOM_DEFMETHOD_(BOOL, RemoveDirectory) (LPCTSTR lpPathName) override;
	DACOM_DEFMETHOD_(DWORD, GetCurrentDirectory) (DWORD nBufferLength, LPTSTR lpBuffer) override;
	DACOM_DEFMETHOD_(BOOL, SetCurrentDirectory) (LPCTSTR lpPathName) override;
	DACOM_DEFMETHOD_(BOOL, DeleteFile) (LPCTSTR lpFileName) override;
	DACOM_DEFMETHOD_(BOOL, CopyFile) (LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName, BOOL bFailIfExists) override;
	DACOM_DEFMETHOD_(BOOL, MoveFile) (LPCTSTR lpExistingFileName, LPCTSTR lpNewFileName) override;
	DACOM_DEFMETHOD_(DWORD, GetFileAttributes) (LPCTSTR lpFileName) override;
	DACOM_DEFMETHOD_(BOOL, SetFileAttributes) (LPCTSTR lpFileName, DWORD dwFileAttributes) override;
	DACOM_DEFMETHOD_(DWORD, GetLastError) (void) override;

	// IFileSystem extensions to WIN32 system

	DACOM_DEFMETHOD_(HANDLE, OpenChild) (DAFILEDESC* lpDesc) override;
	DACOM_DEFMETHOD_(DWORD, GetFilePosition) (HANDLE hFile, PLONG pPositionHigh) override;
	DACOM_DEFMETHOD_(LONG, GetFileName) (LPSTR lpBuffer, LONG lBufferSize) override;
	DACOM_DEFMETHOD_(DWORD, GetAccessType) (void) override;
	DACOM_DEFMETHOD(GetParentSystem) (LPFILESYSTEM* lplpFileSystem) override;
	DACOM_DEFMETHOD(SetPreference) (DWORD dwNumber, DWORD dwValue) override;
	DACOM_DEFMETHOD(GetPreference) (DWORD dwNumber, PDWORD pdwValue) override;
	DACOM_DEFMETHOD(ReadDirectoryExtension) (HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, DWORD dwStartOffset) override;
	DACOM_DEFMETHOD(WriteDirectoryExtension) (HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, DWORD dwStartOffset) override;
	DACOM_DEFMETHOD_(LONG, SerialCall) (LPFILESYSTEM lpSystem, DAFILE_SERIAL_PROC lpProc, void* lpContext) override;
	DACOM_DEFMETHOD_(BOOL, GetAbsolutePath) (char* lpOutput, LPCTSTR lpInput, LONG lSize) override;

};

extern void Register_DOSFileSystem();

#endif // __DOSFILESYSTEM_H__
