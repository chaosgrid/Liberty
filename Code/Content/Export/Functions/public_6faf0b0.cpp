#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf0b8 _public_6faf0b8

PROC_DECLARE(0x6faf0b0, internal_6faf0b0, public_6faf0b0);
/* CHUNK of public_6f4b9e0 */
extern "C" NAKED register_t __cdecl internal_6faf0b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6f15350
        public_6faf0b8 : nop
        mov eax, offset public_6fc4064
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf0b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf0b8, public_6faf0b8)
    }
}

#undef public_6faf0b8

#pragma init_seg(compiler)
extern "C" void const* const public_6faf0b8 = __AsmFindLabelExport(&internal_6faf0b0, 0x6faf0b8);
