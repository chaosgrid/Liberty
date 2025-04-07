#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d046c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d04830);
CLANG_FORWARD_PROC_SYMBOL(public_6d048f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d610d8 _public_6d610d8
#define public_6d610e0 _public_6d610e0
#define public_6d610e8 _public_6d610e8

PROC_DECLARE(0x6d610d0, internal_6d610d0, public_6d610d0);
/* CHUNK of public_6d04480 */
extern "C" NAKED register_t __cdecl internal_6d610d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp public_6d048f0
        public_6d610d8 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6d046c0
        public_6d610e0 : nop
        lea ecx, ss:[ebp-0x48]
        jmp public_6d04830
        public_6d610e8 : nop
        mov eax, offset public_6d71c54
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d610d0)
        ASM_EXPORT_ENTRY_FIRST(0x6d610d8, public_6d610d8)
        ASM_EXPORT_ENTRY(0x6d610e0, public_6d610e0)
        ASM_EXPORT_ENTRY_LAST(0x6d610e8, public_6d610e8)
    }
}

#undef public_6d610d8
#undef public_6d610e0
#undef public_6d610e8

#pragma init_seg(compiler)
extern "C" void const* const public_6d610d8 = __AsmFindLabelExport(&internal_6d610d0, 0x6d610d8);
extern "C" void const* const public_6d610e0 = __AsmFindLabelExport(&internal_6d610d0, 0x6d610e0);
extern "C" void const* const public_6d610e8 = __AsmFindLabelExport(&internal_6d610d0, 0x6d610e8);
