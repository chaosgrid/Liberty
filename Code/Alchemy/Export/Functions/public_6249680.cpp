#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_622d2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249688 _public_6249688
#define public_6249690 _public_6249690

PROC_DECLARE(0x6249680, internal_6249680, public_6249680);
/* CHUNK of public_622dd00 */
extern "C" NAKED register_t __cdecl internal_6249680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_622d2d0
        public_6249688 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_622d2c0
        public_6249690 : nop
        mov eax, offset public_6252628
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249680)
        ASM_EXPORT_ENTRY_FIRST(0x6249688, public_6249688)
        ASM_EXPORT_ENTRY_LAST(0x6249690, public_6249690)
    }
}

#undef public_6249688
#undef public_6249690

#pragma init_seg(compiler)
extern "C" void const* const public_6249688 = __AsmFindLabelExport(&internal_6249680, 0x6249688);
extern "C" void const* const public_6249690 = __AsmFindLabelExport(&internal_6249680, 0x6249690);
