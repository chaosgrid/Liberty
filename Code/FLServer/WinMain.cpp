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
	SetProcessDPIAware();
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

extern "C"
{
	// .data:004255F4 0000000B C FLServer -
	char data_4255F4[] = "LibertyServer -";
	// .data:0042546C 0000000D C FLServer.cfg
	char data_42546C[] = "LibertyServer.cfg";
	// .rdata:0042423A 0000000D C FLServer.exe
	char data_42423A[] = "LibertyServer.exe";
	// .data:004259AC 00000015 C FLServerBWLog-%u.txt
	char data_4259AC[] = "LibertyServerBWLog-%u.txt";

	// .data:004256E4 0000002C C FreeLancer failed to attach to EBUEula.dll.
	char data_4256E4[] = "Liberty failed to attach to EBUEula.dll.";
	// .data:004256AC 0000002F C FreeLancer failed to find EBUEula entry point.
	char data_4256AC[] = "Liberty failed to find EBUEula entry point.";
	// .data:00425790 0000000B C Freelancer
	char data_425790[] = "Liberty";
	// .data:00425600 00000024 C (16 bits) - UTF-16LE Freelancer-Server
	wchar_t data_425600[] = L"Liberty-Server";
	// .data:00425594 00000014 C FreelancerCoopMutex
	char data_425594[] = "LibertyCoopMutex";
	// .data:004254D8 00000048 C HKLM\\Software\\Microsoft\\Microsoft Games\\Freelancer\\1.0\\DigitalProductID
	char data_4254D8[] = "HKLM\\Software\\Microsoft\\Microsoft Games\\Freelancer\\Liberty\\DigitalProductID";
	// .rdata:0041CB0C 00000032 C Software\\Microsoft\\Microsoft Games\\Freelancer\\1.0
	char data_41CB0C[] = "Software\\Microsoft\\Microsoft Games\\Freelancer\\Liberty";
	// .data:00425678 00000032 C Software\\Microsoft\\Microsoft Games\\Freelancer\\1.0
	char data_425678[] = "Software\\Microsoft\\Microsoft Games\\Freelancer\\Liberty";
	// .data:00425410 0000000F C freelancer.ini
	char data_425410[] = "Liberty.ini";
}
