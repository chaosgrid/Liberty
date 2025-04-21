#pragma once
#ifndef __CACHEDVIEWPORT_H__
#define __CACHEDVIEWPORT_H__

/* ---------- headers */

#include "DAD3DTypes.h"
#include "RenderDebugger.h"

/* ---------- constants */

/* ---------- definitions */

struct CACHED_VIEWPORT
{
	D3DVIEWPORT8 value;
	bool dr_valid;
	bool vp_valid;

	void invalidate(void);
	void get(IDirect3DDevice8* device, D3DVIEWPORT8* out);
	void get_viewport(IDirect3DDevice8* device, U32* out_x, U32* out_y, U32* out_w, U32* out_h);
	void set_viewport(IDirect3DDevice8* device, U32 x, U32 y, U32 w, U32 h, bool force_to_hw = false);
	void get_depth_range(IDirect3DDevice8* device, float* out_min, float* out_max);
	void set_depth_range(IDirect3DDevice8* device, float min, float max, bool force_to_hw = false);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- inline code */

#endif // __CACHEDVIEWPORT_H__
