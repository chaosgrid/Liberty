// FVF.h
//
//
//

#ifndef FVF_H
#define FVF_H

// Helpers to determine size of flexible vertex format buffers.

#include "typedefs.h"

// +---------------------------+-------------------------+---------------------------+-------------+
// | FVF                       | Data type               | Usage                     | Usage index |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_XYZ                | D3DDECLTYPE_FLOAT3      | D3DDECLUSAGE_POSITION     | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_XYZRHW             | D3DDECLTYPE_FLOAT4      | D3DDECLUSAGE_POSITIONT    | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_XYZW               | D3DDECLTYPE_FLOAT4      | D3DDECLUSAGE_POSITION     | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_XYZB5 and          | D3DVSDT_FLOAT3,         | D3DDECLUSAGE_POSITION,    | 0           |
// | D3DFVF_LASTBETA_UBYTE4    | D3DVSDT_FLOAT4,         | D3DDECLUSAGE_BLENDWEIGHT, | 0           |
// |                           | D3DVSDT_UBYTE4          | D3DDECLUSAGE_BLENDINDICES | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_XYZB5 and          | D3DVSDT_FLOAT3,         | D3DDECLUSAGE_POSITION,    | 0           |
// | D3DFVF_LASTBETA_D3DCOLOR  | D3DVSDT_FLOAT4,         | D3DDECLUSAGE_BLENDWEIGHT, | 0           |
// |                           | D3DVSDT_D3DCOLOR        | D3DDECLUSAGE_BLENDINDICES | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_XYZB5              | D3DDECLTYPE_FLOAT3,     | D3DDECLUSAGE_POSITION,    | 0           |
// |                           | D3DDECLTYPE_FLOAT4,     | D3DDECLUSAGE_BLENDWEIGHT, | 0           |
// |                           | D3DDECLTYPE_FLOAT1      | D3DDECLUSAGE_BLENDINDICES | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_XYZBn (n=1..4)     | D3DDECLTYPE_FLOAT3,     | D3DDECLUSAGE_POSITION,    | 0           |
// |                           | D3DDECLTYPE_FLOATn      | D3DDECLUSAGE_BLENDWEIGHT  | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_XYZBn (n=1..4) and | D3DDECLTYPE_FLOAT3,     | D3DDECLUSAGE_POSITION,    | 0           |
// | D3DFVF_LASTBETA_UBYTE4    | D3DDECLTYPE_FLOAT(n-1), | D3DDECLUSAGE_BLENDWEIGHT, | 0           |
// |                           | D3DDECLTYPE_UBYTE4      | D3DDECLUSAGE_BLENDINDICES | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_XYZBn (n=1..4)     | D3DDECLTYPE_FLOAT3,     | D3DDECLUSAGE_POSITION,    | 0           |
// | D3DFVF_LASTBETA_D3DCOLOR  | D3DDECLTYPE_FLOAT(n-1), | D3DDECLUSAGE_BLENDWEIGHT  | 0           |
// |                           | D3DDECLTYPE_D3DCOLOR    | D3DDECLUSAGE_BLENDINDICES | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_NORMAL             | D3DDECLTYPE_FLOAT3      | D3DDECLUSAGE_NORMAL       | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_PSIZE              | D3DDECLTYPE_FLOAT1      | D3DDECLUSAGE_PSIZE        | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_DIFFUSE            | D3DDECLTYPE_D3DCOLOR    | D3DDECLUSAGE_COLOR        | 0           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_SPECULAR           | D3DDECLTYPE_D3DCOLOR    | D3DDECLUSAGE_COLOR        | 1           |
// +---------------------------+-------------------------+---------------------------+-------------+
// | D3DFVF_TEXCOORDSIZEm(n)   | D3DDECLTYPE_FLOATm      | D3DDECLUSAGE_TEXCOORD     | n           |
// +---------------------------+-------------------------+---------------------------+-------------+

// (D3DFVF_POSITION_MASK >> 1) | (D3DFVF_LASTBETA_UBYTE4 >> 9)
static U32 FVF_POSITION_SIZE[16] =
{
	/*                 |                         */ 0 * 4, // None
	/*                 | D3DFVF_XYZ              */ 3 * 4, // D3DDECLTYPE_FLOAT3
	/*                 | D3DFVF_XYZRHW           */ 4 * 4, // D3DDECLTYPE_FLOAT4
	/*                 | D3DFVF_XYZB1            */ 4 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_FLOAT1
	/*                 | D3DFVF_XYZB2            */ 5 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_FLOAT2
	/*                 | D3DFVF_XYZB3            */ 6 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_FLOAT3
	/*                 | D3DFVF_XYZB4            */ 7 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_FLOAT4
	/*                 | D3DFVF_XYZB5            */ 8 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_FLOAT4 D3DDECLTYPE_FLOAT1
	/* LASTBETA_UBYTE4 |               [Invalid] */ 0 * 4, // None 
	/* LASTBETA_UBYTE4 | D3DFVF_XYZ    [Invalid] */ 3 * 4, // D3DDECLTYPE_FLOAT3 
	/* LASTBETA_UBYTE4 | D3DFVF_XYZRHW [Invalid] */ 4 * 4, // D3DDECLTYPE_FLOAT4 
	/* LASTBETA_UBYTE4 | D3DFVF_XYZB1            */ 4 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_UBYTE4
	/* LASTBETA_UBYTE4 | D3DFVF_XYZB2            */ 5 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_FLOAT1 D3DDECLTYPE_UBYTE4
	/* LASTBETA_UBYTE4 | D3DFVF_XYZB3            */ 6 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_FLOAT2 D3DDECLTYPE_UBYTE4
	/* LASTBETA_UBYTE4 | D3DFVF_XYZB4            */ 7 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_FLOAT3 D3DDECLTYPE_UBYTE4
	/* LASTBETA_UBYTE4 | D3DFVF_XYZB5            */ 8 * 4, // D3DDECLTYPE_FLOAT3 D3DDECLTYPE_FLOAT4 D3DVSDT_UBYTE4
};

// D3DFVF_NORMAL | D3DFVF_PSIZE | D3DFVF_DIFFUSE | D3DFVF_SPECULAR
static U32 FVF_OTHER_SIZE[16] =
{
	/*           |          |        |         */ 0 * 0,
	/*           |          |        | _NORMAL */ 3 * 4,
	/*           |          | _PSIZE |         */ 1 * 4,
	/*           |          | _PSIZE | _NORMAL */ 4 * 4,
	/*           | _DIFFUSE |        |         */ 1 * 4,
	/*           | _DIFFUSE |        | _NORMAL */ 4 * 4,
	/*           | _DIFFUSE | _PSIZE |         */ 2 * 4,
	/*           | _DIFFUSE | _PSIZE | _NORMAL */ 5 * 4,
	/* _SPECULAR |          |        |         */ 1 * 4,
	/* _SPECULAR |          |        | _NORMAL */ 4 * 4,
	/* _SPECULAR |          | _PSIZE |         */ 2 * 4,
	/* _SPECULAR |          | _PSIZE | _NORMAL */ 5 * 4,
	/* _SPECULAR | _DIFFUSE |        |         */ 2 * 4,
	/* _SPECULAR | _DIFFUSE |        | _NORMAL */ 5 * 4,
	/* _SPECULAR | _DIFFUSE | _PSIZE |         */ 3 * 4,
	/* _SPECULAR | _DIFFUSE | _PSIZE | _NORMAL */ 6 * 4
};

#define FVF_SIZEOF_POSITION(fvf)    FVF_POSITION_SIZE[(((fvf)&D3DFVF_POSITION_MASK) >> 1) | (((fvf)&D3DFVF_POSITION_MASK) >> 9)]
#define FVF_SIZEOF_OTHER(fvf)        FVF_OTHER_SIZE[((fvf)&0xF0)>>4]
#define FVF_SIZEOF_TEXCOORDS(fvf)    ((((fvf)&D3DFVF_TEXCOUNT_MASK) >> D3DFVF_TEXCOUNT_SHIFT) * sizeof(float) * 2)
#define FVF_SIZEOF_VERT(fvf)        (FVF_SIZEOF_POSITION(fvf) + FVF_SIZEOF_OTHER(fvf) + FVF_SIZEOF_TEXCOORDS(fvf))

#define FVF_COLOR_OFS(fvf)            ( FVF_SIZEOF_POSITION(fvf) + ((fvf)&D3DFVF_NORMAL)? 3*sizeof(float) : 0 )
#define FVF_TEXCOORD_U0_OFS(fvf)    (FVF_SIZEOF_OTHER(fvf) + FVF_SIZEOF_POSITION(fvf))

struct D3DVERTEX
{
	SINGLE nx;
	SINGLE ny;
	SINGLE nz;
	SINGLE tu;
	SINGLE tv;
	SINGLE x;
	SINGLE y;
	SINGLE z;
};

#endif
