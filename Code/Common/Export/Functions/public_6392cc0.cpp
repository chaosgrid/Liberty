#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e790);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392cc8 _public_6392cc8
#define public_6392cd2 _public_6392cd2

PROC_DECLARE(0x6392cc0, internal_6392cc0, public_6392cc0);
/* CHUNK of public_627d3b0 */
extern "C" NAKED register_t __cdecl internal_6392cc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e790
        public_6392cc8 : nop
        mov ecx, offset public_63fbfec
        jmp public_627e790
        public_6392cd2 : nop
        mov eax, offset public_63abb20
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392cc0)
        ASM_EXPORT_ENTRY_FIRST(0x6392cc8, public_6392cc8)
        ASM_EXPORT_ENTRY_LAST(0x6392cd2, public_6392cd2)
    }
}

#undef public_6392cc8
#undef public_6392cd2

#pragma init_seg(compiler)
extern "C" void const* const public_6392cc8 = __AsmFindLabelExport(&internal_6392cc0, 0x6392cc8);
extern "C" void const* const public_6392cd2 = __AsmFindLabelExport(&internal_6392cc0, 0x6392cd2);
