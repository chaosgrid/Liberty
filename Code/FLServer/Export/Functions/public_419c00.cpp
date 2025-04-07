#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ac8);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419c08 _public_419c08

PROC_DECLARE(0x419c00, internal_419c00, public_419c00);
/* CHUNK of public_403b00 */
extern "C" NAKED register_t __cdecl internal_419c00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_418ac8
        public_419c08 : nop
        mov eax, offset public_41ec84
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419c00)
        ASM_EXPORT_ENTRY_SINGLE(0x419c08, public_419c08)
    }
}

#undef public_419c08

#pragma init_seg(compiler)
extern "C" void const* const public_419c08 = __AsmFindLabelExport(&internal_419c00, 0x419c08);
