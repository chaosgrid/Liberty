#include "FLServer-PCH.h"

extern "C" __declspec(dllexport) void custom_dacom() {}

typedef int(APIENTRY* PWinMainCRTStartup)(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	__ExecuteDLLImports();
	PWinMainCRTStartup WinMainEntryPoint = (PWinMainCRTStartup)FLServer_entry_point;
	int retcode = WinMainEntryPoint(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
	return retcode;
}
