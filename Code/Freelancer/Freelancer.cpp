#include "Freelancer-PCH.h"

extern "C" __declspec(dllexport) void custom_dacom() {}

static void wipe_stack(int count)
{
	if (count > 1) wipe_stack(count - 1);
}

typedef int(APIENTRY* PWinMainCRTStartup)(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	__ExecuteDLLImports();
	PWinMainCRTStartup WinMainEntryPoint = (PWinMainCRTStartup)Freelancer_entry_point;
	wipe_stack(1024);
	int retcode = WinMainEntryPoint(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
	return retcode;
}
