#include "SoundManager-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "stricmp", -1, _RelativeAddress(public_6ee9000, 0x6ee9000)},
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6ee9004, 0x6ee9004)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6ee9008, 0x6ee9008)},
	{"MSACM32.dll", "acmDriverDetailsA", -1, _RelativeAddress(public_6ee9044, 0x6ee9044)},
	{"MSACM32.dll", "acmDriverOpen", -1, _RelativeAddress(public_6ee9048, 0x6ee9048)},
	{"MSACM32.dll", "acmDriverEnum", -1, _RelativeAddress(public_6ee904c, 0x6ee904c)},
	{"MSACM32.dll", "acmFormatSuggest", -1, _RelativeAddress(public_6ee9050, 0x6ee9050)},
	{"MSACM32.dll", "acmStreamOpen", -1, _RelativeAddress(public_6ee9054, 0x6ee9054)},
	{"MSACM32.dll", "acmStreamSize", -1, _RelativeAddress(public_6ee9058, 0x6ee9058)},
	{"MSACM32.dll", "acmStreamPrepareHeader", -1, _RelativeAddress(public_6ee905c, 0x6ee905c)},
	{"MSACM32.dll", "acmStreamUnprepareHeader", -1, _RelativeAddress(public_6ee9060, 0x6ee9060)},
	{"MSACM32.dll", "acmStreamConvert", -1, _RelativeAddress(public_6ee9064, 0x6ee9064)},
	{"MSACM32.dll", "acmStreamClose", -1, _RelativeAddress(public_6ee9068, 0x6ee9068)},
	{"KERNEL32.dll", "ResetEvent", -1, _RelativeAddress(public_6ee9010, 0x6ee9010)},
	{"KERNEL32.dll", "WaitForMultipleObjects", -1, _RelativeAddress(public_6ee9014, 0x6ee9014)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_6ee9018, 0x6ee9018)},
	{"KERNEL32.dll", "GetTickCount", -1, _RelativeAddress(public_6ee901c, 0x6ee901c)},
	{"KERNEL32.dll", "SetEvent", -1, _RelativeAddress(public_6ee9020, 0x6ee9020)},
	{"KERNEL32.dll", "DeleteCriticalSection", -1, _RelativeAddress(public_6ee9024, 0x6ee9024)},
	{"KERNEL32.dll", "InitializeCriticalSection", -1, _RelativeAddress(public_6ee9028, 0x6ee9028)},
	{"KERNEL32.dll", "CreateThread", -1, _RelativeAddress(public_6ee902c, 0x6ee902c)},
	{"KERNEL32.dll", "EnterCriticalSection", -1, _RelativeAddress(public_6ee9030, 0x6ee9030)},
	{"KERNEL32.dll", "CloseHandle", -1, _RelativeAddress(public_6ee9034, 0x6ee9034)},
	{"KERNEL32.dll", "LeaveCriticalSection", -1, _RelativeAddress(public_6ee9038, 0x6ee9038)},
	{"KERNEL32.dll", "CreateEventA", -1, _RelativeAddress(public_6ee903c, 0x6ee903c)},
	{"ole32.dll", "CoUninitialize", -1, _RelativeAddress(public_6ee90c8, 0x6ee90c8)},
	{"ole32.dll", "CoCreateInstance", -1, _RelativeAddress(public_6ee90cc, 0x6ee90cc)},
	{"ole32.dll", "CoInitialize", -1, _RelativeAddress(public_6ee90d0, 0x6ee90d0)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6ee9070, 0x6ee9070)},
	{"MSVCRT.dll", "atoi", -1, _RelativeAddress(public_6ee9074, 0x6ee9074)},
	{"MSVCRT.dll", "strchr", -1, _RelativeAddress(public_6ee9078, 0x6ee9078)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_6ee907c, 0x6ee907c)},
	{"MSVCRT.dll", "_ftol", -1, _RelativeAddress(public_6ee9080, 0x6ee9080)},
	{"MSVCRT.dll", "_CIpow", -1, _RelativeAddress(public_6ee9084, 0x6ee9084)},
	{"MSVCRT.dll", "??3@YAXPAX@Z", -1, _RelativeAddress(public_6ee9088, 0x6ee9088)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6ee908c, 0x6ee908c)},
	{"MSVCRT.dll", "sprintf", -1, _RelativeAddress(public_6ee9090, 0x6ee9090)},
	{"MSVCRT.dll", "strncpy", -1, _RelativeAddress(public_6ee9094, 0x6ee9094)},
	{"MSVCRT.dll", "atof", -1, _RelativeAddress(public_6ee9098, 0x6ee9098)},
	{"MSVCRT.dll", "strtoul", -1, _RelativeAddress(public_6ee909c, 0x6ee909c)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6ee90a0, 0x6ee90a0)},
	{"MSVCRT.dll", "calloc", -1, _RelativeAddress(public_6ee90a4, 0x6ee90a4)},
	{"MSVCRT.dll", "strspn", -1, _RelativeAddress(public_6ee90a8, 0x6ee90a8)},
	{"MSVCRT.dll", "_vsnprintf", -1, _RelativeAddress(public_6ee90ac, 0x6ee90ac)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6ee90b0, 0x6ee90b0)},
	{"MSVCRT.dll", "_onexit", -1, _RelativeAddress(public_6ee90b4, 0x6ee90b4)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6ee90b8, 0x6ee90b8)},
	{"MSVCRT.dll", "__CxxFrameHandler", -1, _RelativeAddress(public_6ee90bc, 0x6ee90bc)},
	{"MSVCRT.dll", "__dllonexit", -1, _RelativeAddress(public_6ee90c0, 0x6ee90c0)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

