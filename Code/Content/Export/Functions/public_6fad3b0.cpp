#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad3bb _public_6fad3bb

PROC_DECLARE(0x6fad3b0, internal_6fad3b0, public_6fad3b0);
/* CHUNK of public_6f0c6b0 */
extern "C" NAKED register_t __cdecl internal_6fad3b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x98]
        jmp public_6eec8d0
        public_6fad3bb : nop
        mov eax, offset public_6fc225c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad3b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad3bb, public_6fad3bb)
    }
}

#undef public_6fad3bb

#pragma init_seg(compiler)
extern "C" void const* const public_6fad3bb = __AsmFindLabelExport(&internal_6fad3b0, 0x6fad3bb);
