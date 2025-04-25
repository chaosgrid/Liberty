/* ---------- headers */

#include "DX8VertexBuffer.h"
#include "FVF.h"

/* ---------- public code */

#define HRESULT_GET_ERROR_STRING(...) 0

DX8VertexBuffer::DX8VertexBuffer(DWORD _usage) :
	usage(_usage | D3DUSAGE_WRITEONLY),
	vertex_format(),
	element_count(),
	ring_index(),
	lockptr(),
	unknown14(),
	unknown18(),
	unknown1C(),
	buffer()
{

}

HRESULT DX8VertexBuffer::create_vb(IDirect3DDevice8* direct3d_device, U32 format, U32 num_verts)
{
	HRESULT hr;
	// If we already have a buffer and it’s the right size, nothing to do
	if (buffer && num_verts == element_count && format == vertex_format)
	{
		hr = S_OK;  // indicate success without reallocating
	}
	else
	{
		// If a buffer exists but the size is different, free the old one first
		if (buffer && num_verts != element_count)
		{
			dispose();
		}

		// Remember the vertex format
		vertex_format = format;
		// Remember how many vertices required
		element_count = num_verts;
		// Clear any previous lock state
		lockptr = nullptr;
		// Reset ring index
		ring_index = 0;

		// #TODO What are these? Is one of these ring index?
		unknown1C = 0;

		// Calculate total byte size
		U32 stride = FVF_SIZEOF_VERT(vertex_format);
		UINT length = stride * num_verts;

		// Try to create a new D3D vertex buffer
		// If creation failed, log an error and return a generic failure
		if (FAILED(hr = direct3d_device->CreateVertexBuffer(
			length,
			usage,
			format,
			D3DPOOL_DEFAULT,
			&buffer)))
		{
			GENERAL_ERROR(TEMPSTR("%s couldn't create ib (err:%s) %d bytes", __FUNCTION__, HRESULT_GET_ERROR_STRING(hr), length));
		}
	}

	return hr;  // S_OK / GR_OK on success, error code on failure
}

HRESULT DX8VertexBuffer::dispose()
{
	HRESULT hr = S_OK;

	// Only dispose if we have an existing buffer
	if (buffer)
	{
		// If it's currently locked, unlock it first
		if (lockptr)
		{
			lockptr = nullptr;
			hr = buffer->Unlock();
		}

		// If unlock succeeded (or wasn’t needed), release the COM object
		if (SUCCEEDED(hr))
		{
			U32 refcount = buffer->Release();
			// Warn if Release() didn’t actually destroy the object
			if (refcount > 0)
			{
				GENERAL_WARNING(TEMPSTR("vertex buffer released with %u references", refcount));
			}
			buffer = nullptr;  // mark as disposed
		}
	}

	return hr;  // S_OK on full disposal, or error from Unlock()
}

HRESULT DX8VertexBuffer::lock_vb(
	U32 dst_index,                  // Starting index in the buffer where new indices will be written
	U32 num_verts,                // Number of indices the caller wants to write
	void*& out_data,             // Receives pointer to the locked memory region
	U32* out_start_index,           // Receives the actual start index used (after dynamic ring handling)
	bool syslock)                   // Whether to use a system-lock (D3DLOCK_NOSYSLOCK) hint
{
	// Ensure we have a valid D3D index buffer and that it's not already locked
	ASSERT(buffer != nullptr);
	ASSERT(lockptr == nullptr);

	HRESULT hr = E_FAIL;
	// Only proceed if the buffer exists and isn't already locked
	if (buffer != nullptr && lockptr == nullptr)
	{
		// Warn if the caller requests more verts than the buffer can hold
		if (num_verts > element_count)
		{
			GENERAL_WARNING(TEMPSTR("vertex buffer doesn't have enough verts (%d) to hold requested locked verts (%d)", element_count, num_verts));
		}
		else
		{
			DWORD lock_flags = 0;

			// If caller requested a system-lock hint, set that flag
			if (syslock)
			{
				lock_flags |= D3DLOCK_NOSYSLOCK;
			}

			// Handle dynamic buffers using a ring (circular) allocation strategy
			if (usage & D3DUSAGE_DYNAMIC)
			{
				// For dynamic buffers we always start from ring_index==0 on first lock
				ASSERT(dst_index == 0);

				// If there's room remaining from the current ring position...
				if (num_verts + ring_index <= element_count)
				{
					// ...we append (no overwrite) and start at ring_index
					lock_flags |= D3DLOCK_NOOVERWRITE;
					dst_index = ring_index;
				}
				else
				{
					// ...otherwise discard the entire buffer and start over at zero
					lock_flags |= D3DLOCK_DISCARD;
					ring_index = 0;
					dst_index = 0;
				}
			}

			// Calculate total byte size
			U32 stride = FVF_SIZEOF_VERT(vertex_format);

			// Compute byte offset and size to lock
			UINT offset_to_lock = stride * dst_index;
			UINT size_to_lock = stride * num_verts;

			// Attempt to lock the buffer region
			hr = buffer->Lock(offset_to_lock, size_to_lock, &lockptr, lock_flags);
			if (SUCCEEDED(hr))
			{
				// If requested, inform the caller of the actual start index used
				if (out_start_index)
				{
					*out_start_index = dst_index;
				}
				// Give the caller the pointer to the locked memory
				out_data = lockptr;

				// Advance ring_index so next lock (with NOOVERWRITE) appends after this block
				ring_index = dst_index + num_verts;
			}
		}
	}

	// Return the D3D lock result (S_OK on success, error code on failure)
	return hr;
}

HRESULT DX8VertexBuffer::unlock_vb()
{
	// Release the lock on the D3D index buffer
	HRESULT hr = buffer->Unlock();

	// Verify that Unlock succeeded
	ASSERT(SUCCEEDED(hr));

	if (SUCCEEDED(hr))
	{
		// Clear internal pointer to indicate no region is locked
		lockptr = nullptr;
	}

	// Propagate the HRESULT back to the caller
	return hr;
}
