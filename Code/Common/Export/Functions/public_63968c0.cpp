#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315710);
CLANG_FORWARD_PROC_SYMBOL(public_6316730);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63968c8 _public_63968c8
#define public_63968d0 _public_63968d0

PROC_DECLARE(0x63968c0, internal_63968c0, public_63968c0);
/* CHUNK of public_6316330 */
extern "C" NAKED register_t __cdecl internal_63968c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp public_6315710
        public_63968c8 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6316730
        public_63968d0 : nop
        mov eax, offset public_63b0734
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63968c0)
        ASM_EXPORT_ENTRY_FIRST(0x63968c8, public_63968c8)
        ASM_EXPORT_ENTRY_LAST(0x63968d0, public_63968d0)
    }
}

#undef public_63968c8
#undef public_63968d0

#pragma init_seg(compiler)
extern "C" void const* const public_63968c8 = __AsmFindLabelExport(&internal_63968c0, 0x63968c8);
extern "C" void const* const public_63968d0 = __AsmFindLabelExport(&internal_63968c0, 0x63968d0);
