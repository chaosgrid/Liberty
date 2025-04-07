#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289e50);
CLANG_FORWARD_PROC_SYMBOL(public_6289e80);
CLANG_FORWARD_PROC_SYMBOL(public_634d260);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639348b _public_639348b
#define public_6393496 _public_6393496
#define public_63934a1 _public_63934a1
#define public_63934ac _public_63934ac

PROC_DECLARE(0x6393480, internal_6393480, public_6393480);
/* CHUNK of public_628ccf0 */
extern "C" NAKED register_t __cdecl internal_6393480()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x206C]
        jmp public_6289e50
        public_639348b : nop
        lea ecx, ss:[ebp-0x2020]
        jmp public_634d260
        public_6393496 : nop
        lea ecx, ss:[ebp-0x206C]
        jmp public_6289e80
        public_63934a1 : nop
        lea ecx, ss:[ebp-0x206C]
        jmp public_6289e50
        public_63934ac : nop
        mov eax, offset public_63ac5cc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393480)
        ASM_EXPORT_ENTRY_FIRST(0x639348b, public_639348b)
        ASM_EXPORT_ENTRY(0x6393496, public_6393496)
        ASM_EXPORT_ENTRY(0x63934a1, public_63934a1)
        ASM_EXPORT_ENTRY_LAST(0x63934ac, public_63934ac)
    }
}

#undef public_639348b
#undef public_6393496
#undef public_63934a1
#undef public_63934ac

#pragma init_seg(compiler)
extern "C" void const* const public_639348b = __AsmFindLabelExport(&internal_6393480, 0x639348b);
extern "C" void const* const public_6393496 = __AsmFindLabelExport(&internal_6393480, 0x6393496);
extern "C" void const* const public_63934a1 = __AsmFindLabelExport(&internal_6393480, 0x63934a1);
extern "C" void const* const public_63934ac = __AsmFindLabelExport(&internal_6393480, 0x63934ac);
