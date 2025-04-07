#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63946a8 _public_63946a8
#define public_63946b0 _public_63946b0

PROC_DECLARE(0x63946a0, internal_63946a0, public_63946a0);
/* CHUNK of public_62b3630 */
extern "C" NAKED register_t __cdecl internal_63946a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_630e210
        public_63946a8 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_630e210
        public_63946b0 : nop
        mov eax, offset public_63adc00
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63946a0)
        ASM_EXPORT_ENTRY_FIRST(0x63946a8, public_63946a8)
        ASM_EXPORT_ENTRY_LAST(0x63946b0, public_63946b0)
    }
}

#undef public_63946a8
#undef public_63946b0

#pragma init_seg(compiler)
extern "C" void const* const public_63946a8 = __AsmFindLabelExport(&internal_63946a0, 0x63946a8);
extern "C" void const* const public_63946b0 = __AsmFindLabelExport(&internal_63946a0, 0x63946b0);
