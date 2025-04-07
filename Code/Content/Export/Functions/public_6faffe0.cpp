#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faffe8 _public_6faffe8
#define public_6fafff0 _public_6fafff0

PROC_DECLARE(0x6faffe0, internal_6faffe0, public_6faffe0);
/* CHUNK of public_6f72a80 */
extern "C" NAKED register_t __cdecl internal_6faffe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_6f15350
        public_6faffe8 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fafff0 : nop
        mov eax, offset public_6fc52dc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faffe0)
        ASM_EXPORT_ENTRY_FIRST(0x6faffe8, public_6faffe8)
        ASM_EXPORT_ENTRY_LAST(0x6fafff0, public_6fafff0)
    }
}

#undef public_6faffe8
#undef public_6fafff0

#pragma init_seg(compiler)
extern "C" void const* const public_6faffe8 = __AsmFindLabelExport(&internal_6faffe0, 0x6faffe8);
extern "C" void const* const public_6fafff0 = __AsmFindLabelExport(&internal_6faffe0, 0x6fafff0);
