#pragma once

#ifndef __RPINDEXBUFFER_H__
#define __RPINDEXBUFFER_H__

#include <DACOM.h>

#include <d3d8types.h>

//--------------------------------------------------------------------------//
//---------------------------IRPIndexBuffer Interface-----------------------//
//--------------------------------------------------------------------------//

typedef struct IRPIndexBuffer* LPRPINDEXBUFFER;
typedef void* IRP_INDEXBUFFERHANDLE;

#define IID_IRPIndexBuffer DACOM_MAKE_IID("IRPIndexBuffer")
struct DACOM_NO_VTABLE IRPIndexBuffer : public IDAComponent
{
	// IDAComponent methods

	DACOM_DEFMETHOD(QueryInterface)(const C8* interface_name, void** instance) = 0;
	DACOM_DEFMETHOD_(U32, AddRef)(void) = 0;
	DACOM_DEFMETHOD_(U32, Release)(void) = 0;

	// IRPIndexBuffer methods

	DACOM_DEFMETHOD(create_index_buffer)(U32 count, IRP_INDEXBUFFERHANDLE* out_ibhandle, BYTE flags);
	DACOM_DEFMETHOD(destroy_index_buffer)(IRP_INDEXBUFFERHANDLE ibhandle);
	DACOM_DEFMETHOD(create_ib)(IRP_INDEXBUFFERHANDLE ibhandle, U32 count);
	DACOM_DEFMETHOD(copy_indices)(IRP_INDEXBUFFERHANDLE ibhandle, U32* offset, void* data, U32 count);
	DACOM_DEFMETHOD(lock_ib)(IRP_INDEXBUFFERHANDLE ibhandle, U32* offset, void** locked_data, U32 count);
	DACOM_DEFMETHOD(unlock_ib)(IRP_INDEXBUFFERHANDLE ibhandle);
	DACOM_DEFMETHOD(select_ib)(IRP_INDEXBUFFERHANDLE ibhandle, UNKNOWN a3, UNKNOWN a4, UNKNOWN a5);
	DACOM_DEFMETHOD(get_ib_count)(IRP_INDEXBUFFERHANDLE ibhandle, U32* out_count);
	DACOM_DEFMETHOD_(BOOL32, is_ib_valid)(IRP_INDEXBUFFERHANDLE ibhandle);
};

#endif
