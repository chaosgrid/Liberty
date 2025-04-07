#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a0bb _public_41a0bb

PROC_DECLARE(0x41a0b0, internal_41a0b0, public_41a0b0);
/* CHUNK of public_40c920 */
extern "C" NAKED register_t __cdecl internal_41a0b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C80]
        jmp public_418aa4
        public_41a0bb : nop
        mov eax, offset public_41f21c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a0b0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a0bb, public_41a0bb)
    }
}

#undef public_41a0bb

#pragma init_seg(compiler)
extern "C" void const* const public_41a0bb = __AsmFindLabelExport(&internal_41a0b0, 0x41a0bb);
