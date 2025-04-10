#pragma once

#include "Filesys.h"

#ifndef __BASEUTF_H__
#define __BASEUTF_H__

//
// UTF container file header
//

struct UTF_HEADER
{
	DWORD dwIdentifier;         // 'UTF ' identifier
	DWORD dwVersion;            // File version number (0x100 = 1.00)

	DWORD dwDirectoryOffset;    // Offset to beginning of directory area
	DWORD dwDirectorySize;      // Size of directory area in bytes (used area)

	DWORD dwUnusedEntryOffset;	// offset to first unused entry, 0 == nothing unused
	DWORD dwDirEntrySize;		// size of a directory entry, in bytes

	DWORD dwNamesOffset;		// offset to buffer containing all of the ASCIIZ filenames
	DWORD dwNameSpaceSize;		// size of the names buffer
	DWORD dwNameSpaceUsed;		// number of bytes actually used in the names buffer

	DWORD dwDataStartOffset;	// offset to beginning of file data

	DWORD dwUnusedSpaceOffset;	// offset to first block of unused space
	DWORD dwUnusedSpaceSize;    // Cumulative size of unused resources

	FILETIME	LastWriteTime;	// last time directory structure was changed
	//
	// Reserved expansion area for future header versions
	//
};

//
//  read + write may exceed the actual number of files open if some files have read+write access
//  the same goes for readSharing and writeSharing
//
struct UTF_SHARING
{
	byte	read;				// count of files open with read access
	byte	write;				// count of files open with write access
	byte	readSharing;		// count of files open with read sharing on
	byte	writeSharing;		// count of files open with write sharing on

	UTF_SHARING& operator += (const UTF_SHARING& access)
	{
		read += access.read;
		write += access.write;
		if (access.readSharing)
			readSharing += access.read + access.write;
		if (access.writeSharing)
			writeSharing += access.read + access.write;
		return *this;
	}

	UTF_SHARING& operator -= (const UTF_SHARING& access)
	{
		read -= access.read;
		write -= access.write;
		if (access.readSharing)
			readSharing -= access.read + access.write;
		if (access.writeSharing)
			writeSharing -= access.read + access.write;
		return *this;
	}

	BOOL isCompatible(const UTF_SHARING& access);
	// returns TRUE if proposed access meets the current sharing environment

	BOOL isEmpty(void)
	{
		return read == 0 && write == 0 && readSharing == 0 && writeSharing == 0;
	}

	void setEmpty(void)
	{
		read = 0;
		write = 0;
		readSharing = 0;
		writeSharing = 0;
	}
};


//
// UTF directory entry representation
//

struct UTF_DIR_ENTRY
{
	DWORD		dwNext;				// offset to next entry within directory
	DWORD		dwName;				// offset into name buffer of an ASCIIZ string

	DWORD		dwAttributes;		// directory / file / read-only, etc
	UTF_SHARING	Sharing;			// dynamic sharing state

	DWORD		dwDataOffset;		// file data (for file), or directory offset to child directory entry
	DWORD		dwSpaceAllocated;	// disk space allocated for file (may be larger than used)
	DWORD		dwSpaceUsed;		// disk space actually used by the file
	DWORD		dwUncompressedSize;	// uncompressed file size

	DWORD		DOSCreationTime;
	DWORD		DOSLastAccessTime;
	DWORD		DOSLastWriteTime;
};


struct UTF_READ_STRUCT
{
	HANDLE			hFileHandle;
	LPVOID			lpBuffer;
	DWORD			nNumberOfBytesToRead;
	LPDWORD			lpNumberOfBytesRead;
	LPOVERLAPPED	lpOverlapped;
};

struct UTF_WRITE_STRUCT
{
	HANDLE			hFileHandle;
	LPCVOID			lpBuffer;
	DWORD			nNumberOfBytesToWrite;
	LPDWORD			lpNumberOfBytesWritten;
	LPOVERLAPPED	lpOverlapped;
};

extern "C"
{
	extern void* _import_6B7906C; // = __imp("MSVCRT.dll", "calloc");
	extern void* _import_6B79070; // = __imp("MSVCRT.dll", "free");
}

struct /*DACOM_NO_VTABLE*/ BaseUTF : public IFileSystem
{
	BEGIN_DACOM_MAP_INBOUND(BaseUTF)
		DACOM_INTERFACE_ENTRY(IFileSystem)
		DACOM_INTERFACE_ENTRY2(IID_IFileSystem, IFileSystem)
	END_DACOM_MAP()

	DA_HEAP_DEFINE_NEW_OPERATOR_HACK(BaseUTF, _import_6B7906C, _import_6B79070);

	HANDLE hParentFile;
	int unknown8;
	int unknownC;
	int unknown10;
	int unknown14;
	int unknown18;
	DWORD dwLastError;
	char szPathUnknown20[264];
	char szPathUnknown128[260];
	int unknown22C;
	int unknown230;
	int unknown234;
	int unknown238;
	int unknown23C;
	char unknown240;
	void* unknown244;
	int unknown248;

	BaseUTF();
	~BaseUTF();

	// *** IDAComponent methods ***

	DACOM_DEFMETHOD(QueryInterface) (const C8* interface_name, void** instance) override;
	DACOM_DEFMETHOD_(U32, AddRef)  (void) override;
	DACOM_DEFMETHOD_(U32, Release)  (void) override;

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
	//DACOM_DEFMETHOD_(BOOL, GetAbsolutePath) (char* lpOutput, LPCTSTR lpInput, LONG lSize) override;
	DACOM_DEFMETHOD_(BOOL, GetAbsolutePath) (char* lpOutput, LPCTSTR lpInput, LONG lSize) override;

	//---------------   
	// BaseUTF methods
	//---------------   

	BOOL init(DAFILEDESC* lpDesc);		// return TRUE if successful

	static BOOL __stdcall GetDirectoryEntry(LPCSTR lpFileName, UTF_DIR_ENTRY* pDirectory, LPCTSTR pNames, UTF_DIR_ENTRY** ppEntry);
	static BOOL __fastcall DOSTimeToFileTime(DWORD dwDOSTime, FILETIME* pFileTime);
	static DWORD __fastcall FileTimeToDOSTime(CONST FILETIME* pFileTime);
	static DWORD __stdcall FindName(LPCTSTR lpFileName, LPCTSTR pNames);
	static bool __stdcall TestValid(LPCTSTR lpFileName);	// return FALSE if name contains invalid characters

	// the following are only really implemented by the UTF implementation

	HANDLE openChild(DAFILEDESC* lpDesc, UTF_DIR_ENTRY* pEntry);
	DWORD getFileAttributes(LPCTSTR lpFileName, UTF_DIR_ENTRY* pEntry);
	HANDLE findFirstFile(LPCTSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData, UTF_DIR_ENTRY* pEntry);
	UTF_DIR_ENTRY* getDirectoryEntryForChild(LPCSTR lpFileName, UTF_DIR_ENTRY* pRootDir = 0, HANDLE hFindFirst = INVALID_HANDLE_VALUE);
	const char* getNameBuffer(void);
};
static_assert(sizeof(BaseUTF) == 0x24C); // 588
static_assert(sizeof(DAComponent<BaseUTF>) == 0x250); // 592

extern "C"
{
	READFILE_DEC IFileSystem* CreateBaseUTF();
	READFILE_DEC void Register_BaseUTF();
}

#endif // __BASEUTF_H__
