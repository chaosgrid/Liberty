#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419fd8 _public_419fd8

PROC_DECLARE(0x419fd0, internal_419fd0, public_419fd0);
/* CHUNK of public_40bd40 */
extern "C" NAKED register_t __cdecl internal_419fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_418aa4
        public_419fd8 : nop
        mov eax, offset public_41f12c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419fd0)
        ASM_EXPORT_ENTRY_SINGLE(0x419fd8, public_419fd8)
    }
}

#undef public_419fd8

#pragma init_seg(compiler)
extern "C" void const* const public_419fd8 = __AsmFindLabelExport(&internal_419fd0, 0x419fd8);
