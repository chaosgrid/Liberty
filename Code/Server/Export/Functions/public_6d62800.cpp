#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62808 _public_6d62808
#define public_6d62810 _public_6d62810
#define public_6d62818 _public_6d62818

PROC_DECLARE(0x6d62800, internal_6d62800, public_6d62800);
/* CHUNK of public_6d21130 */
extern "C" NAKED register_t __cdecl internal_6d62800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6d209f0
        public_6d62808 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6d20a40
        public_6d62810 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6d20a40
        public_6d62818 : nop
        mov eax, offset public_6d73500
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62800)
        ASM_EXPORT_ENTRY_FIRST(0x6d62808, public_6d62808)
        ASM_EXPORT_ENTRY(0x6d62810, public_6d62810)
        ASM_EXPORT_ENTRY_LAST(0x6d62818, public_6d62818)
    }
}

#undef public_6d62808
#undef public_6d62810
#undef public_6d62818

#pragma init_seg(compiler)
extern "C" void const* const public_6d62808 = __AsmFindLabelExport(&internal_6d62800, 0x6d62808);
extern "C" void const* const public_6d62810 = __AsmFindLabelExport(&internal_6d62800, 0x6d62810);
extern "C" void const* const public_6d62818 = __AsmFindLabelExport(&internal_6d62800, 0x6d62818);
