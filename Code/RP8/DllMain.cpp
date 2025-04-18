#include <Windows.h>
#include <PCH.h>
#include "RenderPipeline.h"

extern "C" __declspec(dllexport) void Liberty() {}

_extern _naked void sub_6D158DA() // _DllMain@12
{
    __DEBUG_ASM(6D158DA);
    // chunk 0x6D158DA _sub_6D158DA
	/* nuked all of DLL Main */
    asm("loc_6D159A3: ret $0xC;");
    asm("int3;"); // unreachable
}

_naked BOOL __stdcall EntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	asm("movl ___entry_ptr, %eax");
	asm("jmp *%eax");
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	BOOL Result = EntryPoint(hinstDLL, fdwReason, lpvReserved); // CRT Initialization

	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		Register_RenderPipeline();
	}

	return Result;
}
