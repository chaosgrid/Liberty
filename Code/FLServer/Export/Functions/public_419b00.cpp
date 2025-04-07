#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419b0b _public_419b0b

PROC_DECLARE(0x419b00, internal_419b00, public_419b00);
/* CHUNK of public_401fc0 */
extern "C" NAKED register_t __cdecl internal_419b00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x110]
        jmp public_418aa4
        public_419b0b : nop
        mov eax, offset public_41eb68
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419b00)
        ASM_EXPORT_ENTRY_SINGLE(0x419b0b, public_419b0b)
    }
}

#undef public_419b0b

#pragma init_seg(compiler)
extern "C" void const* const public_419b0b = __AsmFindLabelExport(&internal_419b00, 0x419b0b);
