/* ---------- headers */

#include "CachedViewport.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

void CACHED_VIEWPORT::invalidate(void)
{
	dr_valid = false;
	vp_valid = false;
}

void CACHED_VIEWPORT::get(IDirect3DDevice8* device, D3DVIEWPORT8* out)
{
	if (dr_valid && vp_valid) {
		memcpy(out, &value, sizeof(value));
	}
	else {

		HRESULT hr;

		if (SUCCEEDED(hr = device->GetViewport(out))) {
			memcpy(&value, out, sizeof(value));
			dr_valid = true;
			vp_valid = true;
		}
		else
		{
			GENERAL_TRACE_1(TEMPSTR("CACHED_VIEWPORT: get: GetViewport() failed: %s\n", rp_rd_ddmessage(hr)));
		}
	}
}

void CACHED_VIEWPORT::get_viewport(IDirect3DDevice8* device, U32* out_x, U32* out_y, U32* out_w, U32* out_h)
{
	if (!vp_valid) {

		HRESULT hr;

		if (SUCCEEDED(hr = device->GetViewport(&value))) {

			dr_valid = true;
			vp_valid = true;

		}
		else
		{
			GENERAL_TRACE_1(TEMPSTR("CACHED_VIEWPORT: get: GetViewport() failed: %s\n", rp_rd_ddmessage(hr)));
			memset(&value, 0, sizeof(value));
		}
	}

	*out_x = value.X;
	*out_y = value.Y;
	*out_w = value.Width;
	*out_h = value.Height;
}

void CACHED_VIEWPORT::set_viewport(IDirect3DDevice8* device, U32 x, U32 y, U32 w, U32 h, bool force_to_hw)
{
#if defined(RP_DISABLE_CACHES) && !RP_DISABLE_CACHES 
	if (vp_valid && !force_to_hw && (x == value.X) && (y == value.Y) && (w == value.Width) && (h == value.Height))
	{
		return;
	}
#endif

	HRESULT hr;

	value.X = x;
	value.Y = y;
	value.Width = w;
	value.Height = h;

	if (SUCCEEDED(hr = device->SetViewport(&value))) {
		rp_rd_viewport(&value);
		vp_valid = !force_to_hw;
	}
	else
	{
		GENERAL_TRACE_1(TEMPSTR("CACHED_VIEWPORT: set_viewport: SetViewport() failed: %s\n", rp_rd_ddmessage(hr)));
	}
}

void CACHED_VIEWPORT::get_depth_range(IDirect3DDevice8* device, float* out_min, float* out_max)
{
	if (!dr_valid) {

		HRESULT hr;

		if (SUCCEEDED(hr = device->GetViewport(&value))) {

			dr_valid = true;

		}
		else
		{

			GENERAL_TRACE_1(TEMPSTR("CACHED_VIEWPORT: get: GetViewport() failed: %s\n", rp_rd_ddmessage(hr)));

			memset(&value, 0, sizeof(value));
		}
	}

	*out_min = value.MinZ;
	*out_max = value.MaxZ;
}

void CACHED_VIEWPORT::set_depth_range(IDirect3DDevice8* device, float min, float max, bool force_to_hw)
{
#if defined(RP_DISABLE_CACHES) && !RP_DISABLE_CACHES 
	if (dr_valid && !force_to_hw && (min == value.MinZ) && (max == value.MaxZ))
	{
		return;
	}
#endif

	HRESULT hr;

	value.MinZ = min;
	value.MaxZ = max;

	if (SUCCEEDED(hr = device->SetViewport(&value))) {

		rp_rd_viewport(&value);

		dr_valid = !force_to_hw;

	}
	else
	{
		GENERAL_TRACE_1(TEMPSTR("CACHED_VIEWPORT: set_depth_range: SetViewport() failed: %s\n", rp_rd_ddmessage(hr)));
	}
}

/* ---------- private code */

/* ---------- reverse engineering */
