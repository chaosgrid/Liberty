#include "FLMaterials-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6701000, 0x6701000)},
	{"DACOM.dll", "?GetCRC32@DACOM_CRC@@YAKPBD@Z", -1, _RelativeAddress(public_6701004, 0x6701004)},
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6701008, 0x6701008)},
	{"MSVCRT.dll", "_ftol", -1, _RelativeAddress(public_6701024, 0x6701024)},
	{"MSVCRT.dll", "_CIfmod", -1, _RelativeAddress(public_6701028, 0x6701028)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_670102c, 0x670102c)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_6701030, 0x6701030)},
	{"MSVCRT.dll", "strncpy", -1, _RelativeAddress(public_6701034, 0x6701034)},
	{"MSVCRT.dll", "__dllonexit", -1, _RelativeAddress(public_6701038, 0x6701038)},
	{"MSVCRT.dll", "_onexit", -1, _RelativeAddress(public_670103c, 0x670103c)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6701040, 0x6701040)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6701044, 0x6701044)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6701048, 0x6701048)},
	{"MSVCRT.dll", "__CxxFrameHandler", -1, _RelativeAddress(public_670104c, 0x670104c)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6701050, 0x6701050)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6701054, 0x6701054)},
	{"MSVCRT.dll", "_except_handler3", -1, _RelativeAddress(public_6701058, 0x6701058)},
	{"MSVCRT.dll", "?terminate@@YAXXZ", -1, _RelativeAddress(public_670105c, 0x670105c)},
	{"MSVCRT.dll", "_strlwr", -1, _RelativeAddress(public_6701060, 0x6701060)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_6701010, 0x6701010)},
	{"KERNEL32.dll", "HeapFree", -1, _RelativeAddress(public_6701014, 0x6701014)},
	{"KERNEL32.dll", "GetProcessHeap", -1, _RelativeAddress(public_6701018, 0x6701018)},
	{"KERNEL32.dll", "HeapAlloc", -1, _RelativeAddress(public_670101c, 0x670101c)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

