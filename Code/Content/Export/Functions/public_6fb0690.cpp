#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0698 _public_6fb0698

PROC_DECLARE(0x6fb0690, internal_6fb0690, public_6fb0690);
/* CHUNK of public_6f7fba0 */
extern "C" NAKED register_t __cdecl internal_6fb0690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6eb7d10
        public_6fb0698 : nop
        mov eax, offset public_6fc5950
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0690)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb0698, public_6fb0698)
    }
}

#undef public_6fb0698

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0698 = __AsmFindLabelExport(&internal_6fb0690, 0x6fb0698);
