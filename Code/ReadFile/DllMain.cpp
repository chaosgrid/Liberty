#include <Windows.h>

#include <DACOM.h>
#include "FileSys.h"
#include "DOSFileSystem.h"
#include "BaseUTF.h"
#include "UTF.h"
#include "MemFile.h"
#include "SearchPath.h"

extern "C" __declspec(dllexport) void Liberty() {}

ICOManager* DACOM;

BOOL WINAPI DllMain(HINSTANCE hinstDLL,
	DWORD fdwReason,
	LPVOID lpvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
		hInstance = hinstDLL;

#ifdef UTF_FILESYSTEM
		startupUTF(); // create a critical section
#endif

#if ENABLE_DOS_THREADING
		if (StartUpFileSystem() == 0)
			return 0;
#endif

		pFirstSystem = new DAComponent<DOSFileSystem>;
		if ((pFirstSystem != NULL) && (DACOM = DACOM_Acquire()) != NULL)
		{
			DACOM->RegisterComponent(pFirstSystem, FILESYSTEM_IMPLEMENTATION_NAME, DACOM_LOW_PRIORITY);
			pFirstSystem->Release();
		}
		if (DACOM)
		{
#ifdef UTF_FILESYSTEM
			Register_BaseUTF();
#endif

#ifdef MEM_FILE_FILESYSTEM
			Register_MemFile();
#endif

#ifdef SEARCH_PATH_FILESYSTEM
			Register_SearchPath();
#endif
		}
	}
	break;

	case DLL_PROCESS_DETACH:
		if (DACOM != NULL)
		{
#ifdef UTF_FILESYSTEM
			shutdownUTF(); // delete the critical section
#endif
			DACOM->Release();
		}
		break;
	}

	return TRUE;
}
