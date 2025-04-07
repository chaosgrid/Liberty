#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c09bb _public_5c09bb

PROC_DECLARE(0x5c09b0, internal_5c09b0, public_5c09b0);
/* CHUNK of public_536800 */
extern "C" NAKED register_t __cdecl internal_5c09b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xBC]
        jmp public_4de730
        public_5c09bb : nop
        mov eax, offset public_5fabdc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c09b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c09bb, public_5c09bb)
    }
}

#undef public_5c09bb

#pragma init_seg(compiler)
extern "C" void const* const public_5c09bb = __AsmFindLabelExport(&internal_5c09b0, 0x5c09bb);
