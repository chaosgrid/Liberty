#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0538 _public_5c0538

PROC_DECLARE(0x5c0530, internal_5c0530, public_5c0530);
/* CHUNK of public_52e760 */
extern "C" NAKED register_t __cdecl internal_5c0530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_502d90
        public_5c0538 : nop
        mov eax, offset public_5fa5f8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0530)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0538, public_5c0538)
    }
}

#undef public_5c0538

#pragma init_seg(compiler)
extern "C" void const* const public_5c0538 = __AsmFindLabelExport(&internal_5c0530, 0x5c0538);
