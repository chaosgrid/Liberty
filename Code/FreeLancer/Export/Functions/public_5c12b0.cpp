#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54aeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c12bb _public_5c12bb

PROC_DECLARE(0x5c12b0, internal_5c12b0, public_5c12b0);
/* CHUNK of public_54ab40 */
extern "C" NAKED register_t __cdecl internal_5c12b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x234]
        jmp public_54aeb0
        public_5c12bb : nop
        mov eax, offset public_5fb5ec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c12b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c12bb, public_5c12bb)
    }
}

#undef public_5c12bb

#pragma init_seg(compiler)
extern "C" void const* const public_5c12bb = __AsmFindLabelExport(&internal_5c12b0, 0x5c12bb);
