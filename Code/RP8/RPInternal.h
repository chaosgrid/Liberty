#pragma once

#ifndef __RPINTERNAL_H__
#define __RPINTERNAL_H__

#include "RPIndexBuffer.h"
#include "RPVertexBuffer.h"

#include <d3d8.h>

struct RPIndexBufferInternal
{
	DWORD unknown0_flags_or_usage;
	IDirect3DIndexBuffer8* direct3d_index_buffer;
	BYTE* locked_data_ptr;
	DWORD unknownC;
	DWORD unknown10;
	DWORD unknown14;
	DWORD element_count;
};

struct RPVertexBufferInternal
{
	DWORD direct3d_vertex_buffer_usage;
	DWORD vertex_format;
	DWORD num_verts;
	DWORD unknownC;
	DWORD unknown10;
	DWORD unknown14;
	DWORD unknown18;
	DWORD unknown1C;
	IDirect3DVertexBuffer8* direct3d_vertex_buffer;
};

#endif
