#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407900);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419e18 _public_419e18

PROC_DECLARE(0x419e10, internal_419e10, public_419e10);
/* CHUNK of public_407600 */
extern "C" NAKED register_t __cdecl internal_419e10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_407900
        public_419e18 : nop
        mov eax, offset public_41ef60
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419e10)
        ASM_EXPORT_ENTRY_SINGLE(0x419e18, public_419e18)
    }
}

#undef public_419e18

#pragma init_seg(compiler)
extern "C" void const* const public_419e18 = __AsmFindLabelExport(&internal_419e10, 0x419e18);
