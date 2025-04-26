#pragma once
#ifndef __DX8TEXTURE_H__
#define __DX8TEXTURE_H__

/* ---------- headers */

#include "RPTexture.h"
#include <d3d8.h>

/* ---------- definitions */

struct IDirect3DDevice8;
struct IDirect3DTexture8;

struct DX8Texture
{
public:
	/* ---------- member variables */

	IDirect3DBaseTexture8* texture;
	UNKNOWN unknown4;

	/* ---------- member functions */

	DX8Texture();
	DX8Texture(DX8Texture&) = delete;
	~DX8Texture();

	[[nodiscard]] HRESULT create_vb(
		// The D3D device used to create the index buffer
		IDirect3DDevice8* direct3d_device,
		// Flexible Vertex Format
		U32 format,
		// The number of vertices to allocate
		U32 num_verts);
	void dispose();
	[[nodiscard]] HRESULT lock_vb(
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
	[[nodiscard]] HRESULT unlock_vb();
};

#endif // __DX8TEXTURE_H__
