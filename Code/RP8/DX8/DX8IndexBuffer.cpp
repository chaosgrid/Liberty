/* ---------- headers */

#include "DX8IndexBuffer.h"

/* ---------- public code */

#define HRESULT_GET_ERROR_STRING(...) 0

DX8IndexBuffer::DX8IndexBuffer() :
	usage(),
	buffer(),
	lockptr(),
	unknownC(),
	unknown10(),
	ring_index(),
	element_count()
{

}

HRESULT DX8IndexBuffer::create_ib(IDirect3DDevice8* direct3d_device, U32 num_indices)
{
	HRESULT hr = E_FAIL;
	// If we already have a buffer and it’s the right size, nothing to do
	if (buffer && num_indices == element_count)
	{
		hr = GR_OK;  // indicate success without reallocating
	}
	else
	{
		// If a buffer exists but the size is different, free the old one first
		if (buffer && num_indices != element_count)
		{
			dispose();
		}

		// Remember how many indices we need
		element_count = num_indices;
		// Clear any previous lock state
		lockptr = nullptr;
		// Reset ring index
		ring_index = 0;

		// Calculate total byte size (U16 is 2 bytes)
		UINT length = sizeof(U16) * num_indices;

		// Try to create a new D3D index buffer
		hr = direct3d_device->CreateIndexBuffer(
			length,                // size in bytes
			usage,                 // usage flags (e.g. dynamic)
			D3DFMT_INDEX16,        // 16-bit index format
			D3DPOOL_DEFAULT,       // memory pool
			&buffer                // out: new buffer pointer
		);

		// If creation failed, log an error and return a generic failure
		if (FAILED(hr))
		{
			GENERAL_ERROR(TEMPSTR("%s couldn't create ib (err:%s) %d bytes", __FUNCTION__, HRESULT_GET_ERROR_STRING(hr), length));
			hr = GR_GENERIC;
		}
	}

	return hr;  // S_OK / GR_OK on success, error code on failure
}

HRESULT DX8IndexBuffer::dispose()
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
				GENERAL_WARNING(TEMPSTR("index buffer released with %u references", refcount));
			}
			buffer = nullptr;  // mark as disposed
		}
	}

	return hr;  // S_OK on full disposal, or error from Unlock()
}

HRESULT DX8IndexBuffer::lock_ib(
	U32 dst_index,                  // Starting index in the buffer where new indices will be written
	U32 num_indices,                // Number of indices the caller wants to write
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
		// Warn if the caller requests more indices than the buffer can hold
		if (num_indices > element_count)
		{
			GENERAL_WARNING(TEMPSTR("index buffer doesn't have enough indices (%d) to render passed info (%d)", element_count, num_indices));
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
				if (num_indices + ring_index <= element_count)
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

			// Compute byte offset and size to lock based on 16-bit indices
			UINT offset_to_lock = sizeof(U16) * dst_index;
			UINT size_to_lock = sizeof(U16) * num_indices;

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
				ring_index = dst_index + num_indices;
			}
		}
	}

	// Return the D3D lock result (S_OK on success, error code on failure)
	return hr;
}

HRESULT DX8IndexBuffer::unlock_ib()
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
