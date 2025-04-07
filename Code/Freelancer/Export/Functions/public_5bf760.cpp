#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf768 _public_5bf768
#define public_5bf770 _public_5bf770
#define public_5bf778 _public_5bf778

PROC_DECLARE(0x5bf760, internal_5bf760, public_5bf760);
/* CHUNK of public_5018a0 */
extern "C" NAKED register_t __cdecl internal_5bf760()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x3C]
        jmp public_4de730
        public_5bf768 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_4de730
        public_5bf770 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_4de730
        public_5bf778 : nop
        mov eax, offset public_5f96f8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf760)
        ASM_EXPORT_ENTRY_FIRST(0x5bf768, public_5bf768)
        ASM_EXPORT_ENTRY(0x5bf770, public_5bf770)
        ASM_EXPORT_ENTRY_LAST(0x5bf778, public_5bf778)
    }
}

#undef public_5bf768
#undef public_5bf770
#undef public_5bf778

#pragma init_seg(compiler)
extern "C" void const* const public_5bf768 = __AsmFindLabelExport(&internal_5bf760, 0x5bf768);
extern "C" void const* const public_5bf770 = __AsmFindLabelExport(&internal_5bf760, 0x5bf770);
extern "C" void const* const public_5bf778 = __AsmFindLabelExport(&internal_5bf760, 0x5bf778);
