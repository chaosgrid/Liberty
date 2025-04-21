#include <Windows.h>
#include <PCH.h>
#include <Core.h>

extern "C" __declspec(dllexport) void Liberty() {}

_naked BOOL __stdcall EntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	asm("movl ___entry_ptr, %eax");
	asm("jmp *%eax");
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	BOOL Result = EntryPoint(hinstDLL, fdwReason, lpvReserved);
	return Result;
}

CLANG_DIAGNOSTIC_PUSH();
CLANG_DIAGNOSTIC_IGNORED("-Wunused-const-variable");
extern "C"
{
	// .rdata:063A2684 0000000B C Freelancer 
	char const data_63A2684[] = "Liberty";
	// .rdata:063A269C 00000010 C FreelancerShots 
	char const data_63A269C[] = "LibertyShots";
	// .rdata:063A2FBC 00000032 C Software\\Microsoft\\Microsoft Games\\Freelancer\\1.0 
	char const data_63A2FBC[] = "Software\\Microsoft\\Microsoft Games\\Freelancer\\Liberty";
	// .rdata:063A3C00 00000025 C MicrosoftFreelancerClientCanRunEvent 
	char const data_63A3C00[] = "LibertyClientCanRunEvent";
	// .rdata:063A3C28 00000025 C MicrosoftFreelancerServerCanRunEvent 
	char const data_63A3C28[] = "LibertyServerCanRunEvent";
}
CLANG_DIAGNOSTIC_POP();
