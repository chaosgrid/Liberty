#include <stdint.h>
#include <Windows.h>
#include <assert.h>
#include <stdio.h>
#undef assert
#ifdef _DEBUG
#define ASSERT(expression) ((void)((!!(expression)) || (__debugbreak(), _wassert(_CRT_WIDE(#expression), _CRT_WIDE(__FILE__), (unsigned)(__LINE__)), 0)))
#else
#define ASSERT(expression) ((void)((!!(expression)) || (__debugbreak(), 0)))
#endif
#define FATAL(expression) ASSERT(! #expression)

static int debug_point;
#define debug_point (void)(debug_point++, debug_point)

#include "Dump.h"

extern "C"
{
	extern rva32_t __num_symbol_data_rva;
	extern rva32_t __symbol_data_rva[];
	extern void* __symbol_data_ptr[];
	extern rva32_t __num_symbol_func_rva;
	extern rva32_t __symbol_func_rva[];
	extern void* __symbol_func_ptr[];
	extern size_t __base_address;

	void* __search(rva32_t __num_symbol_rva, rva32_t* __symbol_rva, void** __symbol_ptr, va64_t va)
	{
		rva32_t rva = static_cast<rva32_t>(va - __base_address);

		rva32_t low = 0;
		rva32_t high = __num_symbol_rva;

		while (low < high)
		{
			rva32_t mid = low + (high - low) / 2;
			if (__symbol_rva[mid] == rva)
			{
				// Found the RVA, return the corresponding pointer
				char* ptr = static_cast<char*>(__symbol_ptr[mid]);
				return ptr;
			}
			else if (__symbol_rva[mid] < rva)
			{
				// Search in the upper half
				low = mid + 1;
			}
			else
			{
				// Search in the lower half
				high = mid;
			}
		}

		//for (rva32_t i = 0; i < __num_symbol_rva; i++)
		//{
		//	if (__symbol_rva[i] == rva)
		//	{
		//		asm("int3");
		//	}
		//}

		// If not found, return NULL
		return NULL;
	}

	void* __ptr(va64_t va, int offset)
	{
		void* ptr = __search(__num_symbol_data_rva, __symbol_data_rva, __symbol_data_ptr, va);
		//ASSERT(ptr != nullptr);
		void* result = static_cast<char*>(ptr) + offset;
		return result;
	}

	rva32_t __rva(va64_t va, int offset)
	{
		void* ptr = __ptr(va, offset);
		rva32_t rva = static_cast<rva32_t>(reinterpret_cast<intptr_t>(ptr) - reinterpret_cast<intptr_t>(&__ImageBase));
		return rva;
	}

	void* __ptr_func(va64_t va, int offset)
	{
		void* ptr = __search(__num_symbol_func_rva, __symbol_func_rva, __symbol_func_ptr, va);
		if (offset == 0)
		{
			return ptr;
		}
		debug_point;
		return nullptr; // todo
		throw;
	}

	rva32_t __rva_func(va64_t va, int offset)
	{
		void* ptr = __ptr_func(va, offset);
		rva32_t rva = static_cast<rva32_t>(reinterpret_cast<intptr_t>(ptr) - reinterpret_cast<intptr_t>(&__ImageBase));
		if (offset == 0)
		{
			return rva;
		}
		debug_point;
		return 0xBEEFBEEF; // todo
		throw;
	}

	void* __imp(const char* module_name, const char* proc_name)
	{
		FARPROC proc = NULL;
		HMODULE module_handle = LoadLibraryA(module_name);
		if (module_handle == NULL)
		{
			printf("Import> Failed to load library '%s'\n", module_name);
		}
		else
		{
			proc = GetProcAddress(module_handle, proc_name);
			if (proc == NULL)
			{
				printf("Import> Failed to get procedure '%s' in '%s'\n", proc_name, module_name);
			}
		}
		return reinterpret_cast<void*>(proc);
	}

	void* __ord(const char* module_name, uint32_t ordinal)
	{
		FARPROC proc = NULL;
		HMODULE module_handle = LoadLibraryA(module_name);
		if (module_handle == NULL)
		{
			printf("Ordinal> Failed to load library '%s'\n", module_name);
		}
		else
		{
			proc = GetProcAddress(module_handle, MAKEINTRESOURCEA(ordinal));
			if (proc == NULL)
			{
				printf("Ordinal> Failed to get procedure %u in '%s'\n", ordinal, module_name);
			}
		}
		return reinterpret_cast<void*>(proc);
	}

	int __jmptblfixup(void* func)
	{
		char* data = static_cast<char*>(func);

#ifdef _WIN64
		if (*data == 0xE9i8)// jmp rel32
		{
			data += 5;
		}
		else if (*data == 0xEBi8)// jmp rel8
		{
			data += 2;
		}
		else FATAL("Unsupported instruction");
#else
		FATAL("Unsupported instruction");
#endif

		intptr_t imagebase = reinterpret_cast<intptr_t>(&__ImageBase);
		rva32_t imagebase_low = static_cast<rva32_t>(imagebase);

		rva32_t jump_table_low = *reinterpret_cast<rva32_t*>(data);
		intptr_t jump_table = static_cast<intptr_t>(imagebase & 0xFFFFFFFF00000000) | jump_table_low;

		rva32_t* const jump_table_start = reinterpret_cast<rva32_t*>(jump_table);


		size_t jump_table_size = 0;
		for (rva32_t* jump_table = jump_table_start; *jump_table != 0xCCCCCCCC; jump_table++)
		{
			jump_table_size += sizeof(rva32_t);
			debug_point;
		}

		// Change protection of the memory region containing 'data' to PAGE_READWRITE
		DWORD oldProtect;
		if (VirtualProtect(jump_table_start, jump_table_size, PAGE_EXECUTE_READWRITE, &oldProtect)) {

			for (rva32_t* jump_table = jump_table_start; *jump_table != 0xCCCCCCCC; jump_table++)
			{
				*jump_table -= imagebase_low;
				debug_point;
			}

			VirtualProtect(jump_table_start, jump_table_size, oldProtect, &oldProtect);
		}

		debug_point;
		return 0;
	}

	long long last_chunk[4] = {};

	void _set_last_chunk(size_t address)
	{
		printf("%llX\n", address);
	}
	_naked void __set_last_chunk()
	{
#ifdef _WIN64
		asm("push %rcx;");
		asm("push %rdx;");
		asm("push %r8;");
		asm("push %r9;");
		asm("mov %rax, %rcx;");
		asm("call _set_last_chunk;");
		asm("pop %r9;");
		asm("pop %r8;");
		asm("pop %rdx;");
		asm("pop %rcx;");
#endif
		asm("ret;");
	}
}
