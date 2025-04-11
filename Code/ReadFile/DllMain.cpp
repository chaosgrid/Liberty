#include <Windows.h>
#include <PCH.h>

#include <DACOM/dacom.h>
#include "Filesys.h"
#include "DOSFileSystem.h"

extern "C" __declspec(dllexport) void Liberty() {}

_naked BOOL __stdcall EntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	asm("movl ___entry_ptr, %eax");
	asm("jmp *%eax");
}

_extern_c _naked void sub_6B76220() // _DllMain@12
{
	__DEBUG_ASM(6B76220);
	// chunk 0x6B76220 _sub_6B76220
	asm("loc_6B76220: mov 8(%esp),%eax;");
	asm("loc_6B76224: push %ebx;");
	asm("loc_6B76225: xor %ebx,%ebx;");
	asm("loc_6B76227: push %esi;");
	asm("loc_6B76228: sub %ebx,%eax;");
	asm("loc_6B7622A: je loc_6B763E9;");
	asm("loc_6B76230: dec %eax;");
	asm("loc_6B76231: jne loc_6B76401;");
	asm("loc_6B76237: mov 0xC(%esp),%eax;");
	asm("loc_6B7623B: push %eax;");
	asm("loc_6B7623C: mov %eax,_data_6B7A228;");
	asm("loc_6B76241: calll *_import_6B79058;");
	asm("loc_6B76247: call _sub_6B73E00;");
	asm("loc_6B7624C: push $1;");
	asm("loc_6B7624E: push $0x170;");
	asm("loc_6B76253: calll *_import_6B7906C;");
	asm("loc_6B76259: mov %eax,%esi;");
	asm("loc_6B7625B: add $8,%esp;");
	asm("loc_6B7625E: cmp %ebx,%esi;");
	asm("loc_6B76260: je loc_6B763DE;");
	asm("loc_6B76266: mov 0x10(%esp),%al;");
	asm("loc_6B7626A: mov 0x10(%esp),%cl;");
	asm("loc_6B7626E: push %edi;");
	asm("loc_6B7626F: lea 0x134(%esi),%edi;");
	asm("loc_6B76275: push %ebx;");
	asm("loc_6B76276: mov %ebx,0x120(%esi);");
	asm("loc_6B7627C: push $0x28;");
	asm("loc_6B7627E: mov %al,(%edi);");
	asm("loc_6B76280: mov %cl,1(%edi);");
	asm("loc_6B76283: mov %bl,0xC(%edi);");
	asm("loc_6B76286: call _sub_6B771C0;");
	asm("loc_6B7628B: mov %ebx,4(%eax);");
	asm("loc_6B7628E: movb $1,0x24(%eax);");
	asm("loc_6B76292: mov %bl,0x25(%eax);");
	asm("loc_6B76295: mov %eax,8(%edi);");
	asm("loc_6B76298: movb $1,0x25(%eax);");
	asm("loc_6B7629C: mov 8(%edi),%edx;");
	asm("loc_6B7629F: add $8,%esp;");
	asm("loc_6B762A2: mov %ebx,(%edx);");
	asm("loc_6B762A4: mov 8(%edi),%eax;");
	asm("loc_6B762A7: push %ebx;");
	asm("loc_6B762A8: mov %ebx,8(%eax);");
	asm("loc_6B762AB: mov 8(%edi),%ecx;");
	asm("loc_6B762AE: push %ecx;");
	asm("loc_6B762AF: mov %edi,%ecx;");
	asm("loc_6B762B1: call _sub_6B77020;");
	asm("loc_6B762B6: mov %eax,4(%edi);");
	asm("loc_6B762B9: mov %eax,(%eax);");
	asm("loc_6B762BB: mov 4(%edi),%eax;");
	asm("loc_6B762BE: mov 0x14(%esp),%dl;");
	asm("loc_6B762C2: push $0xC;");
	asm("loc_6B762C4: mov %eax,8(%eax);");
	asm("loc_6B762C7: mov %ebx,0x10(%edi);");
	asm("loc_6B762CA: mov %dl,0x148(%esi);");
	asm("loc_6B762D0: call _sub_6B782AC;");
	asm("loc_6B762D5: mov %eax,(%eax);");
	asm("loc_6B762D7: mov %eax,4(%eax);");
	asm("loc_6B762DA: add $4,%esp;");
	asm("loc_6B762DD: mov %eax,0x14C(%esi);");
	asm("loc_6B762E3: lea 0x154(%esi),%eax;");
	asm("loc_6B762E9: mov %ebx,0x150(%esi);");
	asm("loc_6B762EF: push %eax;");
	asm("loc_6B762F0: movb $0x5C,0xD(%esi);");
	asm("loc_6B762F4: mov %bl,0xE(%esi);");
	asm("loc_6B762F7: movl $0xFFFFFFFF,0x130(%esi);");
	asm("loc_6B76301: calll *_import_6B79040;");
	asm("loc_6B76307: movl $_off_6B79218,(%esi);");
	asm("loc_6B7630D: movl $1,0x16C(%esi);");
	asm("loc_6B76317: pop %edi;");
	asm("loc_6B76318: mov %esi,_data_6B7A224;");
	asm("loc_6B7631E: calll *_import_6B79004;");
	asm("loc_6B76324: cmp %ebx,%eax;");
	asm("loc_6B76326: mov %eax,_data_6B7A220;");
	asm("loc_6B7632B: je loc_6B76401;");

	// pDACOM->RegisterComponent(pDACOM, pFileSystem, "FileSystem", 0x40000000);
	/*asm("loc_6B76331: mov _data_6B7A224,%edx;");
	asm("loc_6B76337: mov (%eax),%ecx;");
	asm("loc_6B76339: push $0x40000000;");
	asm("loc_6B7633E: push $_data_6B7A028;");
	asm("loc_6B76343: push %edx;");
	asm("loc_6B76344: push %eax;");
	asm("loc_6B76345: calll *0x10(%ecx);");*/

	// pFileSystem->Release(pFileSystem);
	/*asm("loc_6B76348: mov _data_6B7A224,%eax;");
	asm("loc_6B7634D: push %eax;");
	asm("loc_6B7634E: mov (%eax),%ecx;");
	asm("loc_6B76350: calll *8(%ecx);");*/
	asm("loc_6B76353: cmp %ebx,_data_6B7A220;");
	asm("loc_6B76359: je loc_6B76401;");
	asm("loc_6B7635F: call _sub_6B73D60;");
	asm("loc_6B76364: mov %eax,%esi;");
	asm("loc_6B76366: cmp %ebx,%esi;");
	asm("loc_6B76368: je loc_6B76386;");
	asm("loc_6B7636A: mov _data_6B7A220,%eax;");
	asm("loc_6B7636F: push $0x80000000;");
	asm("loc_6B76374: push $_data_6B7A028;");
	asm("loc_6B76379: push %esi;");
	asm("loc_6B7637A: mov (%eax),%edx;");
	asm("loc_6B7637C: push %eax;");
	asm("loc_6B7637D: calll *0x10(%edx);");
	asm("loc_6B76380: mov (%esi),%eax;");
	asm("loc_6B76382: push %esi;");
	asm("loc_6B76383: calll *8(%eax);");
	asm("loc_6B76386: call _sub_6B77900;");
	asm("loc_6B7638B: mov %eax,%esi;");
	asm("loc_6B7638D: cmp %ebx,%esi;");
	asm("loc_6B7638F: je loc_6B763AD;");
	asm("loc_6B76391: mov _data_6B7A220,%eax;");
	asm("loc_6B76396: push $0x80000000;");
	asm("loc_6B7639B: push $_data_6B7A028;");
	asm("loc_6B763A0: push %esi;");
	asm("loc_6B763A1: mov (%eax),%ecx;");
	asm("loc_6B763A3: push %eax;");
	asm("loc_6B763A4: calll *0x10(%ecx);");
	asm("loc_6B763A7: mov (%esi),%edx;");
	asm("loc_6B763A9: push %esi;");
	asm("loc_6B763AA: calll *8(%edx);");
	asm("loc_6B763AD: call _sub_6B78020;");
	asm("loc_6B763B2: mov %eax,%esi;");
	asm("loc_6B763B4: cmp %ebx,%esi;");
	asm("loc_6B763B6: je loc_6B76401;");
	asm("loc_6B763B8: mov _data_6B7A220,%eax;");
	asm("loc_6B763BD: push $0x80000000;");
	asm("loc_6B763C2: push $_data_6B7A1E4;");
	asm("loc_6B763C7: push %esi;");
	asm("loc_6B763C8: mov (%eax),%ecx;");
	asm("loc_6B763CA: push %eax;");
	asm("loc_6B763CB: calll *0x10(%ecx);");
	asm("loc_6B763CE: mov (%esi),%edx;");
	asm("loc_6B763D0: push %esi;");
	asm("loc_6B763D1: calll *8(%edx);");
	asm("loc_6B763D4: pop %esi;");
	asm("loc_6B763D5: mov $1,%eax;");
	asm("loc_6B763DA: pop %ebx;");
	asm("loc_6B763DB: ret $0xC;");
	asm("loc_6B763DE: mov %ebx,_data_6B7A224;");
	asm("loc_6B763E4: jmp loc_6B76353;");
	asm("loc_6B763E9: cmp %ebx,_data_6B7A220;");
	asm("loc_6B763EF: je loc_6B76401;");
	asm("loc_6B763F1: call _sub_6B73E00;");
	asm("loc_6B763F6: mov _data_6B7A220,%eax;");
	asm("loc_6B763FB: push %eax;");
	asm("loc_6B763FC: mov (%eax),%ecx;");
	asm("loc_6B763FE: calll *8(%ecx);");
	asm("loc_6B76401: pop %esi;");
	asm("loc_6B76402: mov $1,%eax;");
	asm("loc_6B76407: pop %ebx;");
	asm("loc_6B76408: ret $0xC;");
	asm("int3;"); // unreachable
}

extern void shutdownUTF(void);
extern void startupUTF(void);

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	BOOL Result = EntryPoint(hinstDLL, fdwReason, lpvReserved);
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		startupUTF();		// create a critical section
		Register_DOSFileSystem();
	}

	return Result;
}
//
////--------------------------------------------------------------------------
////  
//#ifdef IFF_FILESYSTEM
//LPFILESYSTEM CreateAnIFF(void);
//#endif
//LPFILESYSTEM CreateBaseUTF(void);
//extern IComponentFactory* CreateMemFileFactory(void);
//extern IComponentFactory* CreateSearchPathFactory(void);
//void shutdownUTF(void);
//void startupUTF(void);
//
////
//
//extern "C" void __cdecl _heap_init(void);
//
////--------------------------------------------------------------------------
//
//BOOL WINAPI DllMain(HINSTANCE hinstDLL,
//	DWORD     fdwReason,
//	LPVOID    lpvReserved)
//{
//	switch (fdwReason)
//	{
//	case DLL_PROCESS_ATTACH:
//	{
//		hInstance = hinstDLL;
//
//#if !defined(DA_MULTI_THREADED)
//		// have to call this to startup the da heap because the
//		// module entry point is non standard in the non-multithreaded
//		// builds.
//		//
//		_heap_init();
//#endif
//
//		DA_HEAP_DEFINE_HEAP_MESSAGE(hinstDLL);
//
//		startupUTF();		// create a critical section
//		if (StartUpFileSystem() == 0)
//			return 0;
//		pFirstSystem = new DAComponent<DOSFileSystem>;
//		if ((pFirstSystem != NULL) && (DACOM = DACOM_Acquire()) != NULL)
//		{
//			DACOM->RegisterComponent(pFirstSystem, interface_name, DACOM_LOW_PRIORITY);
//			pFirstSystem->Release();
//		}
//		if (DACOM)
//		{
//			IComponentFactory* lpSystem = CreateBaseUTF();
//
//			if (lpSystem)
//			{
//				DACOM->RegisterComponent(lpSystem, interface_name);
//				lpSystem->Release();
//			}
//
//			lpSystem = CreateMemFileFactory();
//			if (lpSystem)
//			{
//				DACOM->RegisterComponent(lpSystem, interface_name, DACOM_NORMAL_PRIORITY + 1);
//				lpSystem->Release();
//			}
//
//			lpSystem = CreateSearchPathFactory();
//			if (lpSystem)
//			{
//				DACOM->RegisterComponent(lpSystem, "ISearchPath", DACOM_NORMAL_PRIORITY + 1);
//				lpSystem->Release();
//			}
//
//#ifdef IFF_FILESYSTEM
//			lpSystem = CreateAnIFF();
//
//			if (lpSystem)
//			{
//				DACOM->RegisterComponent(lpSystem, interface_name);
//				lpSystem->Release();
//			}
//#endif
//		}
//	}
//	break;
//
//	case DLL_PROCESS_DETACH:
//		if (DACOM != NULL)
//		{
//			shutdownUTF();			// delete the critical section
//			DACOM->Release();
//		}
//		break;
//	}
//
//	return TRUE;
//}
