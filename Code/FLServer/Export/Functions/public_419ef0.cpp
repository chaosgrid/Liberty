#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ac8);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419ef8 _public_419ef8

PROC_DECLARE(0x419ef0, internal_419ef0, public_419ef0);
/* CHUNK of public_409610 */
extern "C" NAKED register_t __cdecl internal_419ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_418ac8
        public_419ef8 : nop
        mov eax, offset public_41f038
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419ef0)
        ASM_EXPORT_ENTRY_SINGLE(0x419ef8, public_419ef8)
    }
}

#undef public_419ef8

#pragma init_seg(compiler)
extern "C" void const* const public_419ef8 = __AsmFindLabelExport(&internal_419ef0, 0x419ef8);
