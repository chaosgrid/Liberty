#pragma once

#define DA_SWITCH_CHAR '\\'

// Win32 DLL managed by DACOM
struct ADDED_LIBRARY
{
	HINSTANCE instance;                 // Win32 DLL instance
	C8 base_name[12];                   // Short library filename prefix

	ADDED_LIBRARY* next;                // Used by LList template
	ADDED_LIBRARY* prev;
};

// Registered component object
struct REGISTERED_OBJECT
{
	IComponentFactory* component;       // Component interface
	const C8* interface_name;           // Name of interface
	U32 priority;                       // Implementation priority
	ADDED_LIBRARY* library;		        // may be null if unknown

	REGISTERED_OBJECT* next;            // Used by LList template
	REGISTERED_OBJECT* prev;
};

struct IProfileParser2;

// Component object manager class
struct DACOManager : public ICOManager
{
	U32 reference_cnt;                   // # of instance pointers acquired+1
	BOOL32 initialized;		             // have the DLL's been loaded?	

	// data used during AddLibrary()
	U32 registration_cnt;                // # of components registered by DLLLoad()
	ADDED_LIBRARY* pCurrentLibrary;	     // temp pointer to DLL being loaded

	LList<REGISTERED_OBJECT> object_list;
	LList<ADDED_LIBRARY>     library_list;

	IProfileParser2* parser;
	IDAComponent* innerParser;

	// Constructor initializes reference count to 0
	DACOManager(void);

	// IDAComponent methods

	DACOM_DEFMETHOD(QueryInterface)  (const C8* interface_name, void** instance);

	DACOM_DEFMETHOD_(U32, AddRef)    (void);

	DACOM_DEFMETHOD_(U32, Release)   (void);

	DACOM_DEFMETHOD(CreateInstance) (DACOMDESC* descriptor, void** instance);


	// IDACOManager methods

	DACOM_DEFMETHOD(RegisterComponent)	  (IComponentFactory* component,
		const C8* interface_name,
		U32           priority = DACOM_NORMAL_PRIORITY);

	DACOM_DEFMETHOD(UnregisterComponent) (IComponentFactory* component,
		const C8* interface_name = NULL);

	DACOM_DEFMETHOD(EnumerateComponents) (const C8* interface_name,
		DACOMENUMCALLBACK callback,
		void* context = NULL);

	DACOM_DEFMETHOD(AddLibrary)          (const C8* DLL_filename);

	DACOM_DEFMETHOD(RemoveLibrary)       (const C8* DLL_filename);

	DACOM_DEFMETHOD(ShutDown)            (void);

	DACOM_DEFMETHOD(SetINIConfig)        (const C8* info, U32 flags = 0);

	BOOL32 LoadAllFromDirectory(const C8* pathName, const C8* searchName);

	void LoadAllFromPath(const C8* searchName);

	BOOL32 initialize(void);

	// library is going away, unregister any components that exist inside it
	void UnregisterRelatedComponents(ADDED_LIBRARY* library);

	// 'BaseDir' is of form "path\\"
	// 'lpInput' is any valid path. May or may not have ending '\\'
	//
	//  On Return:
	//    if Returns TRUE, 'lpOutput' is of form "path\\"
	//
	static BOOL32 __stdcall GetAbsolutePath(C8* lpOutput, const C8* lpBaseDir, const C8* lpInput, U32 lSize);

	virtual GENRESULT EnumerateInterfaces(IDAComponent* component,
		DACOMENUMCALLBACK callback,
		void* context = NULL);
};
