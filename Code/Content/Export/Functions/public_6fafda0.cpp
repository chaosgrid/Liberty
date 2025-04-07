#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafda8 _public_6fafda8

PROC_DECLARE(0x6fafda0, internal_6fafda0, public_6fafda0);
/* CHUNK of public_6f6c580 */
extern "C" NAKED register_t __cdecl internal_6fafda0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6f15350
        public_6fafda8 : nop
        mov eax, offset public_6fc4eec
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafda0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafda8, public_6fafda8)
    }
}

#undef public_6fafda8

#pragma init_seg(compiler)
extern "C" void const* const public_6fafda8 = __AsmFindLabelExport(&internal_6fafda0, 0x6fafda8);
