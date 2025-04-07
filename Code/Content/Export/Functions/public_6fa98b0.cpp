#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa98bb _public_6fa98bb

PROC_DECLARE(0x6fa98b0, internal_6fa98b0, public_6fa98b0);
/* CHUNK of public_6ea6f50 */
extern "C" NAKED register_t __cdecl internal_6fa98b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x118]
        jmp public_6ea6fe0
        public_6fa98bb : nop
        mov eax, offset public_6fbdc0c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa98b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa98bb, public_6fa98bb)
    }
}

#undef public_6fa98bb

#pragma init_seg(compiler)
extern "C" void const* const public_6fa98bb = __AsmFindLabelExport(&internal_6fa98b0, 0x6fa98bb);
