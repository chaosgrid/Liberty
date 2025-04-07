#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632af40);
CLANG_FORWARD_PROC_SYMBOL(public_632afb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63973ab _public_63973ab
#define public_63973b6 _public_63973b6
#define public_63973c1 _public_63973c1

PROC_DECLARE(0x63973a0, internal_63973a0, public_63973a0);
/* CHUNK of public_632bf80 */
extern "C" NAKED register_t __cdecl internal_63973a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x7F0]
        jmp public_632afb0
        public_63973ab : nop
        lea ecx, ss:[ebp-0x7F0]
        jmp public_632af40
        public_63973b6 : nop
        lea ecx, ss:[ebp-0x7F0]
        jmp public_632af40
        public_63973c1 : nop
        mov eax, offset public_63b14fc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63973a0)
        ASM_EXPORT_ENTRY_FIRST(0x63973ab, public_63973ab)
        ASM_EXPORT_ENTRY(0x63973b6, public_63973b6)
        ASM_EXPORT_ENTRY_LAST(0x63973c1, public_63973c1)
    }
}

#undef public_63973ab
#undef public_63973b6
#undef public_63973c1

#pragma init_seg(compiler)
extern "C" void const* const public_63973ab = __AsmFindLabelExport(&internal_63973a0, 0x63973ab);
extern "C" void const* const public_63973b6 = __AsmFindLabelExport(&internal_63973a0, 0x63973b6);
extern "C" void const* const public_63973c1 = __AsmFindLabelExport(&internal_63973a0, 0x63973c1);
