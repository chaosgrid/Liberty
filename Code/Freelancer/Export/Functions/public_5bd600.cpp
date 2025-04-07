#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd608 _public_5bd608

PROC_DECLARE(0x5bd600, internal_5bd600, public_5bd600);
/* CHUNK of public_4bff30 */
extern "C" NAKED register_t __cdecl internal_5bd600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_444e20
        public_5bd608 : nop
        mov eax, offset public_5f7998
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd600)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd608, public_5bd608)
    }
}

#undef public_5bd608

#pragma init_seg(compiler)
extern "C" void const* const public_5bd608 = __AsmFindLabelExport(&internal_5bd600, 0x5bd608);
