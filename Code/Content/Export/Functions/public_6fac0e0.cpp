#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac0e8 _public_6fac0e8

PROC_DECLARE(0x6fac0e0, internal_6fac0e0, public_6fac0e0);
/* CHUNK of public_6ef2610 */
extern "C" NAKED register_t __cdecl internal_6fac0e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_6eec8d0
        public_6fac0e8 : nop
        mov eax, offset public_6fc0d30
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac0e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac0e8, public_6fac0e8)
    }
}

#undef public_6fac0e8

#pragma init_seg(compiler)
extern "C" void const* const public_6fac0e8 = __AsmFindLabelExport(&internal_6fac0e0, 0x6fac0e8);
