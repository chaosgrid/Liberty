#pragma once

#ifndef __RPTEXTURE_H__
#define __RPTEXTURE_H__

#include <DACOM.h>
#include <d3d8.h>
//--------------------------------------------------------------------------//
//----------------------------IRPTexture Interface--------------------------//
//--------------------------------------------------------------------------//

typedef struct IRPTexture* LPRPTEXTURE;
DECLARE_HANDLE(IRP_TEXTUREHANDLE);
#define IRP_INVALID_TEXURE_HANDLE ((IRP_TEXTUREHANDLE)-1)

struct IFileSystem;

struct DDSInfo
{
	U32 Width;
	U32 Height;
	U32 Depth;
	DWORD MipMapCount;
	D3DFORMAT Format;
	DWORD unknown14; // always 3
	DWORD unknown18; // always 4
};

#define IID_IRPTexture DACOM_MAKE_IID("IRPTexture")
struct DACOM_NO_VTABLE IRPTexture : public IDAComponent
{
	// IDAComponent methods

	DACOM_DEFMETHOD(QueryInterface)(const C8* interface_name, void** instance) = 0;
	DACOM_DEFMETHOD_(U32, AddRef)(void) = 0;
	DACOM_DEFMETHOD_(U32, Release)(void) = 0;

	// IRPTexture methods

	DACOM_DEFMETHOD(print_screen)(IFileSystem* IFS, const char* child);
	DACOM_DEFMETHOD(load_texture)(IFileSystem* IFS, const char* child, IRP_TEXTUREHANDLE* out_htexture);
	DACOM_DEFMETHOD(load_surface_from_file)(UNKNOWN* a2_interface, UNKNOWN a3, UNKNOWN a4, UNKNOWN a5);
	DACOM_DEFMETHOD(load_dds_info)(DDSInfo* out_info, DWORD membytesize, void* mapped_file_mem);
	DACOM_DEFMETHOD(load_cubemap)(IFileSystem* IFS, const char* child, IRP_TEXTUREHANDLE* out_htexture);
};

#endif
