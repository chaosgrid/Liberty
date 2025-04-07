#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f18c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb190b _public_6fb190b
#define public_6fb1916 _public_6fb1916
#define public_6fb1921 _public_6fb1921

PROC_DECLARE(0x6fb1900, internal_6fb1900, public_6fb1900);
/* CHUNK of public_6f9af40 */
extern "C" NAKED register_t __cdecl internal_6fb1900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x504]
        jmp public_6f94b80
        public_6fb190b : nop
        lea ecx, ss:[ebp-0x504]
        jmp public_6f18c70
        public_6fb1916 : nop
        lea ecx, ss:[ebp-0x98]
        jmp public_6f15350
        public_6fb1921 : nop
        mov eax, offset public_6fc6f94
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1900)
        ASM_EXPORT_ENTRY_FIRST(0x6fb190b, public_6fb190b)
        ASM_EXPORT_ENTRY(0x6fb1916, public_6fb1916)
        ASM_EXPORT_ENTRY_LAST(0x6fb1921, public_6fb1921)
    }
}

#undef public_6fb190b
#undef public_6fb1916
#undef public_6fb1921

#pragma init_seg(compiler)
extern "C" void const* const public_6fb190b = __AsmFindLabelExport(&internal_6fb1900, 0x6fb190b);
extern "C" void const* const public_6fb1916 = __AsmFindLabelExport(&internal_6fb1900, 0x6fb1916);
extern "C" void const* const public_6fb1921 = __AsmFindLabelExport(&internal_6fb1900, 0x6fb1921);
