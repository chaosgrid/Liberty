#pragma once

//#define LDATA
#define todo_assembly_chunk

#define rva32_t unsigned int
#define va64_t long long

extern "C"
{
	extern void* __imp(const char* module_name, const char* proc_name);
	extern void* __ord(const char* module_name, unsigned int ordinal);
	extern void* __ptr(va64_t va, int offset);
	extern rva32_t __rva(va64_t va, int offset);
	extern void* __ptr_func(va64_t va, int offset);
	extern rva32_t __rva_func(va64_t va, int offset);
	extern int __jmptblfixup(void* func);

	extern "C" size_t __base_address; // Metadata
	extern "C" void* __entry_ptr; // Metadata
}

#define FIXUP_JUMP_TABLE(func) int __jmptblfixup_##func = __jmptblfixup(reinterpret_cast<void*>(&func));
#define UNHANDLED_RVA(address) 0
#define UNHANDLED_PTR(address) nullptr

#define REDIRECT(subroutine, target) extern "C" _naked void subroutine() { _asm { jmp target }; }
#define TRAMPOLINE(result, call_type, subroutine, ...) static _naked result call_type subroutine(__VA_ARGS__) { asm("jmp _" #subroutine ";"); }

extern "C" struct HINSTANCE__ __ImageBase;
template<long long address> void* ___ptr(int offset);
template<long long address> int ___rva(int offset);
template<long long address> void* ___ptr_func(int offset);
template<long long address> int ___rva_func(int offset);

//#define __ptr(a, offset) reinterpret_cast<void*>(reinterpret_cast<char*>(a) + offset)
//#define __rva(address, offset) static_cast<int>((reinterpret_cast<char*>(address) + offset) - reinterpret_cast<char*>(&__ImageBase))
#define _extern_c extern "C"
#define _naked __attribute__((naked))
#define _weak /*__attribute__((weak))*/
#define _alias(symbol) __attribute__((alias(symbol)));

#define __DEBUG_ASM(address) asm("dgb_" #address ": ;");
