#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_522480);
CLANG_FORWARD_PROC_SYMBOL(public_524a30);
CLANG_FORWARD_PROC_SYMBOL(public_524af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c00fb _public_5c00fb
#define public_5c0103 _public_5c0103
#define public_5c010b _public_5c010b

PROC_DECLARE(0x5c00f0, internal_5c00f0, public_5c00f0);
/* CHUNK of public_522070 */
extern "C" NAKED register_t __cdecl internal_5c00f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xB0]
        jmp public_524af0
        public_5c00fb : nop
        lea ecx, ss:[ebp-0x60]
        jmp public_522480
        public_5c0103 : nop
        lea ecx, ss:[ebp-0x74]
        jmp public_524a30
        public_5c010b : nop
        mov eax, offset public_5fa098
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c00f0)
        ASM_EXPORT_ENTRY_FIRST(0x5c00fb, public_5c00fb)
        ASM_EXPORT_ENTRY(0x5c0103, public_5c0103)
        ASM_EXPORT_ENTRY_LAST(0x5c010b, public_5c010b)
    }
}

#undef public_5c00fb
#undef public_5c0103
#undef public_5c010b

#pragma init_seg(compiler)
extern "C" void const* const public_5c00fb = __AsmFindLabelExport(&internal_5c00f0, 0x5c00fb);
extern "C" void const* const public_5c0103 = __AsmFindLabelExport(&internal_5c00f0, 0x5c0103);
extern "C" void const* const public_5c010b = __AsmFindLabelExport(&internal_5c00f0, 0x5c010b);
