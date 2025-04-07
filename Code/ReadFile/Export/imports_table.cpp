#include "ReadFile-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6b79000, 0x6b79000)},
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6b79004, 0x6b79004)},
	{"DACOM.dll", "stricmp", -1, _RelativeAddress(public_6b79008, 0x6b79008)},
	{"KERNEL32.dll", "UnmapViewOfFile", -1, _RelativeAddress(public_6b79010, 0x6b79010)},
	{"KERNEL32.dll", "CloseHandle", -1, _RelativeAddress(public_6b79014, 0x6b79014)},
	{"KERNEL32.dll", "ReadFile", -1, _RelativeAddress(public_6b79018, 0x6b79018)},
	{"KERNEL32.dll", "DosDateTimeToFileTime", -1, _RelativeAddress(public_6b7901c, 0x6b7901c)},
	{"KERNEL32.dll", "GetFileTime", -1, _RelativeAddress(public_6b79020, 0x6b79020)},
	{"KERNEL32.dll", "MapViewOfFile", -1, _RelativeAddress(public_6b79024, 0x6b79024)},
	{"KERNEL32.dll", "GetFileSize", -1, _RelativeAddress(public_6b79028, 0x6b79028)},
	{"KERNEL32.dll", "CreateFileMappingA", -1, _RelativeAddress(public_6b7902c, 0x6b7902c)},
	{"KERNEL32.dll", "CreateFileA", -1, _RelativeAddress(public_6b79030, 0x6b79030)},
	{"KERNEL32.dll", "DeleteCriticalSection", -1, _RelativeAddress(public_6b79034, 0x6b79034)},
	{"KERNEL32.dll", "GetLastError", -1, _RelativeAddress(public_6b79038, 0x6b79038)},
	{"KERNEL32.dll", "GetFileAttributesA", -1, _RelativeAddress(public_6b7903c, 0x6b7903c)},
	{"KERNEL32.dll", "InitializeCriticalSection", -1, _RelativeAddress(public_6b79040, 0x6b79040)},
	{"KERNEL32.dll", "FindFirstFileA", -1, _RelativeAddress(public_6b79044, 0x6b79044)},
	{"KERNEL32.dll", "FindNextFileA", -1, _RelativeAddress(public_6b79048, 0x6b79048)},
	{"KERNEL32.dll", "FindClose", -1, _RelativeAddress(public_6b7904c, 0x6b7904c)},
	{"KERNEL32.dll", "LeaveCriticalSection", -1, _RelativeAddress(public_6b79050, 0x6b79050)},
	{"KERNEL32.dll", "EnterCriticalSection", -1, _RelativeAddress(public_6b79054, 0x6b79054)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_6b79058, 0x6b79058)},
	{"KERNEL32.dll", "VirtualFree", -1, _RelativeAddress(public_6b7905c, 0x6b7905c)},
	{"KERNEL32.dll", "VirtualAlloc", -1, _RelativeAddress(public_6b79060, 0x6b79060)},
	{"MSVCRT.dll", "strchr", -1, _RelativeAddress(public_6b79068, 0x6b79068)},
	{"MSVCRT.dll", "calloc", -1, _RelativeAddress(public_6b7906c, 0x6b7906c)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6b79070, 0x6b79070)},
	{"MSVCRT.dll", "strncpy", -1, _RelativeAddress(public_6b79074, 0x6b79074)},
	{"MSVCRT.dll", "_access", -1, _RelativeAddress(public_6b79078, 0x6b79078)},
	{"MSVCRT.dll", "_fullpath", -1, _RelativeAddress(public_6b7907c, 0x6b7907c)},
	{"MSVCRT.dll", "_makepath", -1, _RelativeAddress(public_6b79080, 0x6b79080)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_6b79084, 0x6b79084)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6b79088, 0x6b79088)},
	{"MSVCRT.dll", "isalpha", -1, _RelativeAddress(public_6b7908c, 0x6b7908c)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6b79090, 0x6b79090)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6b79094, 0x6b79094)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6b79098, 0x6b79098)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

