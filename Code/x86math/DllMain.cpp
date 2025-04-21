#include <3dMath.h>

extern "C" __declspec(dllexport) void Liberty() {}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hinstDLL);
		Register_3DMathEngine();
	}
	return TRUE;
}
