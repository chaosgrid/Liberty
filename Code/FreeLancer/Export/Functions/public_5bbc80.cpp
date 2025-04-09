#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbc8b _public_5bbc8b
#define public_5bbc96 _public_5bbc96

PROC_DECLARE(0x5bbc80, internal_5bbc80, public_5bbc80);
/* CHUNK of public_475dd0 */
extern "C" NAKED register_t __cdecl internal_5bbc80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xC0]
        jmp public_4de730
        public_5bbc8b : nop
        lea ecx, ss:[ebp-0xAC]
        jmp public_4de730
        public_5bbc96 : nop
        mov eax, offset public_5f6024
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbc80)
        ASM_EXPORT_ENTRY_FIRST(0x5bbc8b, public_5bbc8b)
        ASM_EXPORT_ENTRY_LAST(0x5bbc96, public_5bbc96)
    }
}

#undef public_5bbc8b
#undef public_5bbc96

#pragma init_seg(compiler)
extern "C" void const* const public_5bbc8b = __AsmFindLabelExport(&internal_5bbc80, 0x5bbc8b);
extern "C" void const* const public_5bbc96 = __AsmFindLabelExport(&internal_5bbc80, 0x5bbc96);
