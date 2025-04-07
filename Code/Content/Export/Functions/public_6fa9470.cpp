#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa947b _public_6fa947b
#define public_6fa9487 _public_6fa9487
#define public_6fa9492 _public_6fa9492
#define public_6fa949e _public_6fa949e
#define public_6fa94aa _public_6fa94aa

PROC_DECLARE(0x6fa9470, internal_6fa9470, public_6fa9470);
/* CHUNK of public_6ea2760 */
extern "C" NAKED register_t __cdecl internal_6fa9470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa947b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa9487 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9492 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa949e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa94aa : nop
        mov eax, offset public_6fbd848
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9470)
        ASM_EXPORT_ENTRY_FIRST(0x6fa947b, public_6fa947b)
        ASM_EXPORT_ENTRY(0x6fa9487, public_6fa9487)
        ASM_EXPORT_ENTRY(0x6fa9492, public_6fa9492)
        ASM_EXPORT_ENTRY(0x6fa949e, public_6fa949e)
        ASM_EXPORT_ENTRY_LAST(0x6fa94aa, public_6fa94aa)
    }
}

#undef public_6fa947b
#undef public_6fa9487
#undef public_6fa9492
#undef public_6fa949e
#undef public_6fa94aa

#pragma init_seg(compiler)
extern "C" void const* const public_6fa947b = __AsmFindLabelExport(&internal_6fa9470, 0x6fa947b);
extern "C" void const* const public_6fa9487 = __AsmFindLabelExport(&internal_6fa9470, 0x6fa9487);
extern "C" void const* const public_6fa9492 = __AsmFindLabelExport(&internal_6fa9470, 0x6fa9492);
extern "C" void const* const public_6fa949e = __AsmFindLabelExport(&internal_6fa9470, 0x6fa949e);
extern "C" void const* const public_6fa94aa = __AsmFindLabelExport(&internal_6fa9470, 0x6fa94aa);
