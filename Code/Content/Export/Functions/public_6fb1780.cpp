#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1788 _public_6fb1788
#define public_6fb1790 _public_6fb1790
#define public_6fb1798 _public_6fb1798
#define public_6fb17a0 _public_6fb17a0

PROC_DECLARE(0x6fb1780, internal_6fb1780, public_6fb1780);
/* CHUNK of public_6f98540 */
extern "C" NAKED register_t __cdecl internal_6fb1780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_6eec8d0
        public_6fb1788 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6f98760
        public_6fb1790 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6eec8d0
        public_6fb1798 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6f98760
        public_6fb17a0 : nop
        mov eax, offset public_6fc6d80
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1780)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1788, public_6fb1788)
        ASM_EXPORT_ENTRY(0x6fb1790, public_6fb1790)
        ASM_EXPORT_ENTRY(0x6fb1798, public_6fb1798)
        ASM_EXPORT_ENTRY_LAST(0x6fb17a0, public_6fb17a0)
    }
}

#undef public_6fb1788
#undef public_6fb1790
#undef public_6fb1798
#undef public_6fb17a0

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1788 = __AsmFindLabelExport(&internal_6fb1780, 0x6fb1788);
extern "C" void const* const public_6fb1790 = __AsmFindLabelExport(&internal_6fb1780, 0x6fb1790);
extern "C" void const* const public_6fb1798 = __AsmFindLabelExport(&internal_6fb1780, 0x6fb1798);
extern "C" void const* const public_6fb17a0 = __AsmFindLabelExport(&internal_6fb1780, 0x6fb17a0);
