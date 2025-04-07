#include "x86math-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "stricmp", -1, _RelativeAddress(public_6f73000, 0x6f73000)},
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6f73004, 0x6f73004)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_6f7300c, 0x6f7300c)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6f73014, 0x6f73014)},
	{"MSVCRT.dll", "__dllonexit", -1, _RelativeAddress(public_6f73018, 0x6f73018)},
	{"MSVCRT.dll", "_onexit", -1, _RelativeAddress(public_6f7301c, 0x6f7301c)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6f73020, 0x6f73020)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6f73024, 0x6f73024)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6f73028, 0x6f73028)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6f7302c, 0x6f7302c)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

