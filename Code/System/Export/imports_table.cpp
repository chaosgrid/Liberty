#include "System-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6f12000, 0x6f12000)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6f12004, 0x6f12004)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_6f1200c, 0x6f1200c)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6f12014, 0x6f12014)},
	{"MSVCRT.dll", "strchr", -1, _RelativeAddress(public_6f12018, 0x6f12018)},
	{"MSVCRT.dll", "??3@YAXPAX@Z", -1, _RelativeAddress(public_6f1201c, 0x6f1201c)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_6f12020, 0x6f12020)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6f12024, 0x6f12024)},
	{"MSVCRT.dll", "calloc", -1, _RelativeAddress(public_6f12028, 0x6f12028)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6f1202c, 0x6f1202c)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6f12030, 0x6f12030)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6f12034, 0x6f12034)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

