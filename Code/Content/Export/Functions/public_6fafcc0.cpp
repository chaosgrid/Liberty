#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6680);
CLANG_FORWARD_PROC_SYMBOL(public_6f68ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafcc8 _public_6fafcc8
#define public_6fafcd0 _public_6fafcd0

PROC_DECLARE(0x6fafcc0, internal_6fafcc0, public_6fafcc0);
/* CHUNK of public_6f68cf0 */
extern "C" NAKED register_t __cdecl internal_6fafcc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_6ef6680
        public_6fafcc8 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f68ff0
        public_6fafcd0 : nop
        mov eax, offset public_6fc4dec
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafcc0)
        ASM_EXPORT_ENTRY_FIRST(0x6fafcc8, public_6fafcc8)
        ASM_EXPORT_ENTRY_LAST(0x6fafcd0, public_6fafcd0)
    }
}

#undef public_6fafcc8
#undef public_6fafcd0

#pragma init_seg(compiler)
extern "C" void const* const public_6fafcc8 = __AsmFindLabelExport(&internal_6fafcc0, 0x6fafcc8);
extern "C" void const* const public_6fafcd0 = __AsmFindLabelExport(&internal_6fafcc0, 0x6fafcd0);
