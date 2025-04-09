#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c2639 _public_5c2639
#define public_5c2642 _public_5c2642
#define public_5c264b _public_5c264b
#define public_5c2654 _public_5c2654
#define public_5c265d _public_5c265d
#define public_5c2666 _public_5c2666

PROC_DECLARE(0x5c2630, internal_5c2630, public_5c2630);
/* CHUNK of public_56abb0 */
extern "C" NAKED register_t __cdecl internal_5c2630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c62bc]
        public_5c2639 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c62b4]
        public_5c2642 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c62c8]
        public_5c264b : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c62d4]
        public_5c2654 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c62bc]
        public_5c265d : nop
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62b4]
        public_5c2666 : nop
        mov eax, offset public_5fc7d0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c2630)
        ASM_EXPORT_ENTRY_FIRST(0x5c2639, public_5c2639)
        ASM_EXPORT_ENTRY(0x5c2642, public_5c2642)
        ASM_EXPORT_ENTRY(0x5c264b, public_5c264b)
        ASM_EXPORT_ENTRY(0x5c2654, public_5c2654)
        ASM_EXPORT_ENTRY(0x5c265d, public_5c265d)
        ASM_EXPORT_ENTRY_LAST(0x5c2666, public_5c2666)
    }
}

#undef public_5c2639
#undef public_5c2642
#undef public_5c264b
#undef public_5c2654
#undef public_5c265d
#undef public_5c2666

#pragma init_seg(compiler)
extern "C" void const* const public_5c2639 = __AsmFindLabelExport(&internal_5c2630, 0x5c2639);
extern "C" void const* const public_5c2642 = __AsmFindLabelExport(&internal_5c2630, 0x5c2642);
extern "C" void const* const public_5c264b = __AsmFindLabelExport(&internal_5c2630, 0x5c264b);
extern "C" void const* const public_5c2654 = __AsmFindLabelExport(&internal_5c2630, 0x5c2654);
extern "C" void const* const public_5c265d = __AsmFindLabelExport(&internal_5c2630, 0x5c265d);
extern "C" void const* const public_5c2666 = __AsmFindLabelExport(&internal_5c2630, 0x5c2666);
