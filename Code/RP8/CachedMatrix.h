#pragma once
#ifndef __CACHEDMATRIX_H__
#define __CACHEDMATRIX_H__

/* ---------- headers */

#include <typedefs.h>
#include <d3d8.h>

#include <Core.h>

/* ---------- constants */

/* ---------- definitions */

struct CACHED_MATRIX
{
	D3DMATRIX	value;
	bool		valid;
	bool		unknown41;

	void invalidate(void)
	{
		valid = false;
	}

	void set(IDirect3DDevice8* device, U32 which_matrix, D3DMATRIX* new_value, bool force_to_hw = false)
	{
		unused(device);
		unused(which_matrix);
		unused(force_to_hw);
		value = *new_value;
		invalidate();
	}

	void get(IDirect3DDevice8* device, U32 which_matrix, D3DMATRIX* out)
	{
		unused(device);
		unused(which_matrix);
		*out = value;
	}

	void update(IDirect3DDevice8* device, U32 which_matrix)
	{
		if (!valid)
		{
			unknown41 = 0;
			D3DTRANSFORMSTATETYPE state = static_cast<D3DTRANSFORMSTATETYPE>(which_matrix);
			valid = SUCCEEDED(device->SetTransform(state, &value));
		}
	}
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- inline code */

#endif // __CACHEDMATRIX_H__
