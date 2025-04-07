#include "Shading-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_6ed1014, 0x6ed1014)},
	{"KERNEL32.dll", "HeapAlloc", -1, _RelativeAddress(public_6ed1018, 0x6ed1018)},
	{"KERNEL32.dll", "HeapFree", -1, _RelativeAddress(public_6ed101c, 0x6ed101c)},
	{"KERNEL32.dll", "GetProcessHeap", -1, _RelativeAddress(public_6ed1020, 0x6ed1020)},
	{"DACOM.dll", "?GetCRC32@DACOM_CRC@@YAKPBD@Z", -1, _RelativeAddress(public_6ed1000, 0x6ed1000)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6ed1004, 0x6ed1004)},
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6ed1008, 0x6ed1008)},
	{"DACOM.dll", "stricmp", -1, _RelativeAddress(public_6ed100c, 0x6ed100c)},
	{"MSVCRT.dll", "strncpy", -1, _RelativeAddress(public_6ed1028, 0x6ed1028)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_6ed102c, 0x6ed102c)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_6ed1030, 0x6ed1030)},
	{"MSVCRT.dll", "_CIfmod", -1, _RelativeAddress(public_6ed1034, 0x6ed1034)},
	{"MSVCRT.dll", "floor", -1, _RelativeAddress(public_6ed1038, 0x6ed1038)},
	{"MSVCRT.dll", "_ftol", -1, _RelativeAddress(public_6ed103c, 0x6ed103c)},
	{"MSVCRT.dll", "atoi", -1, _RelativeAddress(public_6ed1040, 0x6ed1040)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6ed1044, 0x6ed1044)},
	{"MSVCRT.dll", "strchr", -1, _RelativeAddress(public_6ed1048, 0x6ed1048)},
	{"MSVCRT.dll", "strtoul", -1, _RelativeAddress(public_6ed104c, 0x6ed104c)},
	{"MSVCRT.dll", "strspn", -1, _RelativeAddress(public_6ed1050, 0x6ed1050)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6ed1054, 0x6ed1054)},
	{"MSVCRT.dll", "sprintf", -1, _RelativeAddress(public_6ed1058, 0x6ed1058)},
	{"MSVCRT.dll", "memmove", -1, _RelativeAddress(public_6ed105c, 0x6ed105c)},
	{"MSVCRT.dll", "qsort", -1, _RelativeAddress(public_6ed1060, 0x6ed1060)},
	{"MSVCRT.dll", "strrchr", -1, _RelativeAddress(public_6ed1064, 0x6ed1064)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6ed1068, 0x6ed1068)},
	{"MSVCRT.dll", "strncmp", -1, _RelativeAddress(public_6ed106c, 0x6ed106c)},
	{"MSVCRT.dll", "isalnum", -1, _RelativeAddress(public_6ed1070, 0x6ed1070)},
	{"MSVCRT.dll", "__dllonexit", -1, _RelativeAddress(public_6ed1074, 0x6ed1074)},
	{"MSVCRT.dll", "_onexit", -1, _RelativeAddress(public_6ed1078, 0x6ed1078)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6ed107c, 0x6ed107c)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6ed1080, 0x6ed1080)},
	{"MSVCRT.dll", "_strlwr", -1, _RelativeAddress(public_6ed1084, 0x6ed1084)},
	{"MSVCRT.dll", "_strnicmp", -1, _RelativeAddress(public_6ed1088, 0x6ed1088)},
	{"MSVCRT.dll", "_strdup", -1, _RelativeAddress(public_6ed108c, 0x6ed108c)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

