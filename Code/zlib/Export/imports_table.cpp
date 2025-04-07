#include "zlib-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"CRTDLL.dll", "fwrite", -1, _RelativeAddress(public_1000b000, 0x1000b000)},
	{"CRTDLL.dll", "fread", -1, _RelativeAddress(public_1000b004, 0x1000b004)},
	{"CRTDLL.dll", "_errno", -1, _RelativeAddress(public_1000b008, 0x1000b008)},
	{"CRTDLL.dll", "fclose", -1, _RelativeAddress(public_1000b00c, 0x1000b00c)},
	{"CRTDLL.dll", "free", -1, _RelativeAddress(public_1000b010, 0x1000b010)},
	{"CRTDLL.dll", "vsprintf", -1, _RelativeAddress(public_1000b014, 0x1000b014)},
	{"CRTDLL.dll", "fflush", -1, _RelativeAddress(public_1000b018, 0x1000b018)},
	{"CRTDLL.dll", "fseek", -1, _RelativeAddress(public_1000b01c, 0x1000b01c)},
	{"CRTDLL.dll", "rewind", -1, _RelativeAddress(public_1000b020, 0x1000b020)},
	{"CRTDLL.dll", "fputc", -1, _RelativeAddress(public_1000b024, 0x1000b024)},
	{"CRTDLL.dll", "malloc", -1, _RelativeAddress(public_1000b028, 0x1000b028)},
	{"CRTDLL.dll", "ftell", -1, _RelativeAddress(public_1000b02c, 0x1000b02c)},
	{"CRTDLL.dll", "fprintf", -1, _RelativeAddress(public_1000b030, 0x1000b030)},
	{"CRTDLL.dll", "_fdopen", -1, _RelativeAddress(public_1000b034, 0x1000b034)},
	{"CRTDLL.dll", "fopen", -1, _RelativeAddress(public_1000b038, 0x1000b038)},
	{"CRTDLL.dll", "sprintf", -1, _RelativeAddress(public_1000b03c, 0x1000b03c)},
	{"CRTDLL.dll", "calloc", -1, _RelativeAddress(public_1000b040, 0x1000b040)},
	{"CRTDLL.dll", "_initterm", -1, _RelativeAddress(public_1000b044, 0x1000b044)},
	{"KERNEL32.dll", "GlobalAlloc", -1, _RelativeAddress(public_1000b04c, 0x1000b04c)},
	{"KERNEL32.dll", "GetVersion", -1, _RelativeAddress(public_1000b050, 0x1000b050)},
	{"KERNEL32.dll", "GlobalFree", -1, _RelativeAddress(public_1000b054, 0x1000b054)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

