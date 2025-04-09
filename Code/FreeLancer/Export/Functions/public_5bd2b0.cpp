#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd2bb _public_5bd2bb

PROC_DECLARE(0x5bd2b0, internal_5bd2b0, public_5bd2b0);
/* CHUNK of public_4b7440 */
extern "C" NAKED register_t __cdecl internal_5bd2b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x704]
        jmp public_4a2d30
        public_5bd2bb : nop
        mov eax, offset public_5f758c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd2b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd2bb, public_5bd2bb)
    }
}

#undef public_5bd2bb

#pragma init_seg(compiler)
extern "C" void const* const public_5bd2bb = __AsmFindLabelExport(&internal_5bd2b0, 0x5bd2bb);
