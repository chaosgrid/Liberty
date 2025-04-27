#pragma once
#ifndef __DX8INDEXBUFFER_H__
#define __DX8INDEXBUFFER_H__

/* ---------- headers */

#include "RPIndexBuffer.h"
#include <d3d8.h>

/* ---------- definitions */

struct IDirect3DDevice8;
struct IDirect3DIndexBuffer8;

struct DX8IndexBuffer
{
public:
	/* ---------- member variables */

	DWORD usage;
	IDirect3DIndexBuffer8* buffer;
	U8* lockptr;
	UNKNOWN unknownC;
	UNKNOWN unknown10;
	U32 ring_index;
	U32 element_count;

	/* ---------- member functions */

	DX8IndexBuffer(DWORD usage = 0);
	DX8IndexBuffer(DX8IndexBuffer&) = delete;
	~DX8IndexBuffer();

	HRESULT create_ib(
		// The D3D device used to create the index buffer
		IDirect3DDevice8* direct3d_device,
		// The number of 16-bit indices to allocate
		U32 num_indices);
	HRESULT dispose();
	HRESULT lock_ib(
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
	HRESULT unlock_ib();
};

#endif // __DX8INDEXBUFFER_H__
