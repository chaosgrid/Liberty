#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf998 _public_6faf998
#define public_6faf9a0 _public_6faf9a0
#define public_6faf9a8 _public_6faf9a8

PROC_DECLARE(0x6faf990, internal_6faf990, public_6faf990);
/* CHUNK of public_6f5e680 */
extern "C" NAKED register_t __cdecl internal_6faf990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6faf998 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6f15350
        public_6faf9a0 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_6f15350
        public_6faf9a8 : nop
        mov eax, offset public_6fc49c4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf990)
        ASM_EXPORT_ENTRY_FIRST(0x6faf998, public_6faf998)
        ASM_EXPORT_ENTRY(0x6faf9a0, public_6faf9a0)
        ASM_EXPORT_ENTRY_LAST(0x6faf9a8, public_6faf9a8)
    }
}

#undef public_6faf998
#undef public_6faf9a0
#undef public_6faf9a8

#pragma init_seg(compiler)
extern "C" void const* const public_6faf998 = __AsmFindLabelExport(&internal_6faf990, 0x6faf998);
extern "C" void const* const public_6faf9a0 = __AsmFindLabelExport(&internal_6faf990, 0x6faf9a0);
extern "C" void const* const public_6faf9a8 = __AsmFindLabelExport(&internal_6faf990, 0x6faf9a8);
