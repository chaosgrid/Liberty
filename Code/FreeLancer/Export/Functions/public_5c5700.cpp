#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c570c _public_5c570c
#define public_5c5717 _public_5c5717
#define public_5c5723 _public_5c5723
#define public_5c572f _public_5c572f
#define public_5c573b _public_5c573b
#define public_5c5746 _public_5c5746

PROC_DECLARE(0x5c5700, internal_5c5700, public_5c5700);
/* CHUNK of public_5accd0 */
extern "C" NAKED register_t __cdecl internal_5c5700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x934]
        jmp dword ptr ds : [public_5c7058]
        public_5c570c : nop
        lea ecx, ss:[ebp-0x91C]
        jmp public_4de730
        public_5c5717 : nop
        lea ecx, ss:[ebp-0x8F0]
        jmp dword ptr ds : [public_5c7058]
        public_5c5723 : nop
        lea ecx, ss:[ebp-0x8E0]
        jmp dword ptr ds : [public_5c7058]
        public_5c572f : nop
        lea ecx, ss:[ebp-0x8D0]
        jmp dword ptr ds : [public_5c7090]
        public_5c573b : nop
        lea ecx, ss:[ebp-0x934]
        jmp public_5686b0
        public_5c5746 : nop
        mov eax, offset public_5ff51c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5700)
        ASM_EXPORT_ENTRY_FIRST(0x5c570c, public_5c570c)
        ASM_EXPORT_ENTRY(0x5c5717, public_5c5717)
        ASM_EXPORT_ENTRY(0x5c5723, public_5c5723)
        ASM_EXPORT_ENTRY(0x5c572f, public_5c572f)
        ASM_EXPORT_ENTRY(0x5c573b, public_5c573b)
        ASM_EXPORT_ENTRY_LAST(0x5c5746, public_5c5746)
    }
}

#undef public_5c570c
#undef public_5c5717
#undef public_5c5723
#undef public_5c572f
#undef public_5c573b
#undef public_5c5746

#pragma init_seg(compiler)
extern "C" void const* const public_5c570c = __AsmFindLabelExport(&internal_5c5700, 0x5c570c);
extern "C" void const* const public_5c5717 = __AsmFindLabelExport(&internal_5c5700, 0x5c5717);
extern "C" void const* const public_5c5723 = __AsmFindLabelExport(&internal_5c5700, 0x5c5723);
extern "C" void const* const public_5c572f = __AsmFindLabelExport(&internal_5c5700, 0x5c572f);
extern "C" void const* const public_5c573b = __AsmFindLabelExport(&internal_5c5700, 0x5c573b);
extern "C" void const* const public_5c5746 = __AsmFindLabelExport(&internal_5c5700, 0x5c5746);
