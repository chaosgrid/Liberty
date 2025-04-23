#pragma once
#ifndef __CACHEDGEOMETRY_H__
#define __CACHEDGEOMETRY_H__

/* ---------- headers */

#include <RPVertexBuffer.h>
#include <RPIndexBuffer.h>

/* ---------- constants */

/* ---------- definitions */

struct IDirect3DDevice8;

struct CACHED_GEOMETRY
{
	DWORD current_vertex_format;
	IRP_VERTEXBUFFERHANDLE current_vertex_buffer_handle;
	IRP_INDEXBUFFERHANDLE current_index_buffer_handle;
	DWORD current_base_index;
	bool vertex_dirty : 1;
	bool index_dirty : 1;

	GENRESULT set_vertex_buffer(IRP_VERTEXBUFFERHANDLE hvertexbuffer, U32 vertex_format);
	GENRESULT set_index_buffer(IRP_INDEXBUFFERHANDLE hindexbuffer, U32 base_index);
	GENRESULT flush_indices(IDirect3DDevice8* device);
	GENRESULT invalidate();
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- inline code */

#endif // __CACHEDGEOMETRY_H__
