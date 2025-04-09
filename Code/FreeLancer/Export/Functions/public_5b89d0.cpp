#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b89d8 _public_5b89d8

PROC_DECLARE(0x5b89d0, internal_5b89d0, public_5b89d0);
/* CHUNK of public_41a9a0 */
extern "C" NAKED register_t __cdecl internal_5b89d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_401e90
        public_5b89d8 : nop
        mov eax, offset public_5f2864
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b89d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b89d8, public_5b89d8)
    }
}

#undef public_5b89d8

#pragma init_seg(compiler)
extern "C" void const* const public_5b89d8 = __AsmFindLabelExport(&internal_5b89d0, 0x5b89d8);
