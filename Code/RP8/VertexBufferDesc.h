#pragma once
#ifndef __COPYVERTEXBUFFERDESC_H__
#define __COPYVERTEXBUFFERDESC_H__

/* ---------- headers */

#include "typedefs.h"

/* ---------- constants */

#define VBD_NUM_MC_CHANNELS 2

typedef U32 VertexBufferFlag;

constexpr VertexBufferFlag	VBD_F_BIT_ZERO = (1 << 0);	// This bit is reserved.
constexpr VertexBufferFlag	VBD_F_AOS = (1 << 1);	// VBD describes an array-of-structures, if
// this flag is not set, the data is assumed to be interleaved.
constexpr VertexBufferFlag	VBD_F_INDEXED = (1 << 2);	// Use the VertexBufferItemDesc indices values.

/* ---------- definitions */

struct VertexBufferItemDesc
{
	void* data;						// Pointer to database of values
	U32 size;				// Size in bytes of each individual item
	U32 stride;			// Stride in bytes from start of one item to the start of the next item
	U32* indices;			// Indices for the given item.
	U32 count;			// Number of elements in 'data'
};

struct VertexBufferDesc
{
	VertexBufferFlag	flags;							// VBD_F_* flags
	VertexBufferItemDesc Ps;							// Vertex Points		(Vector)
	VertexBufferItemDesc Ns;							// Vertex Normals		(Vector)
	VertexBufferItemDesc C0s;							// Vertex Color 0		(PACKEDARGB)
	VertexBufferItemDesc MCs[VBD_NUM_MC_CHANNELS];		// Vertex Map Coord 0	(n-floats, where n is 1,2,3,4)

	// Flexible Vertex Format Flags
	// This determines which of the above vertex items are
	// actually accessed.  Enabling a vertex item (via some
	// FVF flag) when the item is not available (the above
	// pointers are NULL) will caused undefined behavior.
	U32 vertex_format;	

	// Total number of vertices.  This is also the number
	// of entries in the 'indices' arrays for each item.
	// i.e. VertexCount == length(Ps.indices)
	//
	// When an 'indices' array is NULL, VertexCount specifies
	// the length of the 'data' arrays for the item.
	// i.e. VertexCount == length(Ps.data)
	U32 num_vertices;		
};
static_assert(sizeof(VertexBufferDesc) == 0x70);

/* ---------- prototypes */

void copy_vertex_buffer_desc(void* dst_buffer, U32 dst_vertex_format, VertexBufferDesc* vb_desc, U32 num_vertices, U32 start_vertex);

/* ---------- globals */

/* ---------- inline code */

#endif // __COPYVERTEXBUFFERDESC_H__
