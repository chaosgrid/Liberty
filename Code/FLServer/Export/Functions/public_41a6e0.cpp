#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a6e8 _public_41a6e8

PROC_DECLARE(0x41a6e0, internal_41a6e0, public_41a6e0);
/* CHUNK of public_412260 */
extern "C" NAKED register_t __cdecl internal_41a6e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_418aa4
        public_41a6e8 : nop
        mov eax, offset public_41f81c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a6e0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a6e8, public_41a6e8)
    }
}

#undef public_41a6e8

#pragma init_seg(compiler)
extern "C" void const* const public_41a6e8 = __AsmFindLabelExport(&internal_41a6e0, 0x41a6e8);
