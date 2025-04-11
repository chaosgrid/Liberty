#include <Windows.h>
#include <PCH.h>

extern "C" __declspec(dllexport) void Liberty() {}

_naked int __cdecl EntryPoint(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	asm("movl ___entry_ptr, %eax");
	asm("jmp *%eax");
}

static void wipe_stack(int count)
{
	if (count > 1) wipe_stack(count - 1);
}

typedef int(APIENTRY* PWinMainCRTStartup)(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	wipe_stack(1024);
	int Result = EntryPoint(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
	return Result;
}

extern "C" HINSTANCE__ __ImageBase;
int main()
{
	HINSTANCE hInstance = &__ImageBase;
	HINSTANCE hPrevInstance = NULL;
	LPSTR lpCmdLine = GetCommandLineA();
	int nShowCmd = SW_SHOW;
	int Result = WinMain(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
	return Result;
}
