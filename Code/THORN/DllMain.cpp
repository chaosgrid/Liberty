#include <Windows.h>
#include <PCH.h>

#include "ParamCurve.h"
#include "SplinePath.h"

extern "C" __declspec(dllexport) void Liberty() {}

_extern void sub_6F30620() {} // nuke old Register_ParamCurveComponents
_extern void sub_6F35C00() {} // nuke old Register_SplinePathComponents

_naked BOOL __stdcall EntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	asm("movl ___entry_ptr, %eax");
	asm("jmp *%eax");
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	BOOL Result = EntryPoint(hinstDLL, fdwReason, lpvReserved);
	Register_ParamCurveComponents();
	Register_SplinePathComponents();
	return Result;
}
