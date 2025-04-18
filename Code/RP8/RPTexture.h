#pragma once

#ifndef __RPTEXTURE_H__
#define __RPTEXTURE_H__

#include <DACOM.h>

#include <d3d8types.h>

//--------------------------------------------------------------------------//
//----------------------------IRPTexture Interface--------------------------//
//--------------------------------------------------------------------------//

typedef struct IRPTexture* LPRPTEXTURE;
typedef void* IRP_TEXTUREHANDLE;

struct IFileSystem;

#define IID_IRPTexture DACOM_MAKE_IID("IRPTexture")
struct DACOM_NO_VTABLE IRPTexture : public IDAComponent
{
	// IDAComponent methods

	DACOM_DEFMETHOD(QueryInterface)(const C8* interface_name, void** instance) = 0;
	DACOM_DEFMETHOD_(U32, AddRef)(void) = 0;
	DACOM_DEFMETHOD_(U32, Release)(void) = 0;

	// IRPTexture methods

	DACOM_DEFMETHOD(print_screen)(IFileSystem* pFileSystem, const char* filepath);
	DACOM_DEFMETHOD(load_texture)(UNKNOWN* a2_interface, const char* filepath, IRP_TEXTUREHANDLE* out_texture);
	DACOM_DEFMETHOD(load_surface_from_file)(UNKNOWN* a2_interface, UNKNOWN a3, UNKNOWN a4, UNKNOWN a5);
	DACOM_DEFMETHOD(RPTexture_Unknown18)(UNKNOWN a2, UNKNOWN a3, UNKNOWN a4);
	DACOM_DEFMETHOD(load_cubemap)(UNKNOWN* a2_interface, const char* filepath, IRP_TEXTUREHANDLE* out_texture);
};

#endif
