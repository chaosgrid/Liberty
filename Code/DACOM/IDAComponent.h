#pragma once

//--------------------------------------------------------------------------//
//----------------------------IDAComponent Interface------------------------//
//--------------------------------------------------------------------------//

// Self-initializing structure used by clients to request a desired DA COM implementation
struct DACOMDESC
{
	U32 size;				// size of the structure + any extension
	const C8* interface_name;	// ASCIIZ name of requested interface

	DACOMDESC(const C8* _interface_name = 0)
	{
		size = sizeof(*this);
		interface_name = _interface_name;
	}
};

// Self-initializing structure used by clients to request a desired DA COM
// implementation. AGGDESC is used by components that support aggregation.
// A successfull call to CreateInstance() using an AGGDESC will return a pointer
// to an IAggregateComponent interface. Use QueryInterface() to retrieve more
// specific interface pointers. 
struct AGGDESC : public DACOMDESC
{
	struct IDAComponent* outer;
	struct IDAComponent** inner;
	const  C8* description;

	AGGDESC(const C8* _interfaceName = 0,
		const C8* _description = 0) : DACOMDESC(_interfaceName)
	{
		outer = 0;
		inner = 0;
		description = _description;
		size = sizeof(*this);
	}
};

#define IID_IDAComponent DACOM_MAKE_IID("IDAComponent")
// Abstract base class from which all DA component classes must be derived
struct DACOM_NO_VTABLE IDAComponent
{
	DACOM_DEFMETHOD(QueryInterface) (const C8* interface_name, void** instance) = 0;

	DACOM_DEFMETHOD_(U32, AddRef) (void) = 0;

	DACOM_DEFMETHOD_(U32, Release) (void) = 0;
};

#define IID_IComponentFactory DACOM_MAKE_IID("IComponentFactory")
// Abstract class from which all class factories inherit
struct DACOM_NO_VTABLE IComponentFactory : public IDAComponent
{
	DACOM_DEFMETHOD(CreateInstance) (DACOMDESC* descriptor, void** instance) = 0;
};

#define IID_IAggregateComponent "IAggregateComponent"
// Abstract class from which all aggregatable classes inherit
struct DACOM_NO_VTABLE IAggregateComponent : public IDAComponent
{
	DACOM_DEFMETHOD(Initialize) (void) = 0;
};
