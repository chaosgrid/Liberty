#pragma once

//--------------------------------------------------------------------------//
//---------------------------ICOManager Interface---------------------------//
//--------------------------------------------------------------------------//

//-------------------------------------
// Priorities for RegisterComponent
//-------------------------------------
#define DACOM_HIGH_PRIORITY   0xC0000000
#define DACOM_NORMAL_PRIORITY 0x80000000
#define DACOM_LOW_PRIORITY    0x40000000

//-------------------------------------
// callback prototype for EnumerateComponents
//-------------------------------------
typedef BOOL32(__cdecl* DACOMENUMCALLBACK)(IComponentFactory* component,
	const C8* interface_name,
	U32           priority,
	void* context);

//-------------------------------------
// flags for SetINIConfig
//-------------------------------------
#define DACOM_INI_WRITABLE	0x00000001
#define DACOM_INI_STRING	0x00000002

#define IID_ICOManager DACOM_MAKE_IID("ICOManager")

struct DACOM_NO_VTABLE ICOManager : public IComponentFactory
{
	DACOM_DEFMETHOD(RegisterComponent)	 (IComponentFactory* component,
		const C8* interface_name,
		U32           priority = DACOM_NORMAL_PRIORITY) = 0;

	DACOM_DEFMETHOD(UnregisterComponent) (IComponentFactory* component,
		const C8* interface_name = 0) = 0;

	DACOM_DEFMETHOD(EnumerateComponents) (const C8* interface_name,
		DACOMENUMCALLBACK callback,
		void* context = 0) = 0;

	DACOM_DEFMETHOD(AddLibrary)          (const C8* DLL_filename) = 0;

	DACOM_DEFMETHOD(RemoveLibrary)       (const C8* DLL_filename) = 0;

	DACOM_DEFMETHOD(ShutDown)            (void) = 0;

	DACOM_DEFMETHOD(SetINIConfig)        (const C8* info, U32 flags = 0) = 0;
};
