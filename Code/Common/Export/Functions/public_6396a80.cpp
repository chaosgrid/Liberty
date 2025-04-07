#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396a88 _public_6396a88
#define public_6396a90 _public_6396a90
#define public_6396a98 _public_6396a98

PROC_DECLARE(0x6396a80, internal_6396a80, public_6396a80);
/* CHUNK of public_631ab00 */
extern "C" NAKED register_t __cdecl internal_6396a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_6396a88 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_6396a90 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_6396a98 : nop
        mov eax, offset public_63b0998
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396a80)
        ASM_EXPORT_ENTRY_FIRST(0x6396a88, public_6396a88)
        ASM_EXPORT_ENTRY(0x6396a90, public_6396a90)
        ASM_EXPORT_ENTRY_LAST(0x6396a98, public_6396a98)
    }
}

#undef public_6396a88
#undef public_6396a90
#undef public_6396a98

#pragma init_seg(compiler)
extern "C" void const* const public_6396a88 = __AsmFindLabelExport(&internal_6396a80, 0x6396a88);
extern "C" void const* const public_6396a90 = __AsmFindLabelExport(&internal_6396a80, 0x6396a90);
extern "C" void const* const public_6396a98 = __AsmFindLabelExport(&internal_6396a80, 0x6396a98);
