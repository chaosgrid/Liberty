#include "RendComp-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "stricmp", -1, _RelativeAddress(public_6c36000, 0x6c36000)},
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6c36004, 0x6c36004)},
	{"DACOM.dll", "?GetCRC32@DACOM_CRC@@YAKPBD@Z", -1, _RelativeAddress(public_6c36008, 0x6c36008)},
	{"DACOM.dll", "?LogEvent@LogStream@@YAXPBDMK@Z", -1, _RelativeAddress(public_6c3600c, 0x6c3600c)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6c36010, 0x6c36010)},
	{"KERNEL32.dll", "GetProcessHeap", -1, _RelativeAddress(public_6c36018, 0x6c36018)},
	{"KERNEL32.dll", "HeapFree", -1, _RelativeAddress(public_6c3601c, 0x6c3601c)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_6c36020, 0x6c36020)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_6c36028, 0x6c36028)},
	{"MSVCRT.dll", "strtoul", -1, _RelativeAddress(public_6c3602c, 0x6c3602c)},
	{"MSVCRT.dll", "atoi", -1, _RelativeAddress(public_6c36030, 0x6c36030)},
	{"MSVCRT.dll", "strchr", -1, _RelativeAddress(public_6c36034, 0x6c36034)},
	{"MSVCRT.dll", "strspn", -1, _RelativeAddress(public_6c36038, 0x6c36038)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6c3603c, 0x6c3603c)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6c36040, 0x6c36040)},
	{"MSVCRT.dll", "calloc", -1, _RelativeAddress(public_6c36044, 0x6c36044)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_6c36048, 0x6c36048)},
	{"MSVCRT.dll", "strncpy", -1, _RelativeAddress(public_6c3604c, 0x6c3604c)},
	{"MSVCRT.dll", "_ftol", -1, _RelativeAddress(public_6c36050, 0x6c36050)},
	{"MSVCRT.dll", "sprintf", -1, _RelativeAddress(public_6c36054, 0x6c36054)},
	{"MSVCRT.dll", "realloc", -1, _RelativeAddress(public_6c36058, 0x6c36058)},
	{"MSVCRT.dll", "_CIacos", -1, _RelativeAddress(public_6c3605c, 0x6c3605c)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6c36060, 0x6c36060)},
	{"MSVCRT.dll", "strstr", -1, _RelativeAddress(public_6c36064, 0x6c36064)},
	{"MSVCRT.dll", "_itoa", -1, _RelativeAddress(public_6c36068, 0x6c36068)},
	{"MSVCRT.dll", "__dllonexit", -1, _RelativeAddress(public_6c3606c, 0x6c3606c)},
	{"MSVCRT.dll", "_onexit", -1, _RelativeAddress(public_6c36070, 0x6c36070)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6c36074, 0x6c36074)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6c36078, 0x6c36078)},
	{"MSVCRT.dll", "_strlwr", -1, _RelativeAddress(public_6c3607c, 0x6c3607c)},
	{"MSVCRT.dll", "_strdup", -1, _RelativeAddress(public_6c36080, 0x6c36080)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

