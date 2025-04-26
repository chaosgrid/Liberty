/* ---------- headers */

#include "CachedTexture.h"
#include "RenderDebugger.h"
#include "DX8/DX8Texture.h"

#include <typedefs.h>
#include <d3d8.h>

/* ---------- public code */

void CACHED_TEXTURE::invalidate(void)
{
	valid = false;
}

GENRESULT CACHED_TEXTURE::get(IDirect3DDevice8* device, U32 stage_idx, IRP_TEXTUREHANDLE* out_htexture)
{
	GENRESULT gr = GR_OK;
	if (HRESULT hr = E_FAIL; FAILED(hr = device->GetTexture(stage_idx, (IDirect3DBaseTexture8**)&value)))
	{
		GENERAL_TRACE_1(TEMPSTR("CACHED_TEXTURE: get: GetTexture( %d, out ) failed: %s\n", stage_idx, rp_rd_ddmessage(hr)));
		*out_htexture = NULL;
		gr = GR_GENERIC;
	}
	return gr;
}

GENRESULT CACHED_TEXTURE::set(IDirect3DDevice8* device, U32 stage_idx, IRP_TEXTUREHANDLE new_value, bool force_to_hw)
{
#if defined(RP_DISABLE_CACHES) && !RP_DISABLE_CACHES 
	if (valid && !force_to_hw && (value == new_value))
	{
		return GR_OK;
	}
#endif

	IDirect3DBaseTexture8* direct3d_texture = nullptr;
	DX8Texture* texture = reinterpret_cast<DX8Texture*>(new_value);
	if (texture != nullptr)
	{
		direct3d_texture = texture->texture;
	}

	GENRESULT gr = GR_OK;
	if (HRESULT hr = E_FAIL; FAILED(hr = device->SetTexture(stage_idx, direct3d_texture)))
	{
		GENERAL_TRACE_1(TEMPSTR("CACHED_TEXTURE: set: SetTexture( %d, %d ) failed: %s\n", stage_idx, new_value, rp_rd_ddmessage(hr)));
		gr = GR_GENERIC;
	}
	return gr;

	rp_rd_texture(stage_idx, direct3d_texture);
	value = new_value;
	valid = !force_to_hw;

	return gr;
}
