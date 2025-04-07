#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f29630);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabdc8 _public_6fabdc8
#define public_6fabdd0 _public_6fabdd0

PROC_DECLARE(0x6fabdc0, internal_6fabdc0, public_6fabdc0);
/* CHUNK of public_6eec720 */
extern "C" NAKED register_t __cdecl internal_6fabdc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_6f15350
        public_6fabdc8 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f29630
        public_6fabdd0 : nop
        mov eax, offset public_6fc09c4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabdc0)
        ASM_EXPORT_ENTRY_FIRST(0x6fabdc8, public_6fabdc8)
        ASM_EXPORT_ENTRY_LAST(0x6fabdd0, public_6fabdd0)
    }
}

#undef public_6fabdc8
#undef public_6fabdd0

#pragma init_seg(compiler)
extern "C" void const* const public_6fabdc8 = __AsmFindLabelExport(&internal_6fabdc0, 0x6fabdc8);
extern "C" void const* const public_6fabdd0 = __AsmFindLabelExport(&internal_6fabdc0, 0x6fabdd0);
