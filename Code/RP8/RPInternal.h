#pragma once

#ifndef __RPINTERNAL_H__
#define __RPINTERNAL_H__

#include "RPIndexBuffer.h"
#include "RPVertexBuffer.h"

#include <d3d8.h>

#define HRESULT_GET_ERROR_STRING(...) (explode(), (const char*)0)

struct RPVertexBufferInternal
{
	UNKNOWN direct3d_vertex_buffer_usage;
	U32 vertex_format;
	U32 num_verts;
	UNKNOWN unknownC;
	void* locked_data;
	UNKNOWN unknown14;
	UNKNOWN unknown18;
	UNKNOWN unknown1C;
	IDirect3DVertexBuffer8* direct3d_vertex_buffer;
};

#endif
