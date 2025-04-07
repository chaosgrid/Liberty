#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb11bb _public_6fb11bb

PROC_DECLARE(0x6fb11b0, internal_6fb11b0, public_6fb11b0);
/* CHUNK of public_6f8b620 */
extern "C" NAKED register_t __cdecl internal_6fb11b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xBC]
        jmp public_6f15350
        public_6fb11bb : nop
        mov eax, offset public_6fc6704
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb11b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb11bb, public_6fb11bb)
    }
}

#undef public_6fb11bb

#pragma init_seg(compiler)
extern "C" void const* const public_6fb11bb = __AsmFindLabelExport(&internal_6fb11b0, 0x6fb11bb);
