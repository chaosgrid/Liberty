#include "Deformable2-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"MSVCRT.dll", "strncpy", -1, _RelativeAddress(public_6601028, 0x6601028)},
	{"MSVCRT.dll", "strrchr", -1, _RelativeAddress(public_660102c, 0x660102c)},
	{"MSVCRT.dll", "_CIacos", -1, _RelativeAddress(public_6601030, 0x6601030)},
	{"MSVCRT.dll", "_snprintf", -1, _RelativeAddress(public_6601034, 0x6601034)},
	{"MSVCRT.dll", "rand", -1, _RelativeAddress(public_6601038, 0x6601038)},
	{"MSVCRT.dll", "strspn", -1, _RelativeAddress(public_660103c, 0x660103c)},
	{"MSVCRT.dll", "calloc", -1, _RelativeAddress(public_6601040, 0x6601040)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_6601044, 0x6601044)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6601048, 0x6601048)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_660104c, 0x660104c)},
	{"MSVCRT.dll", "strchr", -1, _RelativeAddress(public_6601050, 0x6601050)},
	{"MSVCRT.dll", "atoi", -1, _RelativeAddress(public_6601054, 0x6601054)},
	{"MSVCRT.dll", "strtoul", -1, _RelativeAddress(public_6601058, 0x6601058)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_660105c, 0x660105c)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6601060, 0x6601060)},
	{"MSVCRT.dll", "??3@YAXPAX@Z", -1, _RelativeAddress(public_6601064, 0x6601064)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6601068, 0x6601068)},
	{"MSVCRT.dll", "__dllonexit", -1, _RelativeAddress(public_660106c, 0x660106c)},
	{"MSVCRT.dll", "_onexit", -1, _RelativeAddress(public_6601070, 0x6601070)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6601074, 0x6601074)},
	{"MSVCRT.dll", "_strlwr", -1, _RelativeAddress(public_6601078, 0x6601078)},
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6601000, 0x6601000)},
	{"DACOM.dll", "stricmp", -1, _RelativeAddress(public_6601004, 0x6601004)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6601008, 0x6601008)},
	{"DACOM.dll", "?GetCRC32@DACOM_CRC@@YAKPBD@Z", -1, _RelativeAddress(public_660100c, 0x660100c)},
	{"KERNEL32.dll", "HeapAlloc", -1, _RelativeAddress(public_6601014, 0x6601014)},
	{"KERNEL32.dll", "HeapFree", -1, _RelativeAddress(public_6601018, 0x6601018)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_660101c, 0x660101c)},
	{"KERNEL32.dll", "GetProcessHeap", -1, _RelativeAddress(public_6601020, 0x6601020)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

