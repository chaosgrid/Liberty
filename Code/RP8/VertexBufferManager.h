#pragma once

#ifndef __VERTEXBUFFERMANAGER_H__
#define __VERTEXBUFFERMANAGER_H__

#include <DACOM.h>

//--------------------------------------------------------------------------//
//------------------------IVertexBufferManager Interface--------------------//
//--------------------------------------------------------------------------//

typedef struct IVertexBufferManager* LPVERTEXBUFFERMANAGER;

struct VertexBufferAcquire
{
	void* handle;
	UNKNOWN vertex_format;
	UNKNOWN lock_offset;
	void* locked_data;
};

#define IID_IVertexBufferManager DACOM_MAKE_IID("IVertexBufferManager")
struct DACOM_NO_VTABLE IVertexBufferManager : public IDAComponent
{
	// IDAComponent methods

	DACOM_DEFMETHOD(QueryInterface)(const C8* interface_name, void** instance) = 0;
	DACOM_DEFMETHOD_(U32, AddRef)(void) = 0;
	DACOM_DEFMETHOD_(U32, Release)(void) = 0;

	// IVertexBufferManager methods

	DACOM_DEFMETHOD(VertexBufferManager_UnknownC)(UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN) = 0;
	DACOM_DEFMETHOD(VertexBufferManager_Unknown10)() = 0;
	DACOM_DEFMETHOD(acquire_vertex_buffer)(UNKNOWN vertex_format, U32 num_verts, VertexBufferAcquire* out_result) = 0;
	DACOM_DEFMETHOD(release_vertex_buffer)(VertexBufferAcquire* vbacquire) = 0;
	DACOM_DEFMETHOD(VertexBufferManager_Unknown1C)() = 0;
	DACOM_DEFMETHOD(VertexBufferManager_Unknown20)(UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN) = 0;
};

#endif
