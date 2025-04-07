#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6205ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6208610);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624741b _public_624741b
#define public_6247426 _public_6247426
#define public_6247431 _public_6247431
#define public_624743c _public_624743c
#define public_6247447 _public_6247447

PROC_DECLARE(0x6247410, internal_6247410, public_6247410);
/* CHUNK of public_6205720 */
extern "C" NAKED register_t __cdecl internal_6247410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xE4]
        jmp public_6208610
        public_624741b : nop
        lea ecx, ss:[ebp-0xE0]
        jmp public_6208610
        public_6247426 : nop
        lea ecx, ss:[ebp-0x98]
        jmp public_6205ef0
        public_6247431 : nop
        lea ecx, ss:[ebp-0xE0]
        jmp public_6208610
        public_624743c : nop
        lea ecx, ss:[ebp-0xA0]
        jmp public_6208610
        public_6247447 : nop
        mov eax, offset public_62501cc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247410)
        ASM_EXPORT_ENTRY_FIRST(0x624741b, public_624741b)
        ASM_EXPORT_ENTRY(0x6247426, public_6247426)
        ASM_EXPORT_ENTRY(0x6247431, public_6247431)
        ASM_EXPORT_ENTRY(0x624743c, public_624743c)
        ASM_EXPORT_ENTRY_LAST(0x6247447, public_6247447)
    }
}

#undef public_624741b
#undef public_6247426
#undef public_6247431
#undef public_624743c
#undef public_6247447

#pragma init_seg(compiler)
extern "C" void const* const public_624741b = __AsmFindLabelExport(&internal_6247410, 0x624741b);
extern "C" void const* const public_6247426 = __AsmFindLabelExport(&internal_6247410, 0x6247426);
extern "C" void const* const public_6247431 = __AsmFindLabelExport(&internal_6247410, 0x6247431);
extern "C" void const* const public_624743c = __AsmFindLabelExport(&internal_6247410, 0x624743c);
extern "C" void const* const public_6247447 = __AsmFindLabelExport(&internal_6247410, 0x6247447);
