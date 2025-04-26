/* ---------- headers */

#include "DX8Texture.h"
#include "FVF.h"

/* ---------- public code */

#define HRESULT_GET_ERROR_STRING(...) 0

DX8Texture::DX8Texture() :
	texture(),
	unknown4()
{

}

DX8Texture::~DX8Texture()
{
	dispose();
}

HRESULT DX8Texture::create_vb(IDirect3DDevice8* direct3d_device, U32 format, U32 num_verts)
{

	NOT_IMPLEMENTED;
}

void DX8Texture::dispose()
{
	if (texture != nullptr)
	{
		U32 refcount = texture->Release();
		if (refcount > 0)
		{
			GENERAL_WARNING(TEMPSTR("direct3d_texture released with %u references", refcount));
		}
		texture = nullptr;
	}
}

HRESULT DX8Texture::lock_vb(
	U32 dst_index,                  // Starting index in the buffer where new indices will be written
	U32 num_verts,                // Number of indices the caller wants to write
	void*& out_data,             // Receives pointer to the locked memory region
	U32* out_start_index,           // Receives the actual start index used (after dynamic ring handling)
	bool syslock)                   // Whether to use a system-lock (D3DLOCK_NOSYSLOCK) hint
{

	NOT_IMPLEMENTED;
}

HRESULT DX8Texture::unlock_vb()
{

	NOT_IMPLEMENTED;
}
