#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0628 _public_6fb0628
#define public_6fb0633 _public_6fb0633
#define public_6fb063e _public_6fb063e
#define public_6fb0646 _public_6fb0646
#define public_6fb064e _public_6fb064e

PROC_DECLARE(0x6fb0620, internal_6fb0620, public_6fb0620);
/* CHUNK of public_6f7f370 */
extern "C" NAKED register_t __cdecl internal_6fb0620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_6eb7d10
        public_6fb0628 : nop
        mov ecx, dword ptr ss : [ebp-0x84]
        jmp public_6eb7d10
        public_6fb0633 : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        jmp public_6eb7d10
        public_6fb063e : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6eb7d10
        public_6fb0646 : nop
        lea ecx, ss:[ebp-0x7C]
        jmp public_6eb7d10
        public_6fb064e : nop
        mov eax, offset public_6fc58f0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0620)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0628, public_6fb0628)
        ASM_EXPORT_ENTRY(0x6fb0633, public_6fb0633)
        ASM_EXPORT_ENTRY(0x6fb063e, public_6fb063e)
        ASM_EXPORT_ENTRY(0x6fb0646, public_6fb0646)
        ASM_EXPORT_ENTRY_LAST(0x6fb064e, public_6fb064e)
    }
}

#undef public_6fb0628
#undef public_6fb0633
#undef public_6fb063e
#undef public_6fb0646
#undef public_6fb064e

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0628 = __AsmFindLabelExport(&internal_6fb0620, 0x6fb0628);
extern "C" void const* const public_6fb0633 = __AsmFindLabelExport(&internal_6fb0620, 0x6fb0633);
extern "C" void const* const public_6fb063e = __AsmFindLabelExport(&internal_6fb0620, 0x6fb063e);
extern "C" void const* const public_6fb0646 = __AsmFindLabelExport(&internal_6fb0620, 0x6fb0646);
extern "C" void const* const public_6fb064e = __AsmFindLabelExport(&internal_6fb0620, 0x6fb064e);
