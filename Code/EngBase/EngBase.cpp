#include "EngBase-PCH.h"

extern "C" __declspec(dllexport) void Liberty() {}

typedef BOOL(APIENTRY* PDllEntryPoint)(HINSTANCE hModule, DWORD fdwReason, LPVOID lpReserved);
BOOL APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID lpReserved)
{
	PDllEntryPoint DllEntryPoint = (PDllEntryPoint)EngBase_entry_point;

	BOOL result = TRUE;
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
		// A new process is started or a new thread is created in the current process.
		// Perform initialization here.
		__ExecuteDLLImports();
		result = DllEntryPoint(hModule, fdwReason, lpReserved);
	}
	break;
	case DLL_THREAD_ATTACH:
	{
		// A new thread is created in the current process.
		// Perform initialization here.
		result = DllEntryPoint(hModule, fdwReason, lpReserved);
	}
	break;
	case DLL_THREAD_DETACH:
	{
		// A thread exits normally.
		// Perform cleanup here.
		result = DllEntryPoint(hModule, fdwReason, lpReserved);
	}
	break;
	case DLL_PROCESS_DETACH:
	{
		// The DLL is being unloaded from a process due to process termination or FreeLibrary.
		// Perform cleanup here.
		result = DllEntryPoint(hModule, fdwReason, lpReserved);
	}
	break;
	}
	return result;
}
