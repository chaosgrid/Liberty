#include "FLServer-PCH.h"

extern "C" __declspec(dllexport) void Liberty() {}

typedef int(APIENTRY* PWinMainCRTStartup)(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	__ExecuteDLLImports();
	PWinMainCRTStartup WinMainEntryPoint = (PWinMainCRTStartup)FLServer_entry_point;
	int Result = WinMainEntryPoint(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
	return Result;
}

extern "C" HINSTANCE __ImageBase;
int main()
{
	HINSTANCE hInstance = __ImageBase;
	HINSTANCE hPrevInstance = NULL;
	LPSTR lpCmdLine = GetCommandLineA();
	int nShowCmd = SW_SHOW;
	int Result = WinMain(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
	return Result;
}
