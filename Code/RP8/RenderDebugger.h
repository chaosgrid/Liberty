// RenderDebugger.h
//
//
//

#ifndef __RenderDebugger_h__
#define __RenderDebugger_h__

//

#include <ddraw.h>

//

#include "DACOM.h"
#include "FDump.h"
#include "RenderPipeline.h"
//#include "IRenderDebugger.h"
#include "StateInfo.h"

typedef U32 IRD_STATETYPE;

const IRD_STATETYPE IRD_ST_TEXTURE = (1 << 0);	// textures
const IRD_STATETYPE IRD_ST_TEXTURE_STATE = (1 << 1);	// texture state
const IRD_STATETYPE IRD_ST_TEXTURE_TRANSFORM = (1 << 2);	// texture transforms
const IRD_STATETYPE IRD_ST_TRANSFORM = (1 << 3);	// world, view, projection, and viewport transforms
const IRD_STATETYPE IRD_ST_PRIMITIVE = (1 << 4);	// dp, dip, dpvb, dipvb
const IRD_STATETYPE IRD_ST_LIGHT = (1 << 5);	// light and light enable values 
const IRD_STATETYPE IRD_ST_RENDER_STATE = (1 << 6);	// render state
const IRD_STATETYPE IRD_ST_TEXTURE_DATA = (1 << 7);	// save texture data to .dds files

const IRD_STATETYPE IRD_ST_OFF = 0;						// no state
const IRD_STATETYPE IRD_ST_ALL = 0xFFFFFFFF;			// all state
const IRD_STATETYPE IRD_ST_MOST = ~(IRD_ST_TEXTURE_DATA);// most useful stuff






#ifdef _DEBUG
#define RP_RD_DEBUG 1
#else
#define RP_RD_DEBUG 0
#endif

#if RP_RD_DEBUG

//

void rp_rd_init						( RenderStateArray *rs_info, TextureStageStateArray *tss_info );
void rp_rd_cleanup					( void );

IRD_STATETYPE rp_rd_set_trace_enable( IRD_STATETYPE state_traces ) ;
void rp_rd_set_trace_output_dir		( const char *directory );
void rp_rd_add_trace_message		( const char *fmt, ... ) ;
void rp_rd_begin_trace_section		( const char *key ) ;
void rp_rd_end_trace_section		( void ) ;
void rp_rd_clear_trace_capture		( void ) ;
void rp_rd_save_trace_capture		( const char *filename ) ;	// requires tracing to be enabled

void rp_rd_set_frustum_view_enable	( bool onoff ) ;
void rp_rd_set_frustum_view_options	( void ) ;

void rp_rd_set_sb_delay				( float milliseconds ) ;	// swap_buffers(), <0.0 means pause
void rp_rd_set_dp_delay				( float milliseconds ) ;	// draw_*_primitive_*(), <0.0 means pause

void rp_rd_save_surface_dds			( const char *filename, LPDIRECT3DBASETEXTURE8 surface ) ;
void rp_rd_save_surface_bmp			( const char *filename, LPDIRECT3DBASETEXTURE8 surface ) ;
void rp_rd_save_screen_capture		( const char *filename, LPDIRECT3DBASETEXTURE8 render_target, bool at_next_swap_buffers ) ;

void rp_rd_begin_pick_2d			( void ) ;
void rp_rd_pick_2d					( float screen_pt_x, float screen_y, bool render_triangle ) ;
void rp_rd_end_pick_2d				( void ) ;

void rp_rd_clear_prim_counts		( void );
void rp_rd_get_prim_counts			( U32 *out_dp_calls, U32 *out_dp_prims, U32 *out_dip_calls, U32 *out_dip_prims, U32 *out_dp_vb_calls, U32 *out_dp_vb_prims, U32 *out_dip_vb_calls, U32 *out_dip_vb_prims );

void rp_rd_create_buffers			( U32 width, U32 height, U32 color_bpp, U32 depth_bpp, U32 stencil_bpp );
void rp_rd_clear					( D3DRECT *rect, U32 flags, U32 color, float depth, U32 stencil );
void rp_rd_begin_scene				( void );
void rp_rd_end_scene				( void );
void rp_rd_viewport					( const D3DVIEWPORT8 *value );
void rp_rd_ortho					( float left, float right, float bottom, float top, float nearval, float farval );
void rp_rd_perspective				( float fovy, float aspect, float znear, float zfar );
void rp_rd_transform				( D3DTRANSFORMSTATETYPE which, const D3DMATRIX *value );
void rp_rd_render_state				( D3DRENDERSTATETYPE state, U32 value );
void rp_rd_texture					( U32 stage, LPDIRECT3DBASETEXTURE8 texture );
void rp_rd_texture_state			( U32 stage, D3DTEXTURESTAGESTATETYPE state, U32 value );
void rp_rd_light					( IRP_LIGHTHANDLE handle, const D3DLIGHT8 *value );
void rp_rd_light_enable				( IRP_LIGHTHANDLE handle, U32 value );
void rp_rd_material					( const D3DMATERIAL8 *value );
void rp_rd_dp						( D3DPRIMITIVETYPE type, U32 vertex_format, const void *verts, int num_verts, U32 flags  ) ;
void rp_rd_dp_vb					( D3DPRIMITIVETYPE type, IRP_VERTEXBUFFERHANDLE vb_handle, U32 start_vert, U32 num_verts, U32 flags  ) ;
void rp_rd_dip						( D3DPRIMITIVETYPE type, U32 vertex_format, const void *verts, int num_verts, const U16 * indices, U32 num_indices, U32 flags  ) ;
void rp_rd_dip_vb					( D3DPRIMITIVETYPE type, IRP_VERTEXBUFFERHANDLE vb_handle, U32 start_vert, U32 num_verts, const U16 * indices, U32 num_indices, U32 flags  ) ;
void rp_rd_swap						( void );

#else

inline void rp_rd_init						( RenderStateArray *rs_info, TextureStageStateArray *tss_info ) {}
inline void rp_rd_cleanup					( void ) {}
inline void rp_rd_set_trace_enable			( bool onoff )  {}
inline void rp_rd_set_trace_output_dir		( const char *directory ) {}
inline void rp_rd_add_trace_message			( const char *fmt, ... )  {}
inline void rp_rd_begin_trace_section		( const char *key )  {}
inline void rp_rd_end_trace_section			( void )  {}
inline void rp_rd_clear_trace_capture		( void ) {}
inline void rp_rd_save_trace_capture		( const char *filename )  {}
inline void rp_rd_set_frustum_view_enable	( bool onoff )  {}
inline void rp_rd_set_frustum_view_options	( void )  {}
inline void rp_rd_set_sb_delay				( float milliseconds )  {}
inline void rp_rd_set_dp_delay				( float milliseconds )  {}
inline void rp_rd_save_surface_dds			( const char *filename, LPDIRECT3DBASETEXTURE8 surface ) {}
inline void rp_rd_save_surface_bmp			( const char *filename, LPDIRECT3DBASETEXTURE8 surface ) {}
inline void rp_rd_save_screen_capture		( const char *filename, LPDIRECT3DBASETEXTURE8 render_target, bool at_next_swap_buffers ) {}
inline void rp_rd_begin_pick_2d				( void )  {}
inline void rp_rd_pick_2d					( float screen_pt_x, float screen_y, bool render_triangle )  {}
inline void rp_rd_end_pick_2d				( void )  {}
inline void rp_rd_clear_prim_counts			( void ) {}
inline void rp_rd_get_prim_counts			( U32 *out_dp_calls, U32 *out_dp_prims, U32 *out_dip_calls, U32 *out_dip_prims, U32 *out_dp_vb_calls, U32 *out_dp_vb_prims, U32 *out_dip_vb_calls, U32 *out_dip_vb_prims ) {}
inline void rp_rd_create_buffers			( U32 width, U32 height, U32 color_bpp, U32 depth_bpp, U32 stencil_bpp ) {}
inline void rp_rd_clear						( D3DRECT *rect, U32 flags, U32 color, float depth, U32 stencil ) {}
inline void rp_rd_begin_scene				( void ) {}
inline void rp_rd_end_scene					( void ) {}
inline void rp_rd_viewport					( const D3DVIEWPORT8 *value ) {}
inline void rp_rd_ortho						( float left, float right, float bottom, float top, float nearval, float farval ) {}
inline void rp_rd_perspective				( float fovy, float aspect, float znear, float zfar ) {}
inline void rp_rd_transform					( D3DTRANSFORMSTATETYPE which, const D3DMATRIX *value ) {}
inline void rp_rd_render_state				( D3DRENDERSTATETYPE state, U32 value ) {}
inline void rp_rd_texture					( U32 stage, LPDIRECT3DBASETEXTURE8 texture ) {}
inline void rp_rd_texture_state				( U32 stage, D3DTEXTURESTAGESTATETYPE state, U32 value ) {}
inline void rp_rd_light						( IRP_LIGHTHANDLE handle, const D3DLIGHT8 *value ) {}
inline void rp_rd_light_enable				( IRP_LIGHTHANDLE handle, U32 value ) {}
inline void rp_rd_material					( const D3DMATERIAL8 *value ) {}
inline void rp_rd_dp						( D3DPRIMITIVETYPE type, U32 vertex_format, const void *verts, int num_verts, U32 flags  )  {}
inline void rp_rd_dp_vb						( D3DPRIMITIVETYPE type, IRP_VERTEXBUFFERHANDLE vb_handle, U32 start_vert, U32 num_verts, U32 flags  )  {}
inline void rp_rd_dip						( D3DPRIMITIVETYPE type, U32 vertex_format, const void *verts, int num_verts, const U16 * indices, U32 num_indices, U32 flags  )  {}
inline void rp_rd_dip_vb					( D3DPRIMITIVETYPE type, IRP_VERTEXBUFFERHANDLE vb_handle, U32 start_vert, U32 num_verts, const U16 * indices, U32 num_indices, U32 flags  )  {}
inline void rp_rd_swap						( void ) {}

#endif // RP_RD_DEBUG

//

const char *rp_rd_ddmessage( HRESULT error );

//

#endif // EOF

