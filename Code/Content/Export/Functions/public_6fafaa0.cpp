#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafaa8 _public_6fafaa8
#define public_6fafab0 _public_6fafab0
#define public_6fafab8 _public_6fafab8

PROC_DECLARE(0x6fafaa0, internal_6fafaa0, public_6fafaa0);
/* CHUNK of public_6f60020 */
extern "C" NAKED register_t __cdecl internal_6fafaa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6f15350
        public_6fafaa8 : nop
        lea ecx, ss:[ebp+0x18]
        jmp public_6f28e10
        public_6fafab0 : nop
        lea ecx, ss:[ebp+0x18]
        jmp public_6f28e10
        public_6fafab8 : nop
        mov eax, offset public_6fc4af4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafaa0)
        ASM_EXPORT_ENTRY_FIRST(0x6fafaa8, public_6fafaa8)
        ASM_EXPORT_ENTRY(0x6fafab0, public_6fafab0)
        ASM_EXPORT_ENTRY_LAST(0x6fafab8, public_6fafab8)
    }
}

#undef public_6fafaa8
#undef public_6fafab0
#undef public_6fafab8

#pragma init_seg(compiler)
extern "C" void const* const public_6fafaa8 = __AsmFindLabelExport(&internal_6fafaa0, 0x6fafaa8);
extern "C" void const* const public_6fafab0 = __AsmFindLabelExport(&internal_6fafaa0, 0x6fafab0);
extern "C" void const* const public_6fafab8 = __AsmFindLabelExport(&internal_6fafaa0, 0x6fafab8);
