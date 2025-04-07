#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3830);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad868 _public_6fad868
#define public_6fad870 _public_6fad870
#define public_6fad878 _public_6fad878

PROC_DECLARE(0x6fad860, internal_6fad860, public_6fad860);
/* CHUNK of public_6f14e80 */
extern "C" NAKED register_t __cdecl internal_6fad860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp public_6ed3830
        public_6fad868 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_6f15350
        public_6fad870 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_6f15350
        public_6fad878 : nop
        mov eax, offset public_6fc2730
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad860)
        ASM_EXPORT_ENTRY_FIRST(0x6fad868, public_6fad868)
        ASM_EXPORT_ENTRY(0x6fad870, public_6fad870)
        ASM_EXPORT_ENTRY_LAST(0x6fad878, public_6fad878)
    }
}

#undef public_6fad868
#undef public_6fad870
#undef public_6fad878

#pragma init_seg(compiler)
extern "C" void const* const public_6fad868 = __AsmFindLabelExport(&internal_6fad860, 0x6fad868);
extern "C" void const* const public_6fad870 = __AsmFindLabelExport(&internal_6fad860, 0x6fad870);
extern "C" void const* const public_6fad878 = __AsmFindLabelExport(&internal_6fad860, 0x6fad878);
