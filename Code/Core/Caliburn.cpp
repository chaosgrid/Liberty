#include "Caliburn.h"

#include <Windows.h>

thread_local int log_index = -1;

static DWORD _tls_eax = TlsAlloc();
static DWORD _tls_ebx = TlsAlloc();
static DWORD _tls_ecx = TlsAlloc();
static DWORD _tls_edx = TlsAlloc();

#define push_pop_impl(push_pop_reg, tls_reg, teb_reg) \
extern "C" register_t NAKED __cdecl _push_##push_pop_reg##_expansion_array() \
{ \
	__asm int3 /* not implemented */ \
	__asm pop teb_reg \
	__asm pop tls_reg \
	__asm popfd \
	__asm ret \
} \
extern "C" register_t NAKED __cdecl _push_##push_pop_reg() \
{ \
	__asm pushfd \
	__asm push tls_reg \
	__asm push teb_reg \
	__asm mov teb_reg, dword ptr fs : [0x18] /* NtCurrentTeb */ \
	__asm mov tls_reg, _tls_##push_pop_reg \
	__asm cmp tls_reg, 64 \
	__asm jge _push_##push_pop_reg##_expansion_array \
	__asm mov dword ptr ds : [teb_reg + tls_reg * 4 + 0x0E10] , push_pop_reg \
	__asm pop teb_reg \
	__asm pop tls_reg \
	__asm popfd \
	__asm ret \
} \
extern "C" register_t NAKED __cdecl _pop_##push_pop_reg##_expansion_array() \
{ \
	__asm int3 /* not implemented */ \
	__asm pop teb_reg \
	__asm pop tls_reg \
	__asm popfd \
	__asm ret \
} \
extern "C" register_t NAKED __cdecl _pop_##push_pop_reg() \
{ \
	__asm pushfd \
	__asm push tls_reg \
	__asm push teb_reg \
	__asm mov teb_reg, dword ptr fs : [0x18] /* NtCurrentTeb */ \
	__asm mov tls_reg, _tls_##push_pop_reg \
	__asm cmp tls_reg, 64 \
	__asm jge _pop_##push_pop_reg##_expansion_array \
	__asm mov  push_pop_reg, dword ptr ds : [teb_reg + tls_reg * 4 + 0x0E10] \
	__asm pop teb_reg \
	__asm pop tls_reg \
	__asm popfd \
	__asm ret \
} \

push_pop_impl(eax, edx, ecx)
push_pop_impl(ebx, eax, edx)
push_pop_impl(ecx, ebx, eax)
push_pop_impl(edx, ecx, ebx)

#undef push_pop_impl

#pragma optimize("", off) // Turn off optimization globally

static unsigned char t;
unsigned char const* read_jump(unsigned char const* const _bytecode, unsigned char const*& jump_destination)
{
	t = *_bytecode;
	unsigned char const* bytecode = _bytecode;
	unsigned char code = *bytecode;
	switch (code)
	{
	case 0xe9u: // jmp rel32
	{
		bytecode += 1;
		int jump_offset = *reinterpret_cast<int const*>(bytecode);
		bytecode += 4;
		jump_destination = bytecode + jump_offset;
		return bytecode;
	}
	break;
	case 0xebu: // jmp rel8
	{
		bytecode += 1;
		int jump_offset = *reinterpret_cast<char const*>(bytecode);
		bytecode += 1;
		jump_destination = bytecode + jump_offset;
		return bytecode;
	}
	break;
	default: __debugbreak(); throw;
	}
}

unsigned char const* read_mov_imm32(unsigned char const* bytecode, unsigned int& imm32)
{
	switch (*bytecode)
	{
	case 0xb8u: // mov eax, imm32
	{
		bytecode += 1;
		imm32 = *reinterpret_cast<unsigned int const*>(bytecode);
		bytecode += 4;
		return bytecode;
	}
	break;
	default: __debugbreak(); throw;
	}
}

#include <stdio.h>

void const* _x = 0;
void const* __AsmFindLabelExport(unsigned char const* const _bytecode, unsigned int const lookup_address)
{
	unsigned char const* start_address;
	unsigned char const* bytecode = read_jump(_bytecode, start_address);

	unsigned char const* table_start;
	bytecode = read_jump(bytecode, table_start);

	unsigned char const* table_end;
	bytecode = read_jump(bytecode, table_end);

	ASSERT(table_start && table_end);
	ASSERT(*table_start == 0x90); // we expect a nop at the start of the table
	ASSERT(*table_end == 0x90); // we expect a nop at the end of the table

	table_start++; // skip nop

	bytecode = table_start;
	while (bytecode < table_end)
	{
		unsigned int key;
		bytecode = read_mov_imm32(bytecode, key);

		key -= 0x80000000u;

		unsigned char const* target;
		bytecode = read_jump(bytecode, target);

		if (key == lookup_address)
		{
			return target;
		}
	}
	ASSERT(*bytecode == 0x90); // sanity check incase we ever get here
	__debugbreak(); throw; // not found
}

extern "C" __declspec(noreturn) void __cdecl __UnreachableTrap(unsigned long address)
{
	__debugbreak();
	printf("Unreachable Code 0x%lX\n", address);
	exit(address);
}

#pragma optimize("", on) // Turn on optimization globally

void __PatchDLLImport(DLL_IMPORT_ENTRY const& dllImportEntry)
{
	ASSERT(dllImportEntry.pszModuleName != nullptr);
	ASSERT(dllImportEntry.pszProcName != nullptr or dllImportEntry.ordinal == -1);
	ASSERT(dllImportEntry.pImportPatch != nullptr);

	HMODULE hModule = LoadLibraryA(dllImportEntry.pszModuleName);
	ASSERT(hModule != NULL);

	FARPROC pProcedure;
	if (dllImportEntry.ordinal == -1)
	{
		pProcedure = GetProcAddress(hModule, dllImportEntry.pszProcName);
	}
	else
	{
		pProcedure = GetProcAddress(hModule, MAKEINTRESOURCEA(dllImportEntry.ordinal));
	}
	ASSERT(pProcedure != NULL);

	FARPROC* ppDestination = reinterpret_cast<FARPROC*>(const_cast<void*>(dllImportEntry.pImportPatch));
	*ppDestination = pProcedure;
}
