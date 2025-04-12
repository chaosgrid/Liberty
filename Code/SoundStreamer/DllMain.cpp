#include "SoundStreamer.h"

#include <PCH.h>
#include <Windows.h>

extern "C" __declspec(dllexport) void Liberty() {}

_naked BOOL __stdcall EntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	__DEBUG_ASM(6EF505E);
	// chunk 0x6EF505E _sub_6EF505E
	asm("loc_6EF505E: push %ebp;");
	asm("loc_6EF505F: mov %esp,%ebp;");
	asm("loc_6EF5061: push %ebx;");
	asm("loc_6EF5062: mov 8(%ebp),%ebx;");
	asm("loc_6EF5065: push %esi;");
	asm("loc_6EF5066: mov 0xC(%ebp),%esi;");
	asm("loc_6EF5069: push %edi;");
	asm("loc_6EF506A: mov 0x10(%ebp),%edi;");
	asm("loc_6EF506D: test %esi,%esi;");
	asm("loc_6EF506F: jne loc_6EF507A;");
	asm("loc_6EF5071: cmpl $0,_data_6F010B0;");
	asm("loc_6EF5078: jmp loc_6EF50A0;");
	asm("loc_6EF507A: cmp $1,%esi;");
	asm("loc_6EF507D: je loc_6EF5084;");
	asm("loc_6EF507F: cmp $2,%esi;");
	asm("loc_6EF5082: jne loc_6EF50A6;");
	asm("loc_6EF5084: mov _data_6F0267C,%eax;");
	asm("loc_6EF5089: test %eax,%eax;");
	asm("loc_6EF508B: je loc_6EF5096;");
	asm("loc_6EF508D: push %edi;");
	asm("loc_6EF508E: push %esi;");
	asm("loc_6EF508F: push %ebx;");
	asm("loc_6EF5090: call *%eax;");
	asm("loc_6EF5092: test %eax,%eax;");
	asm("loc_6EF5094: je loc_6EF50A2;");
	asm("loc_6EF5096: push %edi;");
	asm("loc_6EF5097: push %esi;");
	asm("loc_6EF5098: push %ebx;");
	asm("loc_6EF5099: call _sub_6EF4FA6;");
	asm("loc_6EF509E: test %eax,%eax;");
	asm("loc_6EF50A0: jne loc_6EF50A6;");
	asm("loc_6EF50A2: xor %eax,%eax;");
	asm("loc_6EF50A4: jmp loc_6EF50F4;");

	// Nuke the call to DLL main, it has been replaced
	//asm("loc_6EF50A6: push %edi;");
	//asm("loc_6EF50A7: push %esi;");
	//asm("loc_6EF50A8: push %ebx;");
	//asm("loc_6EF50A9: call _sub_6EF3890;");
	asm("loc_6EF50A6: nop;");
	asm("loc_6EF50A7: nop;");
	asm("loc_6EF50A8: nop;");
	asm("loc_6EF50A9: nop;");

	asm("loc_6EF50AE: cmp $1,%esi;");
	asm("loc_6EF50B1: mov %eax,0xC(%ebp);");
	asm("loc_6EF50B4: jne loc_6EF50C2;");
	asm("loc_6EF50B6: test %eax,%eax;");
	asm("loc_6EF50B8: jne loc_6EF50F1;");
	asm("loc_6EF50BA: push %edi;");
	asm("loc_6EF50BB: push %eax;");
	asm("loc_6EF50BC: push %ebx;");
	asm("loc_6EF50BD: call _sub_6EF4FA6;");
	asm("loc_6EF50C2: test %esi,%esi;");
	asm("loc_6EF50C4: je loc_6EF50CB;");
	asm("loc_6EF50C6: cmp $3,%esi;");
	asm("loc_6EF50C9: jne loc_6EF50F1;");
	asm("loc_6EF50CB: push %edi;");
	asm("loc_6EF50CC: push %esi;");
	asm("loc_6EF50CD: push %ebx;");
	asm("loc_6EF50CE: call _sub_6EF4FA6;");
	asm("loc_6EF50D3: test %eax,%eax;");
	asm("loc_6EF50D5: jne loc_6EF50DA;");
	asm("loc_6EF50D7: and %eax,0xC(%ebp);");
	asm("loc_6EF50DA: cmpl $0,0xC(%ebp);");
	asm("loc_6EF50DE: je loc_6EF50F1;");
	asm("loc_6EF50E0: mov _data_6F0267C,%eax;");
	asm("loc_6EF50E5: test %eax,%eax;");
	asm("loc_6EF50E7: je loc_6EF50F1;");
	asm("loc_6EF50E9: push %edi;");
	asm("loc_6EF50EA: push %esi;");
	asm("loc_6EF50EB: push %ebx;");
	asm("loc_6EF50EC: call *%eax;");
	asm("loc_6EF50EE: mov %eax,0xC(%ebp);");
	asm("loc_6EF50F1: mov 0xC(%ebp),%eax;");
	asm("loc_6EF50F4: pop %edi;");
	asm("loc_6EF50F5: pop %esi;");
	asm("loc_6EF50F6: pop %ebx;");
	asm("loc_6EF50F7: pop %ebp;");
	asm("loc_6EF50F8: ret $0xC;");
	asm("int3;"); // unreachable
}

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	EntryPoint(hinstDLL, fdwReason, lpvReserved); // global initialization only

	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
		Register_SoundStreamer();
	}
	break;
	case DLL_PROCESS_DETACH:
	{
		Shutdown_SoundStreamer();
	}
	}
	return TRUE;
}
