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
	// .rdata:005E266C 00000019 C FRONT_freelancerlogo.tga
	char data_5E266C[] = "FRONT_freelancerlogo.tga";

	// .rdata:005E204C 0000000F C Freelancer.ini
	char data_5E204C[] = "Liberty.ini";
	// .rdata:005D06E8 00000040 C (16 bits) - UTF-16LE Freelancer Encountered an Error
	wchar_t data_5D06E8[] = L"Liberty Encountered an Error";
	// .rdata:005E1F64 00000032 C Software\\Microsoft\\Microsoft Games\\Freelancer\\1.0
	char data_5E1F64[] = "Software\\Microsoft\\Microsoft Games\\Freelancer\\Liberty";
	// .rdata:005E1F98 0000003F C %s(%d) : *** ERROR: Unable to read Freelancer config file (%s)
	char data_5E1F98[] = "%s(%d) : *** ERROR: Unable to read Liberty config file (%s)";
	//// .rdata:005E2038 0000000B C Freelancer
	char data_5E2038[] = "Liberty";  // #TODO Causes a black screen freeze if changed
	// .rdata:005E43E0 00000022 C ; Freelancer - User Key Commands\n
	char data_5E43E0[] = "Liberty - User Key Commands\n";
	// .rdata:005E62E4 00000032 C Software\\Microsoft\\Microsoft Games\\Freelancer\\1.0
	char data_5E62E4[] = "Software\\Microsoft\\Microsoft Games\\Freelancer\\Liberty";
	// .rdata:005E6378 00000048 C HKLM\\Software\\Microsoft\\Microsoft Games\\Freelancer\\1.0\\DigitalProductID
	char data_5E6378[] = "HKLM\\Software\\Microsoft\\Microsoft Games\\Freelancer\\Liberty\\DigitalProductID";
	// .rdata:005E6870 00000084 C (16 bits) - UTF-16LE Freelancer has encountered a fatal error and will now terminate.\n
	wchar_t data_5E6870[] = L"Liberty has encountered a fatal error and will now terminate.\n";
	// .rdata:005E68F4 0000002E C (16 bits) - UTF-16LE Freelancer Fatal Error
	wchar_t data_5E68F4[] = L"Liberty Fatal Error";
	// .rdata:005E6928 0000005C C (16 bits) - UTF-16LE Freelancer has encountered an unknown issue.\n
	wchar_t data_5E6928[] = L"Liberty has encountered an unknown issue.\n";
	// .rdata:005E6984 00000038 C (16 bits) - UTF-16LE Freelancer Critical Warning
	wchar_t data_5E6984[] = L"Liberty Critical Warning";
	// .rdata:005E6CB0 00000038 C ComputeInitialEnvironment() failed - exiting Freelancer
	char data_5E6CB0[] = "ComputeInitialEnvironment() failed - exiting Liberty";
	// .rdata:005E6DA4 00000016 C (16 bits) - UTF-16LE Freelancer
	wchar_t data_5E6DA4[] = L"Liberty";
	// .rdata:005E6DCC 00000011 C FreelancerClient
	char data_5E6DCC[] = "LibertyClient";
	// .rdata:0060D7EA 0000000F C FreeLancer.exe
	char data_60D7EA[] = "Liberty.exe";
}
