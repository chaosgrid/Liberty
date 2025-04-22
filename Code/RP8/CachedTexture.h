#pragma once
#ifndef __CACHEDTEXTURE_H__
#define __CACHEDTEXTURE_H__

/* ---------- headers */

#include <RPTexture.h>

/* ---------- constants */

/* ---------- definitions */

struct IDirect3DDevice8;

struct CACHED_TEXTURE
{
	IRP_TEXTUREHANDLE value; // irp texture handle
	bool valid; // texture is valid

	void invalidate(void);
	U32 get(IDirect3DDevice8* device, U32 stage_idx, IRP_TEXTUREHANDLE* out_htexture);
	GENRESULT set(IDirect3DDevice8* device, U32 stage_idx, IRP_TEXTUREHANDLE new_value, bool force_to_hw = false);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- inline code */

#endif // __CACHEDTEXTURE_H__
