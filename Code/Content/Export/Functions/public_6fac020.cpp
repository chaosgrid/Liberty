#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac02b _public_6fac02b

PROC_DECLARE(0x6fac020, internal_6fac020, public_6fac020);
/* CHUNK of public_6ef0f20 */
extern "C" NAKED register_t __cdecl internal_6fac020()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x438]
        jmp public_6eec8d0
        public_6fac02b : nop
        mov eax, offset public_6fc0c48
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac020)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac02b, public_6fac02b)
    }
}

#undef public_6fac02b

#pragma init_seg(compiler)
extern "C" void const* const public_6fac02b = __AsmFindLabelExport(&internal_6fac020, 0x6fac02b);
