#include "Alchemy-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_624b014, 0x624b014)},
	{"DACOM.dll", "stricmp", -1, _RelativeAddress(public_624b000, 0x624b000)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_624b004, 0x624b004)},
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_624b008, 0x624b008)},
	{"DACOM.dll", "?GetCRC32@DACOM_CRC@@YAKPBD@Z", -1, _RelativeAddress(public_624b00c, 0x624b00c)},
	{"MSVCP60.dll", "?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEX_N@Z", -1, _RelativeAddress(public_624b01c, 0x624b01c)},
	{"MSVCP60.dll", "?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXI@Z", -1, _RelativeAddress(public_624b020, 0x624b020)},
	{"MSVCP60.dll", "?_Xlen@std@@YAXXZ", -1, _RelativeAddress(public_624b024, 0x624b024)},
	{"MSVCP60.dll", "?_C@?1??_Nullstr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CAPBDXZ@4DB", -1, _RelativeAddress(public_624b028, 0x624b028)},
	{"MSVCP60.dll", "??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ", -1, _RelativeAddress(public_624b02c, 0x624b02c)},
	{"MSVCP60.dll", "??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV?$allocator@D@1@@Z", -1, _RelativeAddress(public_624b030, 0x624b030)},
	{"MSVCP60.dll", "?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@PBDI@Z", -1, _RelativeAddress(public_624b034, 0x624b034)},
	{"MSVCP60.dll", "?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@PBDI@Z", -1, _RelativeAddress(public_624b038, 0x624b038)},
	{"MSVCRT.dll", "__CxxFrameHandler", -1, _RelativeAddress(public_624b040, 0x624b040)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_624b044, 0x624b044)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_624b048, 0x624b048)},
	{"MSVCRT.dll", "strtoul", -1, _RelativeAddress(public_624b04c, 0x624b04c)},
	{"MSVCRT.dll", "atoi", -1, _RelativeAddress(public_624b050, 0x624b050)},
	{"MSVCRT.dll", "strchr", -1, _RelativeAddress(public_624b054, 0x624b054)},
	{"MSVCRT.dll", "strspn", -1, _RelativeAddress(public_624b058, 0x624b058)},
	{"MSVCRT.dll", "_ftol", -1, _RelativeAddress(public_624b05c, 0x624b05c)},
	{"MSVCRT.dll", "memmove", -1, _RelativeAddress(public_624b060, 0x624b060)},
	{"MSVCRT.dll", "sprintf", -1, _RelativeAddress(public_624b064, 0x624b064)},
	{"MSVCRT.dll", "strrchr", -1, _RelativeAddress(public_624b068, 0x624b068)},
	{"MSVCRT.dll", "_CIacos", -1, _RelativeAddress(public_624b06c, 0x624b06c)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_624b070, 0x624b070)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_624b074, 0x624b074)},
	{"MSVCRT.dll", "__dllonexit", -1, _RelativeAddress(public_624b078, 0x624b078)},
	{"MSVCRT.dll", "_onexit", -1, _RelativeAddress(public_624b07c, 0x624b07c)},
	{"MSVCRT.dll", "_except_handler3", -1, _RelativeAddress(public_624b080, 0x624b080)},
	{"MSVCRT.dll", "?terminate@@YAXXZ", -1, _RelativeAddress(public_624b084, 0x624b084)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_624b088, 0x624b088)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_624b08c, 0x624b08c)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_624b090, 0x624b090)},
	{"MSVCRT.dll", "_CIfmod", -1, _RelativeAddress(public_624b094, 0x624b094)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

