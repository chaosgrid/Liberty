#pragma once

#ifndef __RPVERTEXBUFFER_H__
#define __RPVERTEXBUFFER_H__

#include <DACOM.h>

#include <d3d8types.h>

//--------------------------------------------------------------------------//
//---------------------------IRPVertexBuffer Interface----------------------//
//--------------------------------------------------------------------------//

typedef struct IRPVertexBuffer* LPRPVERTEXBUFFER;
DECLARE_HANDLE(IRP_VERTEXBUFFERHANDLE);
#define IRP_SCRATCH_VB_HANDLE ((IRP_VERTEXBUFFERHANDLE)-1)

#include "VertexBufferDesc.h"

#define IID_IRPVertexBuffer DACOM_MAKE_IID("IRPVertexBuffer")
struct DACOM_NO_VTABLE IRPVertexBuffer : public IDAComponent
{
	// IDAComponent methods

	DACOM_DEFMETHOD(QueryInterface)(const C8* interface_name, void** instance) = 0;
	DACOM_DEFMETHOD_(U32, AddRef)(void) = 0;
	DACOM_DEFMETHOD_(U32, Release)(void) = 0;

	// IRPVertexBuffer methods

	DACOM_DEFMETHOD(create_vb)(U32 format, U32 count, IRP_VERTEXBUFFERHANDLE* out_vb_handle, U8 irp_vbf_flags);
	DACOM_DEFMETHOD(destroy_vb)(IRP_VERTEXBUFFERHANDLE& vb_handle);
	DACOM_DEFMETHOD(ressize_vb)(IRP_VERTEXBUFFERHANDLE vb_handle, U32 format, U32 num_verts);
	DACOM_DEFMETHOD(copy_vertices)(IRP_VERTEXBUFFERHANDLE vb_handle, U32* offset, VertexBufferDesc* src_vb_desc, U32 start_vertex, U32 num_vertices);
	DACOM_DEFMETHOD(lock_vb)(IRP_VERTEXBUFFERHANDLE vb_handle, U32* offset, void** locked_data, U32 count);
	DACOM_DEFMETHOD(unlock_vb)(IRP_VERTEXBUFFERHANDLE vb_handle);
	DACOM_DEFMETHOD(RPVertexBuffer_Unknown24)(UNKNOWN);
	DACOM_DEFMETHOD(select_vb)(IRP_VERTEXBUFFERHANDLE vb_handle);
	DACOM_DEFMETHOD(get_vb_count)(IRP_VERTEXBUFFERHANDLE vb_handle, U32* vertex_format, U32* num_verts);
	DACOM_DEFMETHOD_(BOOL32, is_vb_valid)(IRP_VERTEXBUFFERHANDLE vb_handle);
};

#endif
