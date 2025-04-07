#include "ximage-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6f83000, 0x6f83000)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6f83004, 0x6f83004)},
	{"USER32.dll", "SetRect", -1, _RelativeAddress(public_6f83034, 0x6f83034)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_6f8300c, 0x6f8300c)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_6f83010, 0x6f83010)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6f83014, 0x6f83014)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6f83018, 0x6f83018)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6f8301c, 0x6f8301c)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6f83020, 0x6f83020)},
	{"MSVCRT.dll", "??3@YAXPAX@Z", -1, _RelativeAddress(public_6f83024, 0x6f83024)},
	{"MSVCRT.dll", "_ftol", -1, _RelativeAddress(public_6f83028, 0x6f83028)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6f8302c, 0x6f8302c)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

