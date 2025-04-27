#pragma once

#ifndef __VERTEXBUFFERMANAGER_H__
#define __VERTEXBUFFERMANAGER_H__

#include <DACOM.h>
#include <d3d8.h>
#include <RPVertexBuffer.h>

//--------------------------------------------------------------------------//
//------------------------IVertexBufferManager Interface--------------------//
//--------------------------------------------------------------------------//

typedef struct IVertexBufferManager* LPVERTEXBUFFERMANAGER;

struct VertexBufferAcquire
{
	IRP_VERTEXBUFFERHANDLE vertex_buffer;
	U32 vertex_format;
	U32 lock_offset;
	void* lockptr;
};

#define IID_IVertexBufferManager DACOM_MAKE_IID("IVertexBufferManager")
struct DACOM_NO_VTABLE IVertexBufferManager : public IDAComponent
{
	// IDAComponent methods

	DACOM_DEFMETHOD(QueryInterface)(const C8* interface_name, void** instance) = 0;
	DACOM_DEFMETHOD_(U32, AddRef)(void) = 0;
	DACOM_DEFMETHOD_(U32, Release)(void) = 0;

	// IVertexBufferManager methods

	DACOM_DEFMETHOD(initialize)(UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN) = 0;
	DACOM_DEFMETHOD(cleanup)() = 0;
	DACOM_DEFMETHOD(acquire_vertex_buffer)(D3DFORMAT vertex_format, U32 num_verts, VertexBufferAcquire* out_vbmem) = 0;
	DACOM_DEFMETHOD(release_vertex_buffer)(VertexBufferAcquire* vbmem) = 0;
	DACOM_DEFMETHOD(IVertexBufferManager_Unknown1C)() = 0;
	DACOM_DEFMETHOD(copy_vertex_data)(void* dst_buffer, U32 dst_vertex_format, VertexBufferDesc* src_vb_desc, U32 start_vertex, U32 num_vertices) = 0;
};

#endif
