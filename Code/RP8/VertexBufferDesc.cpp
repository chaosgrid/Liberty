/* ---------- headers */

#include "VertexBufferDesc.h"
#include "RenderPipeline.h"

#include <DACOM.h>
#include <FDump.h>
#include <FVF.h>
#include <d3d8.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */




// CopyVertexBufferDesc.cpp
//
//
//

//


#include <Vector.h>

#include "stdlib.h"
#include "memory.h"

//

typedef void (*cvbd_copier)(void* dst_buffer, U32 dst_vertex_format, VertexBufferDesc* src_vb_desc, U32 start_vertex, U32 num_vertices);

//
// vertex copier declarations
//
static void cvbd_assert(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices);
static void cvbd_i_n_p(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices);
static void cvbd_i_uv0_n_p(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices);
static void cvbd_i_uv0_c0_n_p(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices);
static void indexed_copy(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices);
static void unindexed_copy(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices);

//

struct cvbd_entry
{
	cvbd_copier	vertex_copier;
	U32			vertex_format;
};

//

const U32 RHW = (1 << 0);
const U32 N = (1 << 1);
const U32 C0 = (1 << 2);
const U32 C1 = (1 << 3);
const U32 UV0 = (1 << 4);
const U32 UV1 = (1 << 5);

//

const U32 _RHW = 0;
const U32 _N = 0;
const U32 _C0 = 0;
const U32 _C1 = 0;
const U32 _UV0 = 0;
const U32 _UV1 = 0;

//
// This is the lookup table for the indexed SOA copiers.
//
// NOTE: An underscore before an item signifies that that
// item does NOT exist in the vertex format.  An item WITHOUT
// an underscore signifies that the item DOES exist.
// 
// Note that some entries in the table are invalid and map
// to an assert.
//



extern "C" void sub_6D210DD(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices);
cvbd_entry indexed_lookup[] =
{
	/*	0	*/	{	indexed_copy,		_UV1 | _UV0 | _C1 | _C0 | _N | _RHW },
	/*	1	*/	{	cvbd_assert,		_UV1 | _UV0 | _C1 | _C0 | _N | RHW },
	/*	2	*/	{	cvbd_i_n_p,			_UV1 | _UV0 | _C1 | _C0 | N | _RHW },
	/*	3	*/	{	cvbd_assert,		_UV1 | _UV0 | _C1 | _C0 | N | RHW },
	/*	4	*/	{	indexed_copy,		_UV1 | _UV0 | _C1 | C0 | _N | _RHW },
	/*	5	*/	{	cvbd_assert,		_UV1 | _UV0 | _C1 | C0 | _N | RHW },
	/*	6	*/	{	indexed_copy,		_UV1 | _UV0 | _C1 | C0 | N | _RHW },
	/*	7	*/	{	cvbd_assert,		_UV1 | _UV0 | _C1 | C0 | N | RHW },
	/*	8	*/	{	cvbd_assert,		_UV1 | _UV0 | C1 | _C0 | _N | _RHW },
	/*	9	*/	{	cvbd_assert,		_UV1 | _UV0 | C1 | _C0 | _N | RHW },
	/*	10	*/	{	cvbd_assert,		_UV1 | _UV0 | C1 | _C0 | N | _RHW },
	/*	11	*/	{	cvbd_assert,		_UV1 | _UV0 | C1 | _C0 | N | RHW },
	/*	12	*/	{	indexed_copy,		_UV1 | _UV0 | C1 | C0 | _N | _RHW },
	/*	13	*/	{	cvbd_assert,		_UV1 | _UV0 | C1 | C0 | _N | RHW },
	/*	14	*/	{	indexed_copy,		_UV1 | _UV0 | C1 | C0 | N | _RHW },
	/*	15	*/	{	cvbd_assert,		_UV1 | _UV0 | C1 | C0 | N | RHW },
	/*	16	*/	{	indexed_copy,		_UV1 | UV0 | _C1 | _C0 | _N | _RHW },
	/*	17	*/	{	cvbd_assert,		_UV1 | UV0 | _C1 | _C0 | _N | RHW },
	/*	18	*/	{	cvbd_i_uv0_n_p,		_UV1 | UV0 | _C1 | _C0 | N | _RHW },
	/*	19	*/	{	cvbd_assert,		_UV1 | UV0 | _C1 | _C0 | N | RHW },
	/*	20	*/	{	indexed_copy,		_UV1 | UV0 | _C1 | C0 | _N | _RHW },
	/*	21	*/	{	cvbd_assert,		_UV1 | UV0 | _C1 | C0 | _N | RHW },
	/*	22	*/	{	cvbd_i_uv0_c0_n_p,	_UV1 | UV0 | _C1 | C0 | N | _RHW },
	/*	23	*/	{	cvbd_assert,		_UV1 | UV0 | _C1 | C0 | N | RHW },
	/*	24	*/	{	cvbd_assert,		_UV1 | UV0 | C1 | _C0 | _N | _RHW },
	/*	25	*/	{	cvbd_assert,		_UV1 | UV0 | C1 | _C0 | _N | RHW },
	/*	26	*/	{	cvbd_assert,		_UV1 | UV0 | C1 | _C0 | N | _RHW },
	/*	27	*/	{	cvbd_assert,		_UV1 | UV0 | C1 | _C0 | N | RHW },
	/*	28	*/	{	indexed_copy,		_UV1 | UV0 | C1 | C0 | _N | _RHW },
	/*	29	*/	{	cvbd_assert,		_UV1 | UV0 | C1 | C0 | _N | RHW },
	/*	30	*/	{	indexed_copy,		_UV1 | UV0 | C1 | C0 | N | _RHW },
	/*	31	*/	{	cvbd_assert,		_UV1 | UV0 | C1 | C0 | N | RHW },
	/*	32	*/	{	cvbd_assert,		 UV1 | _UV0 | _C1 | _C0 | _N | _RHW },
	/*	33	*/	{	cvbd_assert,		 UV1 | _UV0 | _C1 | _C0 | _N | RHW },
	/*	34	*/	{	cvbd_assert,		 UV1 | _UV0 | _C1 | _C0 | N | _RHW },
	/*	35	*/	{	cvbd_assert,		 UV1 | _UV0 | _C1 | _C0 | N | RHW },
	/*	36	*/	{	cvbd_assert,		 UV1 | _UV0 | _C1 | C0 | _N | _RHW },
	/*	37	*/	{	cvbd_assert,		 UV1 | _UV0 | _C1 | C0 | _N | RHW },
	/*	38	*/	{	cvbd_assert,		 UV1 | _UV0 | _C1 | C0 | N | _RHW },
	/*	39	*/	{	cvbd_assert,		 UV1 | _UV0 | _C1 | C0 | N | RHW },
	/*	40	*/	{	cvbd_assert,		 UV1 | _UV0 | C1 | _C0 | _N | _RHW },
	/*	41	*/	{	cvbd_assert,		 UV1 | _UV0 | C1 | _C0 | _N | RHW },
	/*	42	*/	{	cvbd_assert,		 UV1 | _UV0 | C1 | _C0 | N | _RHW },
	/*	43	*/	{	cvbd_assert,		 UV1 | _UV0 | C1 | _C0 | N | RHW },
	/*	44	*/	{	cvbd_assert,		 UV1 | _UV0 | C1 | C0 | _N | _RHW },
	/*	45	*/	{	cvbd_assert,		 UV1 | _UV0 | C1 | C0 | _N | RHW },
	/*	46	*/	{	cvbd_assert,		 UV1 | _UV0 | C1 | C0 | N | _RHW },
	/*	47	*/	{	cvbd_assert,		 UV1 | _UV0 | C1 | C0 | N | RHW },
	/*	48	*/	{	indexed_copy,		 UV1 | UV0 | _C1 | _C0 | _N | _RHW },
	/*	49	*/	{	cvbd_assert,		 UV1 | UV0 | _C1 | _C0 | _N | RHW },
	/*	50	*/	{	sub_6D210DD,		 UV1 | UV0 | _C1 | _C0 | N | _RHW },
	/*	51	*/	{	cvbd_assert,		 UV1 | UV0 | _C1 | _C0 | N | RHW },
	/*	52	*/	{	indexed_copy,		 UV1 | UV0 | _C1 | C0 | _N | _RHW },
	/*	53	*/	{	cvbd_assert,		 UV1 | UV0 | _C1 | C0 | _N | RHW },
	/*	54	*/	{	indexed_copy,		 UV1 | UV0 | _C1 | C0 | N | _RHW },
	/*	55	*/	{	cvbd_assert,		 UV1 | UV0 | _C1 | C0 | N | RHW },
	/*	56	*/	{	cvbd_assert,		 UV1 | UV0 | C1 | _C0 | _N | _RHW },
	/*	57	*/	{	cvbd_assert,		 UV1 | UV0 | C1 | _C0 | _N | RHW },
	/*	58	*/	{	cvbd_assert,		 UV1 | UV0 | C1 | _C0 | N | _RHW },
	/*	59	*/	{	cvbd_assert,		 UV1 | UV0 | C1 | _C0 | N | RHW },
	/*	60	*/	{	indexed_copy,		 UV1 | UV0 | C1 | C0 | _N | _RHW },
	/*	61	*/	{	cvbd_assert,		 UV1 | UV0 | C1 | C0 | _N | RHW },
	/*	62	*/	{	indexed_copy,		 UV1 | UV0 | C1 | C0 | N | _RHW },
	/*	63	*/	{	cvbd_assert,		 UV1 | UV0 | C1 | C0 | N | RHW },
	/*	64	*/	{	indexed_copy,		 0 }
};

//
// This is the lookup table for the non-indexed SOA copiers.
//
// NOTE: An underscore before an item signifies that that
// item does NOT exist in the vertex format.  An item WITHOUT
// an underscore signifies that the item DOES exist.
// 
// Note that some entries in the table are invalid and map
// to an assert.
//
extern "C" void sub_6D219C1(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices);
#define unindexed_copy sub_6D2230F
extern "C" void unindexed_copy(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices);
cvbd_entry nonindexed_lookup[] =
{
	/*	0	*/	{	unindexed_copy,	_UV1 | _UV0 | _C1 | _C0 | _N | _RHW },
	/*	1	*/	{	cvbd_assert,	_UV1 | _UV0 | _C1 | _C0 | _N | RHW },
	/*	2	*/	{	unindexed_copy,	_UV1 | _UV0 | _C1 | _C0 | N | _RHW },
	/*	3	*/	{	cvbd_assert,	_UV1 | _UV0 | _C1 | _C0 | N | RHW },
	/*	4	*/	{	unindexed_copy,	_UV1 | _UV0 | _C1 | C0 | _N | _RHW },
	/*	5	*/	{	cvbd_assert,	_UV1 | _UV0 | _C1 | C0 | _N | RHW },
	/*	6	*/	{	unindexed_copy,	_UV1 | _UV0 | _C1 | C0 | N | _RHW },
	/*	7	*/	{	cvbd_assert,	_UV1 | _UV0 | _C1 | C0 | N | RHW },
	/*	8	*/	{	cvbd_assert,	_UV1 | _UV0 | C1 | _C0 | _N | _RHW },
	/*	9	*/	{	cvbd_assert,	_UV1 | _UV0 | C1 | _C0 | _N | RHW },
	/*	10	*/	{	cvbd_assert,	_UV1 | _UV0 | C1 | _C0 | N | _RHW },
	/*	11	*/	{	cvbd_assert,	_UV1 | _UV0 | C1 | _C0 | N | RHW },
	/*	12	*/	{	unindexed_copy,	_UV1 | _UV0 | C1 | C0 | _N | _RHW },
	/*	13	*/	{	cvbd_assert,	_UV1 | _UV0 | C1 | C0 | _N | RHW },
	/*	14	*/	{	unindexed_copy,	_UV1 | _UV0 | C1 | C0 | N | _RHW },
	/*	15	*/	{	cvbd_assert,	_UV1 | _UV0 | C1 | C0 | N | RHW },
	/*	16	*/	{	unindexed_copy,	_UV1 | UV0 | _C1 | _C0 | _N | _RHW },
	/*	17	*/	{	cvbd_assert,	_UV1 | UV0 | _C1 | _C0 | _N | RHW },
	/*	18	*/	{	sub_6D219C1,	_UV1 | UV0 | _C1 | _C0 | N | _RHW }, // beta;sub_6BA6EED release;sub_6D219C1
	/*	19	*/	{	cvbd_assert,	_UV1 | UV0 | _C1 | _C0 | N | RHW },
	/*	20	*/	{	unindexed_copy,	_UV1 | UV0 | _C1 | C0 | _N | _RHW },
	/*	21	*/	{	cvbd_assert,	_UV1 | UV0 | _C1 | C0 | _N | RHW },
	/*	22	*/	{	unindexed_copy,	_UV1 | UV0 | _C1 | C0 | N | _RHW },
	/*	23	*/	{	cvbd_assert,	_UV1 | UV0 | _C1 | C0 | N | RHW },
	/*	24	*/	{	cvbd_assert,	_UV1 | UV0 | C1 | _C0 | _N | _RHW },
	/*	25	*/	{	cvbd_assert,	_UV1 | UV0 | C1 | _C0 | _N | RHW },
	/*	26	*/	{	cvbd_assert,	_UV1 | UV0 | C1 | _C0 | N | _RHW },
	/*	27	*/	{	cvbd_assert,	_UV1 | UV0 | C1 | _C0 | N | RHW },
	/*	28	*/	{	unindexed_copy,	_UV1 | UV0 | C1 | C0 | _N | _RHW },
	/*	29	*/	{	cvbd_assert,	_UV1 | UV0 | C1 | C0 | _N | RHW },
	/*	30	*/	{	unindexed_copy,	_UV1 | UV0 | C1 | C0 | N | _RHW },
	/*	31	*/	{	cvbd_assert,	_UV1 | UV0 | C1 | C0 | N | RHW },
	/*	32	*/	{	cvbd_assert,	 UV1 | _UV0 | _C1 | _C0 | _N | _RHW },
	/*	33	*/	{	cvbd_assert,	 UV1 | _UV0 | _C1 | _C0 | _N | RHW },
	/*	34	*/	{	cvbd_assert,	 UV1 | _UV0 | _C1 | _C0 | N | _RHW },
	/*	35	*/	{	cvbd_assert,	 UV1 | _UV0 | _C1 | _C0 | N | RHW },
	/*	36	*/	{	cvbd_assert,	 UV1 | _UV0 | _C1 | C0 | _N | _RHW },
	/*	37	*/	{	cvbd_assert,	 UV1 | _UV0 | _C1 | C0 | _N | RHW },
	/*	38	*/	{	cvbd_assert,	 UV1 | _UV0 | _C1 | C0 | N | _RHW },
	/*	39	*/	{	cvbd_assert,	 UV1 | _UV0 | _C1 | C0 | N | RHW },
	/*	40	*/	{	cvbd_assert,	 UV1 | _UV0 | C1 | _C0 | _N | _RHW },
	/*	41	*/	{	cvbd_assert,	 UV1 | _UV0 | C1 | _C0 | _N | RHW },
	/*	42	*/	{	cvbd_assert,	 UV1 | _UV0 | C1 | _C0 | N | _RHW },
	/*	43	*/	{	cvbd_assert,	 UV1 | _UV0 | C1 | _C0 | N | RHW },
	/*	44	*/	{	cvbd_assert,	 UV1 | _UV0 | C1 | C0 | _N | _RHW },
	/*	45	*/	{	cvbd_assert,	 UV1 | _UV0 | C1 | C0 | _N | RHW },
	/*	46	*/	{	cvbd_assert,	 UV1 | _UV0 | C1 | C0 | N | _RHW },
	/*	47	*/	{	cvbd_assert,	 UV1 | _UV0 | C1 | C0 | N | RHW },
	/*	48	*/	{	unindexed_copy,	 UV1 | UV0 | _C1 | _C0 | _N | _RHW },
	/*	49	*/	{	cvbd_assert,	 UV1 | UV0 | _C1 | _C0 | _N | RHW },
	/*	50	*/	{	unindexed_copy,	 UV1 | UV0 | _C1 | _C0 | N | _RHW },
	/*	51	*/	{	cvbd_assert,	 UV1 | UV0 | _C1 | _C0 | N | RHW },
	/*	52	*/	{	unindexed_copy,	 UV1 | UV0 | _C1 | C0 | _N | _RHW },
	/*	53	*/	{	cvbd_assert,	 UV1 | UV0 | _C1 | C0 | _N | RHW },
	/*	54	*/	{	unindexed_copy,	 UV1 | UV0 | _C1 | C0 | N | _RHW },
	/*	55	*/	{	cvbd_assert,	 UV1 | UV0 | _C1 | C0 | N | RHW },
	/*	56	*/	{	cvbd_assert,	 UV1 | UV0 | C1 | _C0 | _N | _RHW },
	/*	57	*/	{	cvbd_assert,	 UV1 | UV0 | C1 | _C0 | _N | RHW },
	/*	58	*/	{	cvbd_assert,	 UV1 | UV0 | C1 | _C0 | N | _RHW },
	/*	59	*/	{	cvbd_assert,	 UV1 | UV0 | C1 | _C0 | N | RHW },
	/*	60	*/	{	unindexed_copy,	 UV1 | UV0 | C1 | C0 | _N | _RHW },
	/*	61	*/	{	cvbd_assert,	 UV1 | UV0 | C1 | C0 | _N | RHW },
	/*	62	*/	{	unindexed_copy,	 UV1 | UV0 | C1 | C0 | N | _RHW },
	/*	63	*/	{	cvbd_assert,	 UV1 | UV0 | C1 | C0 | N | RHW },
	/*	64	*/	{	unindexed_copy,	 0 }
};
#undef unindexed_copy

//
// This creates a 6-bit index that serves as a lookup 
// into the copier table.  The resulting 6-bits are
// from the _XYZRHW, _NORMAL, _DIFFUSE, _SPECULAR, and
// the first two bits of the texture coordinate specifier.
//
// The resulting bits are those specified above.
//
inline U32 cvbd_fvf_to_index(U32 vertex_format)
{
	U32 index = 0;

	index |= ((vertex_format >> 8) & 0x03) << 4;	// get uv0 and uv1 bits
	index |= ((vertex_format >> 6) & 0x03) << 2;	// get c0 and c1 bits
	index |= ((vertex_format >> 4) & 0x01) << 1;	// get Normal bit
	index |= ((vertex_format >> 2) & 0x01) << 0;	// get RHW bit

	return index;
}

void copy_vertex_data(void* dst_buffer, U32 dst_vertex_format, VertexBufferDesc* src_vb_desc, U32 start_vertex, U32 num_vertices)
{
	// TODO: put in a bunch of assertion code to make sure formats are compatible.
	// assert that no beta weights are used, only two sets of texture coordinates
	// assert that AOS is not used with INDEXED

	U32 copier_index;

	// create a copier index that will tell us which copy path to take
	// this is based on the vertex format similarity, whether the source is indexed,
	// and whether the source is AOS or SOA
	//
	// NOTE: right now, we actually ignore whether the formats are equal in the SOA
	// cases because the only difference is whether to initialize additional fields in 
	// the destination buffer that do not have data in the source buffer.
	//
	copier_index = (src_vb_desc->vertex_format == dst_vertex_format) ? VBD_F_BIT_ZERO : 0;
	copier_index |= (src_vb_desc->flags & 0x6);

	switch (copier_index) 
	{
	case 0:	// non-indexed, soa, diff format
	{
		unindexed_copy(dst_buffer, dst_vertex_format, src_vb_desc, start_vertex, num_vertices);
		/*auto vertex_format = src_vb_desc->vertex_format;
		if (vertex_format == 274)
		{
			if (dst_vertex_format == 594)
			{
				NOT_IMPLEMENTED;
				//sub_6BA78B5(dst_buffer, 594, src_vb_desc, start_vertex, num_vertices);
				return;
			}
			if (dst_vertex_format == 530)
			{
				NOT_IMPLEMENTED;
				//sub_6BA7D04(dst_buffer, 530, src_vb_desc, start_vertex, num_vertices);
				return;
			}
		}
		else if (vertex_format != 530)
		{
			unindexed_copy(dst_buffer, dst_vertex_format, src_vb_desc, start_vertex, num_vertices);
		}
		else if (dst_vertex_format != 594)
		{
			unindexed_copy(dst_buffer, dst_vertex_format, src_vb_desc, start_vertex, num_vertices);
		}
		else
		{
			NOT_IMPLEMENTED;
			//sub_6BA732C(dst_buffer, 594, src_vb_desc, start_vertex, num_vertices);
		}*/
	}
	break;
	case 1:	// non-indexed, soa, same format
	{
		copier_index = cvbd_fvf_to_index(dst_vertex_format);
		ASSERT(nonindexed_lookup[copier_index].vertex_format == copier_index || copier_index == 64);
		nonindexed_lookup[copier_index].vertex_copier(dst_buffer, dst_vertex_format, src_vb_desc, start_vertex, num_vertices);
	}
	break;

	case 2:	// non-indexed, aos, diff format
		unindexed_copy(dst_buffer, dst_vertex_format, src_vb_desc, start_vertex, num_vertices);
		break;

	case 3:	// non-indexed, aos, same format
	{
		memcpy(
			(char*)dst_buffer + start_vertex * FVF_SIZEOF_VERT(dst_vertex_format),
			(char*)src_vb_desc->Ps.data + src_vb_desc->Ps.stride * start_vertex,
			num_vertices * FVF_SIZEOF_VERT(dst_vertex_format));
	}
	break;

	case 4:	//     indexed, soa, diff format
	case 5:	//     indexed, soa, same format
		copier_index = cvbd_fvf_to_index(dst_vertex_format);
		ASSERT(indexed_lookup[copier_index].vertex_format == copier_index);
		indexed_lookup[copier_index].vertex_copier(dst_buffer, dst_vertex_format, src_vb_desc, start_vertex, num_vertices);
		break;

	case 7:
		indexed_copy(dst_buffer, dst_vertex_format, src_vb_desc, start_vertex, num_vertices);
		break;

	default:
		UNREACHABLE;
	}
}

//

void cvbd_assert(void*, U32, VertexBufferDesc*, U32, U32)
{
	UNREACHABLE;
}

//

void cvbd_i_n_p(void* dst_buffer, U32 dest_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices)
{
	// ASSUMES:
	//
	// *  P and N size and strides are Vector
	// *  MC0 exist in source
	//

	const Vector* const src_P = (Vector*)src_buffer->Ps.data;
	const U32* src_Pi = src_buffer->Ps.indices;

	const Vector* const src_N = (Vector*)src_buffer->Ns.data;
	const U32* src_Ni = src_buffer->Ns.indices;

	struct PN { float x, y, z; float nx, ny, nz; };

	const PN* const dst_end = (PN*)dst_buffer + src_buffer->num_vertices;

	for (PN* dst = (PN*)dst_buffer; dst < dst_end; dst++)
	{
		*((Vector*)&dst->x) = src_P[*src_Pi++];
		*((Vector*)&dst->nx) = src_N[*src_Ni++];
	}
}

//

void cvbd_i_uv0_n_p(void* dst_buffer, U32 dest_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices)
{
	// ASSUMES:
	//
	// *  P and N size and strides are Vector
	// *  MC0 size and stride is 2 floats
	// *  N and MC0 exist in source
	//

	const Vector* const src_P = (Vector*)src_buffer->Ps.data;
	const U32* src_Pi = src_buffer->Ps.indices;

	const Vector* const src_N = (Vector*)src_buffer->Ns.data;
	const U32* src_Ni = src_buffer->Ns.indices;

	struct MCVector { float u, v; };
	const MCVector* const src_MC0 = (MCVector*)src_buffer->MCs[0].data;
	const U32* src_MC0i = src_buffer->MCs[0].indices;

	const D3DVERTEX* const end2 = (D3DVERTEX*)dst_buffer + src_buffer->num_vertices;
	const D3DVERTEX* const end1 = end2 - 3;
	D3DVERTEX* dst;
	for (dst = (D3DVERTEX*)dst_buffer; dst < end1; dst += 4, src_Pi += 4, src_Ni += 4, src_MC0i += 4)
	{
		*((Vector*)&dst[0].x) = src_P[src_Pi[0]];
		*((Vector*)&dst[0].nx) = src_N[src_Ni[0]];
		*((MCVector*)&dst[0].tu) = src_MC0[src_MC0i[0]];

		*((Vector*)&dst[1].x) = src_P[src_Pi[1]];
		*((Vector*)&dst[1].nx) = src_N[src_Ni[1]];
		*((MCVector*)&dst[1].tu) = src_MC0[src_MC0i[1]];

		*((Vector*)&dst[2].x) = src_P[src_Pi[2]];
		*((Vector*)&dst[2].nx) = src_N[src_Ni[2]];
		*((MCVector*)&dst[2].tu) = src_MC0[src_MC0i[2]];

		*((Vector*)&dst[3].x) = src_P[src_Pi[3]];
		*((Vector*)&dst[3].nx) = src_N[src_Ni[3]];
		*((MCVector*)&dst[3].tu) = src_MC0[src_MC0i[3]];
	}
	for (; dst < end2; dst++)
	{
		*((Vector*)&dst->x) = src_P[*src_Pi++];
		*((Vector*)&dst->nx) = src_N[*src_Ni++];
		*((MCVector*)&dst->tu) = src_MC0[*src_MC0i++];
	}
}

//

void cvbd_i_uv0_c0_n_p(void* dst_buffer, U32, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices)
{
	char* dst = (char*)dst_buffer;

	const U32  src_MC0_size = src_buffer->MCs[0].size;

	const U32 src_P_stride = src_buffer->Ps.stride;
	const U32 src_N_stride = src_buffer->Ns.stride;
	const U32 src_C0_stride = src_buffer->C0s.stride;
	const U32 src_MC0_stride = src_buffer->MCs[0].stride;

	const U32* src_Pi = src_buffer->Ps.indices;
	const U32* src_Ni = src_buffer->Ns.indices;
	const U32* src_C0i = src_buffer->C0s.indices;
	const U32* src_MC0i = src_buffer->MCs[0].indices;

	const bool src_N = src_buffer->Ns.indices != NULL;
	const bool src_C0 = src_buffer->C0s.indices != NULL;
	const bool src_MC0 = src_buffer->MCs[0].indices != NULL;

	for (U32 v = 0; v < src_buffer->num_vertices; v++) {

		memcpy(dst, ((char*)src_buffer->Ps.data) + (*src_Pi * src_P_stride), 3 * sizeof(Vector));
		dst += 3 * sizeof(Vector);
		src_Pi++;

		if (src_N) {
			memcpy(dst, ((char*)src_buffer->Ns.data) + (*src_Ni * src_N_stride), 3 * sizeof(Vector));
			src_Ni++;
		}
		dst += 3 * sizeof(Vector);

		if (src_C0) {
			memcpy(dst, ((char*)src_buffer->C0s.data) + (*src_C0i * src_C0_stride), sizeof(U32));
			src_C0i++;
		}
		dst += sizeof(U32);

		if (src_MC0) {
			memcpy(dst, ((char*)src_buffer->MCs[0].data) + (*src_MC0i * src_MC0_stride), src_MC0_size);
			src_MC0i++;
		}
		dst += src_MC0_size;
	}
}

#include <stdio.h>
static void indexed_copy(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices)
{
	U32 has_n_; // ecx
	U32 has_c0_; // edx
	U32* v7; // eax
	U32* v8; // ecx
	U32* v9; // ecx
	int i; // [esp+1Ch] [ebp-E4h]
	U32 strideA; // [esp+20h] [ebp-E0h]
	U32 strideB; // [esp+24h] [ebp-DCh]
	U32 strideC; // [esp+28h] [ebp-D8h]
	U32 strideD; // [esp+2Ch] [ebp-D4h]
	U32* v15; // [esp+64h] [ebp-9Ch]
	U32* end; // [esp+70h] [ebp-90h]
	U32 p_stride; // [esp+74h] [ebp-8Ch]
	void* mc_data[2]; // [esp+78h] [ebp-88h]
	//bool dst_flag_80; // [esp+83h] [ebp-7Dh]
	U32 vertex_stride; // [esp+84h] [ebp-7Ch]
	U32* n_index; // [esp+88h] [ebp-78h]
	bool has_n; // [esp+8Fh] [ebp-71h]
	int need_mc; // [esp+90h] [ebp-70h]
	U32 need_mc_size[8]; // [esp+94h] [ebp-6Ch]
	void* c0_pos; // [esp+B4h] [ebp-4Ch]
	bool dst_flag_40; // [esp+BBh] [ebp-45h]
	U32 mc_stride[2]; // [esp+BCh] [ebp-44h]
	U32* pos; // [esp+C4h] [ebp-3Ch]
	U32 c0_stride; // [esp+C8h] [ebp-38h]
	U32 has_mc_size[2]; // [esp+CCh] [ebp-34h]
	bool dst_flag_10; // [esp+D7h] [ebp-29h]
	void* p_pos; // [esp+D8h] [ebp-28h]
	bool has_c0; // [esp+DFh] [ebp-21h]
	U32* p_index; // [esp+E0h] [ebp-20h]
	void* n_pos; // [esp+E4h] [ebp-1Ch]
	U32* c0_index; // [esp+E8h] [ebp-18h]
	signed int has_n_mcs; // [esp+ECh] [ebp-14h]
	U32 n_stride; // [esp+F0h] [ebp-10h]
	U32* mc_indices[2]; // [esp+F4h] [ebp-Ch]
	signed int mc_id; // [esp+FCh] [ebp-4h]

	GENERAL_NOTICE(TEMPSTR("VertexBufferManager: Using SLOOOW indexed copy. src_fmt=0x%x dst_fmt=0x%x", src_buffer->vertex_format, dst_fmt));
	ASSERT(start_vertex + num_vertices <= src_buffer->num_vertices);
	ASSERT(src_buffer->vertex_format & 0x002);
	p_pos = src_buffer->Ps.data;
	p_index = &src_buffer->Ps.indices[start_vertex];
	p_stride = src_buffer->Ps.stride;
	ASSERT(src_buffer->Ps.size == sizeof(Vector));
	n_pos = src_buffer->Ns.data;
	n_index = &src_buffer->Ns.indices[start_vertex];
	n_stride = src_buffer->Ns.stride;
	has_n_ = src_buffer->vertex_format & 0x10;
	has_n = has_n_ != 0;
	ASSERT(!has_n || src_buffer->Ns.size == sizeof(Vector));
	c0_pos = src_buffer->C0s.data;
	c0_index = &src_buffer->C0s.indices[start_vertex];
	c0_stride = src_buffer->C0s.stride;
	has_c0_ = src_buffer->vertex_format & 0x40;
	has_c0 = has_c0_ != 0;
	ASSERT(!has_c0 || src_buffer->C0s.size == sizeof(U32));
	has_n_mcs = (src_buffer->vertex_format & 0xF00) >> 8;
	ASSERT(has_n_mcs <= VBD_NUM_MC_CHANNELS);
	for (mc_id = 0; mc_id < has_n_mcs; ++mc_id)
	{
		mc_data[mc_id] = src_buffer->MCs[mc_id].data;
		mc_indices[mc_id] = &src_buffer->MCs[mc_id].indices[start_vertex];
		mc_stride[mc_id] = src_buffer->MCs[mc_id].stride;
		has_mc_size[mc_id] = src_buffer->MCs[mc_id].size;
		switch ((src_buffer->vertex_format >> (2 * mc_id + 16)) & 3)
		{
		case 0u:
			ASSERT(has_mc_size[mc_id] == 2 * sizeof(float));
			break;
		case 1u:
			ASSERT(has_mc_size[mc_id] == 3 * sizeof(float));
			break;
		case 2u:
			ASSERT(has_mc_size[mc_id] == 4 * sizeof(float));
			break;
		case 3u:
			ASSERT(has_mc_size[mc_id] == sizeof(float));
			break;
		default:
			UNREACHABLE;
			break;
		}
	}
	dst_flag_10 = (dst_fmt & 0x10) != 0;
	dst_flag_40 = (dst_fmt & 0x40) != 0;
	//dst_flag_80 = (dst_fmt & 0x80) != 0;
	need_mc = (unsigned __int16)(dst_fmt & 0xF00) >> 8;
	for (mc_id = 0; mc_id < need_mc; ++mc_id)
	{
		switch ((dst_fmt >> (2 * mc_id + 16)) & 3)
		{
		case 0u:
			need_mc_size[mc_id] = 8;
			break;
		case 1u:
			need_mc_size[mc_id] = 12;
			break;
		case 2u:
			need_mc_size[mc_id] = 16;
			break;
		case 3u:
			need_mc_size[mc_id] = 4;
			break;
		default:
			UNREACHABLE;
			break;
		}
		ASSERT(need_mc_size[mc_id] == has_mc_size[mc_id] || mc_id >= has_n_mcs);
	}
	strideD = 0;
	if ((dst_fmt & 0xC) == 0xC)
	{
		strideD = 28;
	}
	else if ((dst_fmt & 4) == 4)
	{
		strideD = 16;
	}
	else if ((dst_fmt & 2) == 2)
	{
		strideD = 12;
	}
	strideC = 0;
	if ((dst_fmt & 0x10) != 0)
		strideC = 12;
	strideB = 0;
	if ((dst_fmt & 0x40) != 0)
		strideB = 4;
	if ((dst_fmt & 0x80) != 0)
		strideB += 4;
	strideA = 0;
	for (i = 0; i < (unsigned __int16)(dst_fmt & 0xF00) >> 8; ++i)
	{
		switch ((dst_fmt >> (2 * i + 16)) & 3)
		{
		case 0u:
			strideA += 8;
			break;
		case 1u:
			strideA += 12;
			break;
		case 2u:
			strideA += 16;
			break;
		case 3u:
			strideA += 4;
			break;
		default:
			continue;
		}
	}
	vertex_stride = strideA + strideB + strideC + strideD;
	end = (U32*)((char*)dst_buffer + vertex_stride * (num_vertices + start_vertex));
	for (pos = (U32*)((char*)dst_buffer + vertex_stride * start_vertex);
		pos < end;
		pos = (U32*)((char*)pos + vertex_stride))
	{
		v7 = (U32*)((char*)p_pos + p_stride * *p_index);
		v8 = pos;
		*pos = *v7;
		v8[1] = v7[1];
		v8[2] = v7[2];
		++p_index;
		v15 = pos + 3;
		if (dst_flag_10)
		{
			if (has_n)
			{
				v9 = (U32*)((char*)n_pos + n_stride * *n_index);
				*v15 = *v9;
				v15[1] = v9[1];
				v15[2] = v9[2];
				++n_index;
			}
			v15 += 3;
		}
		if (dst_flag_40)
		{
			if (has_c0)
				*v15 = *(U32*)((char*)c0_pos + c0_stride * *c0_index++);
			++v15;
		}
		for (mc_id = 0; mc_id < need_mc; ++mc_id)
		{
			if (mc_id < has_n_mcs)
				memcpy(v15, (char*)mc_data[mc_id] + mc_stride[mc_id] * *mc_indices[mc_id]++, has_mc_size[mc_id]);
			v15 = (U32*)((char*)v15 + need_mc_size[mc_id]);
		}
	}
}

static void unindexed_copy(void* dst_buffer, U32 dst_fmt, VertexBufferDesc* src_buffer, U32 start_vertex, U32 num_vertices)
{
	U32 has_n_; // edx
	U32 has_c0_; // edx
	int i; // [esp+1Ch] [ebp-D0h]
	U32 strideA; // [esp+20h] [ebp-CCh]
	U32 strideB; // [esp+24h] [ebp-C8h]
	U32 strideC; // [esp+28h] [ebp-C4h]
	U32 strideD; // [esp+2Ch] [ebp-C0h]
	U32* pos2; // [esp+64h] [ebp-88h]
	U32* end; // [esp+70h] [ebp-7Ch]
	U32 p_stride; // [esp+74h] [ebp-78h]
	U32 mc_data[2]; // [esp+78h] [ebp-74h]
	//bool dst_flag_80; // [esp+83h] [ebp-69h]
	U32 vertex_stride; // [esp+84h] [ebp-68h]
	bool has_n; // [esp+8Bh] [ebp-61h]
	int need_mc; // [esp+8Ch] [ebp-60h]
	U32 need_mc_size[8]; // [esp+90h] [ebp-5Ch]
	U32* c0_pos; // [esp+B0h] [ebp-3Ch]
	bool dst_flag_40; // [esp+B7h] [ebp-35h]
	U32 mc_stride[2]; // [esp+B8h] [ebp-34h]
	U32* pos; // [esp+C0h] [ebp-2Ch] MAPDST
	U32 c0_stride; // [esp+C4h] [ebp-28h]
	U32 has_mc_size[2]; // [esp+C8h] [ebp-24h]
	bool dst_flag_10; // [esp+D3h] [ebp-19h]
	U32* p_pos; // [esp+D4h] [ebp-18h] MAPDST
	bool has_c0; // [esp+DBh] [ebp-11h]
	U32* n_pos; // [esp+DCh] [ebp-10h] MAPDST
	signed int has_n_mcs; // [esp+E0h] [ebp-Ch]
	U32 n_stride; // [esp+E4h] [ebp-8h]
	signed int mc_id; // [esp+E8h] [ebp-4h]

	GENERAL_NOTICE(TEMPSTR("VertexBufferManager: Using SLOOOW unindexed copy. src_fmt=0x%x dst_fmt=0x%x", src_buffer->vertex_format, dst_fmt));
	ASSERT(start_vertex + num_vertices <= src_buffer->num_vertices);
	ASSERT(src_buffer->vertex_format & 0x002);
	p_stride = src_buffer->Ps.stride;
	p_pos = (U32*)((char*)src_buffer->Ps.data + p_stride * start_vertex);
	ASSERT(src_buffer->Ps.size == sizeof(Vector));
	n_stride = src_buffer->Ns.stride;
	n_pos = (U32*)((char*)src_buffer->Ns.data + n_stride * start_vertex);
	has_n_ = src_buffer->vertex_format & 0x10;
	has_n = has_n_ != 0;
	ASSERT(!has_n || src_buffer->Ns.size == sizeof(Vector));
	c0_stride = src_buffer->C0s.stride;
	c0_pos = (U32*)((char*)src_buffer->C0s.data + c0_stride * start_vertex);
	has_c0_ = src_buffer->vertex_format & 0x40;
	has_c0 = has_c0_ != 0;
	ASSERT(!has_c0 || src_buffer->C0s.size == sizeof(U32));
	has_n_mcs = (src_buffer->vertex_format & 0xF00) >> 8;// packed variable
	ASSERT(has_n_mcs <= VBD_NUM_MC_CHANNELS);
	for (mc_id = 0; mc_id < has_n_mcs; ++mc_id)
	{
		mc_stride[mc_id] = src_buffer->MCs[mc_id].stride;
		has_mc_size[mc_id] = src_buffer->MCs[mc_id].size;
		mc_data[mc_id] = (U32)src_buffer->MCs[mc_id].data + mc_stride[mc_id] * start_vertex;
		switch ((src_buffer->vertex_format >> (2 * mc_id + 16)) & 3)
		{
		case 0u:
			ASSERT(has_mc_size[mc_id] == 2 * sizeof(float));
			break;
		case 1u:
			ASSERT(has_mc_size[mc_id] == 3 * sizeof(float));
			break;
		case 2u:
			ASSERT(has_mc_size[mc_id] == 4 * sizeof(float));
			break;
		case 3u:
			ASSERT(has_mc_size[mc_id] == sizeof(float));
			break;
		default:
			UNREACHABLE;
			break;
		}
	}
	dst_flag_10 = (dst_fmt & 0x10) != 0;
	dst_flag_40 = (dst_fmt & 0x40) != 0;
	//dst_flag_80 = (dst_fmt & 0x80) != 0;
	need_mc = (unsigned __int16)(dst_fmt & 0xF00) >> 8;
	for (mc_id = 0; mc_id < need_mc; ++mc_id)
	{
		switch ((dst_fmt >> (2 * mc_id + 16)) & 3)
		{
		case 0u:
			need_mc_size[mc_id] = 8;
			break;
		case 1u:
			need_mc_size[mc_id] = 12;
			break;
		case 2u:
			need_mc_size[mc_id] = 16;
			break;
		case 3u:
			need_mc_size[mc_id] = 4;
			break;
		default:
			UNREACHABLE;
			break;
		}
		ASSERT(need_mc_size[mc_id] == has_mc_size[mc_id] || mc_id >= has_n_mcs);
	}
	strideD = 0;
	if ((dst_fmt & 0xC) == 0xC)
	{
		strideD = 28;
	}
	else if ((dst_fmt & 4) == 4)
	{
		strideD = 16;
	}
	else if ((dst_fmt & 2) == 2)
	{
		strideD = 12;
	}
	strideC = 0;
	if ((dst_fmt & 0x10) != 0)
		strideC = 12;
	strideB = 0;
	if ((dst_fmt & 0x40) != 0)
		strideB = 4;
	if ((dst_fmt & 0x80) != 0)
		strideB += 4;
	strideA = 0;
	for (i = 0; i < (unsigned __int16)(dst_fmt & 0xF00) >> 8; ++i)
	{
		switch ((dst_fmt >> (2 * i + 16)) & 3)
		{
		case 0u:
			strideA += 8;
			break;
		case 1u:
			strideA += 12;
			break;
		case 2u:
			strideA += 16;
			break;
		case 3u:
			strideA += 4;
			break;
		default:
			continue;
		}
	}
	vertex_stride = strideA + strideB + strideC + strideD;
	end = (U32*)((char*)dst_buffer + vertex_stride * (num_vertices + start_vertex));
	for (pos = (U32*)((char*)dst_buffer + vertex_stride * start_vertex);
		pos < end;
		pos = (U32*)((char*)pos + vertex_stride))
	{
		*pos = *p_pos;
		pos[1] = p_pos[1];
		pos[2] = p_pos[2];
		p_pos = (U32*)((char*)p_pos + p_stride);
		pos2 = pos + 3;
		if (dst_flag_10)
		{
			if (has_n)
			{
				*pos2 = *n_pos;
				pos2[1] = n_pos[1];
				pos2[2] = n_pos[2];
				n_pos = (U32*)((char*)n_pos + n_stride);
			}
			pos2 += 3;
		}
		if (dst_flag_40)
		{
			if (has_c0)
			{
				*pos2 = *c0_pos;
				c0_pos = (U32*)((char*)c0_pos + c0_stride);
			}
			++pos2;
		}
		for (mc_id = 0; mc_id < need_mc; ++mc_id)
		{
			if (mc_id < has_n_mcs)
			{
				memcpy(pos2, (const void*)mc_data[mc_id], has_mc_size[mc_id]);
				mc_data[mc_id] += mc_stride[mc_id];
			}
			pos2 = (U32*)((char*)pos2 + need_mc_size[mc_id]);
		}
	}
}
