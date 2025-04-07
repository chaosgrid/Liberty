#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac81b _public_6fac81b
#define public_6fac826 _public_6fac826

PROC_DECLARE(0x6fac810, internal_6fac810, public_6fac810);
/* CHUNK of public_6efb830 */
extern "C" NAKED register_t __cdecl internal_6fac810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fac81b : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fac826 : nop
        mov eax, offset public_6fc14b8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac810)
        ASM_EXPORT_ENTRY_FIRST(0x6fac81b, public_6fac81b)
        ASM_EXPORT_ENTRY_LAST(0x6fac826, public_6fac826)
    }
}

#undef public_6fac81b
#undef public_6fac826

#pragma init_seg(compiler)
extern "C" void const* const public_6fac81b = __AsmFindLabelExport(&internal_6fac810, 0x6fac81b);
extern "C" void const* const public_6fac826 = __AsmFindLabelExport(&internal_6fac810, 0x6fac826);
