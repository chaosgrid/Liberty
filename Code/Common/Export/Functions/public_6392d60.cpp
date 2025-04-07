#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392d6b _public_6392d6b
#define public_6392d76 _public_6392d76
#define public_6392d81 _public_6392d81

PROC_DECLARE(0x6392d60, internal_6392d60, public_6392d60);
/* CHUNK of public_627dda0 */
extern "C" NAKED register_t __cdecl internal_6392d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x9C]
        jmp public_6269110
        public_6392d6b : nop
        lea ecx, ss:[ebp-0xAC]
        jmp public_6269110
        public_6392d76 : nop
        lea ecx, ss:[ebp-0xBC]
        jmp public_6269110
        public_6392d81 : nop
        mov eax, offset public_63abc30
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392d60)
        ASM_EXPORT_ENTRY_FIRST(0x6392d6b, public_6392d6b)
        ASM_EXPORT_ENTRY(0x6392d76, public_6392d76)
        ASM_EXPORT_ENTRY_LAST(0x6392d81, public_6392d81)
    }
}

#undef public_6392d6b
#undef public_6392d76
#undef public_6392d81

#pragma init_seg(compiler)
extern "C" void const* const public_6392d6b = __AsmFindLabelExport(&internal_6392d60, 0x6392d6b);
extern "C" void const* const public_6392d76 = __AsmFindLabelExport(&internal_6392d60, 0x6392d76);
extern "C" void const* const public_6392d81 = __AsmFindLabelExport(&internal_6392d60, 0x6392d81);
