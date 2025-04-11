#ifdef SEARCH_PATH_FILESYSTEM

#include "SearchPath.h"
#include "DAPath.h"

extern ICOManager* DACOM;

extern "C"
{
	IComponentFactory* CreateSearchPathFactory(void)
	{
		return new DAComponentFactory<DAComponent<DAPath>, SEARCHPATHDESC>(SEARCH_PATH_INTERFACE_NAME);
	}
	void Register_SearchPath()
	{
		if (IComponentFactory* lpSystem = CreateSearchPathFactory())
		{
			DACOM->RegisterComponent(lpSystem, SEARCH_PATH_INTERFACE_NAME, DACOM_NORMAL_PRIORITY + 1);
			lpSystem->Release();
		}
	}
}

#endif // SEARCH_PATH_FILESYSTEM
