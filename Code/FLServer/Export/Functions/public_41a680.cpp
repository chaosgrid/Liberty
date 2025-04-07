#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a688 _public_41a688

PROC_DECLARE(0x41a680, internal_41a680, public_41a680);
/* CHUNK of public_4120a0 */
extern "C" NAKED register_t __cdecl internal_41a680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_418aa4
        public_41a688 : nop
        mov eax, offset public_41f7b0
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a680)
        ASM_EXPORT_ENTRY_SINGLE(0x41a688, public_41a688)
    }
}

#undef public_41a688

#pragma init_seg(compiler)
extern "C" void const* const public_41a688 = __AsmFindLabelExport(&internal_41a680, 0x41a688);
