#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb10a8 _public_6fb10a8

PROC_DECLARE(0x6fb10a0, internal_6fb10a0, public_6fb10a0);
/* CHUNK of public_6f89e90 */
extern "C" NAKED register_t __cdecl internal_6fb10a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6f867a0
        public_6fb10a8 : nop
        mov eax, offset public_6fc65dc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb10a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb10a8, public_6fb10a8)
    }
}

#undef public_6fb10a8

#pragma init_seg(compiler)
extern "C" void const* const public_6fb10a8 = __AsmFindLabelExport(&internal_6fb10a0, 0x6fb10a8);
