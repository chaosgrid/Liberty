#include "EngBase-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6629000, 0x6629000)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6629004, 0x6629004)},
	{"DACOM.dll", "?CompareStringsI@DACOM_CRC@@YAHPBD0@Z", -1, _RelativeAddress(public_6629008, 0x6629008)},
	{"DACOM.dll", "?GetCRC32@DACOM_CRC@@YAKPBD@Z", -1, _RelativeAddress(public_662900c, 0x662900c)},
	{"USER32.dll", "wsprintfA", -1, _RelativeAddress(public_6629078, 0x6629078)},
	{"MSVCP60.dll", "?_C@?1??_Nullstr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CAPBDXZ@4DB", -1, _RelativeAddress(public_662901c, 0x662901c)},
	{"MSVCP60.dll", "?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAE_NI_N@Z", -1, _RelativeAddress(public_6629020, 0x6629020)},
	{"MSVCP60.dll", "?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEX_N@Z", -1, _RelativeAddress(public_6629024, 0x6629024)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_662902c, 0x662902c)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6629030, 0x6629030)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_6629034, 0x6629034)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_6629038, 0x6629038)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_662903c, 0x662903c)},
	{"MSVCRT.dll", "strncmp", -1, _RelativeAddress(public_6629040, 0x6629040)},
	{"MSVCRT.dll", "_ftol", -1, _RelativeAddress(public_6629044, 0x6629044)},
	{"MSVCRT.dll", "floor", -1, _RelativeAddress(public_6629048, 0x6629048)},
	{"MSVCRT.dll", "realloc", -1, _RelativeAddress(public_662904c, 0x662904c)},
	{"MSVCRT.dll", "strchr", -1, _RelativeAddress(public_6629050, 0x6629050)},
	{"MSVCRT.dll", "strtok", -1, _RelativeAddress(public_6629054, 0x6629054)},
	{"MSVCRT.dll", "__dllonexit", -1, _RelativeAddress(public_6629058, 0x6629058)},
	{"MSVCRT.dll", "_onexit", -1, _RelativeAddress(public_662905c, 0x662905c)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6629060, 0x6629060)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6629064, 0x6629064)},
	{"MSVCRT.dll", "calloc", -1, _RelativeAddress(public_6629068, 0x6629068)},
	{"MSVCRT.dll", "_strdup", -1, _RelativeAddress(public_662906c, 0x662906c)},
	{"MSVCRT.dll", "_strlwr", -1, _RelativeAddress(public_6629070, 0x6629070)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_6629014, 0x6629014)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

