#pragma once

#include <Core/Core.h>

#include <stdio.h>

#ifdef __INTELLISENSE__
#define NAKED __declspec(naked)
#else
#define NAKED __attribute__((naked))
#endif

//#define ASM_EXPORTS_HEADER() \
//__asm jmp __start \
//__asm cmp eax, offset _exports_start \
//__asm cmp eax, offset _exports_end \
//__asm __start: 
#define ASM_EXPORTS_HEADER() \
__asm jmp __start \
__asm jmp _exports_start \
__asm jmp _exports_end \
__asm __start: 
//#define ASM_EXPORT_ENTRY(index, lbl) __asm mov dword ptr [eax + 0x80000000 + index], offset lbl
#define ASM_EXPORT_ENTRY(index, lbl) __asm mov eax, 0x80000000 + index __asm jmp lbl
#define __ASM_EXPORTS_START __asm _exports_start : nop
#define __ASM_EXPORTS_END __asm _exports_end : nop
#define ASM_EXPORT_ENTRY_FIRST(index, lbl) __ASM_EXPORTS_START ASM_EXPORT_ENTRY(index, lbl)
#define ASM_EXPORT_ENTRY_LAST(index, lbl) ASM_EXPORT_ENTRY(index, lbl) __ASM_EXPORTS_END
#define ASM_EXPORT_ENTRY_SINGLE(index, lbl) __ASM_EXPORTS_START ASM_EXPORT_ENTRY(index, lbl) __ASM_EXPORTS_END

#define CLANG_FORWARD_PROC_SYMBOL(symbol) extern "C" void _##symbol();
#define CLANG_FORWARD_JUMP_SYMBOL(symbol) extern "C" void const* const _##symbol;

#define ALTNAME(_internal, _public) __pragma(comment(linker, "/alternatename:_"#_public"=_"#_internal))
#define PROC_DECLARE(address, _internal, _public) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Wunused-variable\"") \
const char* _unique_##address = #address; \
static char PROC_DECLARED_MULTIPLE_TIMES; \
ALTNAME(_internal, _public) \
_Pragma("clang diagnostic pop")

#define UNREACHABLE_TRAP(address) __asm int 3 __asm push address __asm call __UnreachableTrap
extern "C" __declspec(noreturn) void __cdecl __UnreachableTrap(unsigned long address);

// assembly fixup
#define FIXUP
// jump table fixup
#define JMPTB
// label
#define LABEL

#define register_t void*
#define unknown_args_t ...
typedef register_t(*_proc_t)(unknown_args_t);
#define proc_t _proc_t

#define push_pop_impl(push_pop_reg, tls_reg, teb_reg) \
extern "C" register_t NAKED __cdecl _push_##push_pop_reg(); \
extern "C" register_t NAKED __cdecl _pop_##push_pop_reg();

push_pop_impl(eax, edx, ecx)
push_pop_impl(ebx, eax, edx)
push_pop_impl(ecx, ebx, eax)
push_pop_impl(edx, ecx, ebx)

#undef push_pop_impl

#ifdef __INTELLISENSE__
#define __thiscall
#endif



#define COERCE_FUNCTION(type, pointer) reinterpret_cast<decltype(&type)>(reinterpret_cast<void*>(&pointer))
#define SIMPLE_TRAMPOLINE(trampoline_symbol) \
__asm push eax \
__asm lea eax, __trampoline_##__LINE__ \
__asm mov trampoline_symbol##_ptr, eax \
__asm pop eax \
__asm jmp trampoline_symbol \
__asm __trampoline_##__LINE__: nop

extern void const* __AsmFindLabelExport(unsigned char const* bytecode, unsigned int lookup_address);
extern void* __RelativeAddress(int offset);

extern thread_local int log_index;
#define debug_point { static int _debug_point; (void)(_debug_point++); } 

// NOTE: This exists because we can't directly
// use an address of something at the moment due
// to the compiler being a stupid turd and
// rearranging the sections based on pointers to
// members
// TODO:
// * Move all address lookups into a new export
//   eg. char data_0000;
//       void* ptr_data_0000 = &data_0000;
//   These addresses shouldn't end up needing to worry about
//   using a #pragma init_seg statement and should be part of
//   the relocation information
// * Then shove this pointer a function trampoline. Maybe
//   it might not even need the trampoline.
//   eg. void* trampoline(void* ptr) { return ptr; }
template<typename t_type>
void* __TRelativeAddress(int offset)
{
	return __RelativeAddress(offset);
}
#define _RelativeAddress(label, offset) __TRelativeAddress<decltype(label)>(offset)


template<typename t_func>
void const* __AsmFindLabelExport(t_func* function, unsigned int lookup_address)
{
	unsigned char const* bytecode = reinterpret_cast<unsigned char const*>(function);
	return __AsmFindLabelExport(bytecode, lookup_address);
}

struct ADDRESS_ENTRY
{
	int offset;
	bool isPointerToPointer;
	void const* address;
};

struct DLL_IMPORT_ENTRY
{
	char const* pszModuleName;
	char const* pszProcName;
	int ordinal;
	void const* pImportPatch;
};

extern void __PatchDLLImport(DLL_IMPORT_ENTRY const& dllImportEntry);
