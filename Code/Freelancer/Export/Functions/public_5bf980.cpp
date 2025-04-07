#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf988 _public_5bf988

PROC_DECLARE(0x5bf980, internal_5bf980, public_5bf980);
/* CHUNK of public_503070 */
extern "C" NAKED register_t __cdecl internal_5bf980()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_502d90
        public_5bf988 : nop
        mov eax, offset public_5f98dc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf980)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf988, public_5bf988)
    }
}

#undef public_5bf988

#pragma init_seg(compiler)
extern "C" void const* const public_5bf988 = __AsmFindLabelExport(&internal_5bf980, 0x5bf988);
