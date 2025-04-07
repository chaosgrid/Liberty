#include "LuaProfile-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_680c000, 0x680c000)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_680c004, 0x680c004)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_680c00c, 0x680c00c)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_680c014, 0x680c014)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_680c018, 0x680c018)},
	{"MSVCRT.dll", "calloc", -1, _RelativeAddress(public_680c01c, 0x680c01c)},
	{"MSVCRT.dll", "strncpy", -1, _RelativeAddress(public_680c020, 0x680c020)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_680c024, 0x680c024)},
	{"MSVCRT.dll", "??3@YAXPAX@Z", -1, _RelativeAddress(public_680c028, 0x680c028)},
	{"MSVCRT.dll", "memmove", -1, _RelativeAddress(public_680c02c, 0x680c02c)},
	{"MSVCRT.dll", "exit", -1, _RelativeAddress(public_680c030, 0x680c030)},
	{"MSVCRT.dll", "longjmp", -1, _RelativeAddress(public_680c034, 0x680c034)},
	{"MSVCRT.dll", "_setjmp3", -1, _RelativeAddress(public_680c038, 0x680c038)},
	{"MSVCRT.dll", "fclose", -1, _RelativeAddress(public_680c03c, 0x680c03c)},
	{"MSVCRT.dll", "freopen", -1, _RelativeAddress(public_680c040, 0x680c040)},
	{"MSVCRT.dll", "ungetc", -1, _RelativeAddress(public_680c044, 0x680c044)},
	{"MSVCRT.dll", "fgetc", -1, _RelativeAddress(public_680c048, 0x680c048)},
	{"MSVCRT.dll", "fopen", -1, _RelativeAddress(public_680c04c, 0x680c04c)},
	{"MSVCRT.dll", "_iob", -1, _RelativeAddress(public_680c050, 0x680c050)},
	{"MSVCRT.dll", "_pctype", -1, _RelativeAddress(public_680c054, 0x680c054)},
	{"MSVCRT.dll", "__mb_cur_max", -1, _RelativeAddress(public_680c058, 0x680c058)},
	{"MSVCRT.dll", "_isctype", -1, _RelativeAddress(public_680c05c, 0x680c05c)},
	{"MSVCRT.dll", "sprintf", -1, _RelativeAddress(public_680c060, 0x680c060)},
	{"MSVCRT.dll", "strcoll", -1, _RelativeAddress(public_680c064, 0x680c064)},
	{"MSVCRT.dll", "_ftol", -1, _RelativeAddress(public_680c068, 0x680c068)},
	{"MSVCRT.dll", "vsprintf", -1, _RelativeAddress(public_680c06c, 0x680c06c)},
	{"MSVCRT.dll", "strchr", -1, _RelativeAddress(public_680c070, 0x680c070)},
	{"MSVCRT.dll", "toupper", -1, _RelativeAddress(public_680c074, 0x680c074)},
	{"MSVCRT.dll", "realloc", -1, _RelativeAddress(public_680c078, 0x680c078)},
	{"MSVCRT.dll", "fread", -1, _RelativeAddress(public_680c07c, 0x680c07c)},
	{"MSVCRT.dll", "fputs", -1, _RelativeAddress(public_680c080, 0x680c080)},
	{"MSVCRT.dll", "strtol", -1, _RelativeAddress(public_680c084, 0x680c084)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_680c088, 0x680c088)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_680c08c, 0x680c08c)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_680c090, 0x680c090)},
	{"MSVCRT.dll", "_strdup", -1, _RelativeAddress(public_680c094, 0x680c094)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

