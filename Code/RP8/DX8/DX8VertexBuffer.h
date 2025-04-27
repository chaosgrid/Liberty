#pragma once
#ifndef __DX8VERTEXBUFFER_H__
#define __DX8VERTEXBUFFER_H__

/* ---------- headers */

#include "RPVertexBuffer.h"
#include <d3d8.h>

/* ---------- definitions */

struct IDirect3DDevice8;
struct IDirect3DVertexBuffer8;

struct DX8VertexBuffer
{
public:
	/* ---------- member variables */

	DWORD usage;
	U32 vertex_format;
	U32 element_count;
	U32 ring_index;
	U8* lockptr;
	UNKNOWN unknown14;
	UNKNOWN unknown18;
	UNKNOWN unknown1C;
	IDirect3DVertexBuffer8* buffer;

	/* ---------- member functions */

	DX8VertexBuffer(DWORD usage = 0);
	DX8VertexBuffer(DX8VertexBuffer&) = delete;
	~DX8VertexBuffer();

	HRESULT create_vb(
		// The D3D device used to create the index buffer
		IDirect3DDevice8* direct3d_device,
		// Flexible Vertex Format
		U32 format,
		// The number of vertices to allocate
		U32 num_verts);
	HRESULT dispose();
	HRESULT lock_vb(
		// Starting index in the buffer where new indices will be written
		U32 dst_index,
		// Number of indices the caller wants to write
		U32 num_indices,
		// Receives pointer to the locked memory region
		void*& out_data,
		// Receives the actual start index used (after dynamic ring handling)
		U32* out_start_index,
		// Whether to use a system-lock (D3DLOCK_NOSYSLOCK) hint
		bool syslock);
	HRESULT unlock_vb();
};

#endif // __DX8VERTEXBUFFER_H__
