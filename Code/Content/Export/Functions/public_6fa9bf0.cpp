#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab740);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9bfb _public_6fa9bfb
#define public_6fa9c03 _public_6fa9c03
#define public_6fa9c0b _public_6fa9c0b
#define public_6fa9c13 _public_6fa9c13
#define public_6fa9c1e _public_6fa9c1e

PROC_DECLARE(0x6fa9bf0, internal_6fa9bf0, public_6fa9bf0);
/* CHUNK of public_6eab350 */
extern "C" NAKED register_t __cdecl internal_6fa9bf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xB0]
        jmp public_6eab740
        public_6fa9bfb : nop
        lea ecx, ss:[ebp-0x7C]
        jmp public_6eec8d0
        public_6fa9c03 : nop
        lea ecx, ss:[ebp-0x80]
        jmp public_6eab740
        public_6fa9c0b : nop
        lea ecx, ss:[ebp-0x7C]
        jmp public_6eec8d0
        public_6fa9c13 : nop
        lea ecx, ss:[ebp-0xAC]
        jmp public_6eec8d0
        public_6fa9c1e : nop
        mov eax, offset public_6fbdf5c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9bf0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9bfb, public_6fa9bfb)
        ASM_EXPORT_ENTRY(0x6fa9c03, public_6fa9c03)
        ASM_EXPORT_ENTRY(0x6fa9c0b, public_6fa9c0b)
        ASM_EXPORT_ENTRY(0x6fa9c13, public_6fa9c13)
        ASM_EXPORT_ENTRY_LAST(0x6fa9c1e, public_6fa9c1e)
    }
}

#undef public_6fa9bfb
#undef public_6fa9c03
#undef public_6fa9c0b
#undef public_6fa9c13
#undef public_6fa9c1e

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9bfb = __AsmFindLabelExport(&internal_6fa9bf0, 0x6fa9bfb);
extern "C" void const* const public_6fa9c03 = __AsmFindLabelExport(&internal_6fa9bf0, 0x6fa9c03);
extern "C" void const* const public_6fa9c0b = __AsmFindLabelExport(&internal_6fa9bf0, 0x6fa9c0b);
extern "C" void const* const public_6fa9c13 = __AsmFindLabelExport(&internal_6fa9bf0, 0x6fa9c13);
extern "C" void const* const public_6fa9c1e = __AsmFindLabelExport(&internal_6fa9bf0, 0x6fa9c1e);
