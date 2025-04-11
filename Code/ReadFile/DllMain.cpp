#include <Windows.h>
#include <PCH.h>

#include <DACOM/dacom.h>
#include "Filesys.h"
#include "DOSFileSystem.h"
#include "BaseUTF.h"
#include "UTF.h"

#ifdef IFF_FILESYSTEM
LPFILESYSTEM CreateAnIFF(void);
#endif

extern "C" __declspec(dllexport) void Liberty() {}

ICOManager* DACOM;

TRAMPOLINE(IFileSystem*, __cdecl, _CreateBaseUTF, _sub_6B73D60, void);
TRAMPOLINE(IFileSystem*, __cdecl, CreateMemFileFactory, _sub_6B77900, void);
TRAMPOLINE(IFileSystem*, __cdecl, CreateSearchPathFactory, _sub_6B78020, void);

BOOL WINAPI DllMain(HINSTANCE hinstDLL,
	DWORD     fdwReason,
	LPVOID    lpvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
		hInstance = hinstDLL;

/*#if !defined(DA_MULTI_THREADED)
		// have to call this to startup the da heap because the
		// module entry point is non standard in the non-multithreaded
		// builds.
		//
		_heap_init();
#endif

		DA_HEAP_DEFINE_HEAP_MESSAGE(hinstDLL);*/

		startupUTF();		// create a critical section
		//if (StartUpFileSystem() == 0)
		//	return 0;
		pFirstSystem = new DAComponent<DOSFileSystem>;
		if ((pFirstSystem != NULL) && (DACOM = DACOM_Acquire()) != NULL)
		{
			DACOM->RegisterComponent(pFirstSystem, FILESYSTEM_INTERFACE_NAME, DACOM_LOW_PRIORITY);
			pFirstSystem->Release();
		}
		if (DACOM)
		{
			IComponentFactory* lpSystem = _CreateBaseUTF();

			if (lpSystem)
			{
				DACOM->RegisterComponent(lpSystem, FILESYSTEM_INTERFACE_NAME);
				lpSystem->Release();
			}

			lpSystem = CreateMemFileFactory();
			if (lpSystem)
			{
				DACOM->RegisterComponent(lpSystem, FILESYSTEM_INTERFACE_NAME, DACOM_NORMAL_PRIORITY + 1);
				lpSystem->Release();
			}

			lpSystem = CreateSearchPathFactory();
			if (lpSystem)
			{
				DACOM->RegisterComponent(lpSystem, "ISearchPath", DACOM_NORMAL_PRIORITY + 1);
				lpSystem->Release();
			}

#ifdef IFF_FILESYSTEM
			lpSystem = CreateAnIFF();

			if (lpSystem)
			{
				DACOM->RegisterComponent(lpSystem, interface_name);
				lpSystem->Release();
			}
#endif
		}
	}
	break;

	case DLL_PROCESS_DETACH:
		if (DACOM != NULL)
		{
			shutdownUTF();			// delete the critical section
			DACOM->Release();
		}
		break;
	}

	return TRUE;
}
