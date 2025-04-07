#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d38f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3930);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dffd8 _public_65dffd8
#define public_65dffe0 _public_65dffe0
#define public_65dffe8 _public_65dffe8
#define public_65dfff0 _public_65dfff0

PROC_DECLARE(0x65dffd0, internal_65dffd0, public_65dffd0);
/* CHUNK of public_65d3380 */
extern "C" NAKED register_t __cdecl internal_65dffd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_65d38f0
        public_65dffd8 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_65d38f0
        public_65dffe0 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_65d38f0
        public_65dffe8 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_65d3930
        public_65dfff0 : nop
        mov eax, offset public_65e2020
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dffd0)
        ASM_EXPORT_ENTRY_FIRST(0x65dffd8, public_65dffd8)
        ASM_EXPORT_ENTRY(0x65dffe0, public_65dffe0)
        ASM_EXPORT_ENTRY(0x65dffe8, public_65dffe8)
        ASM_EXPORT_ENTRY_LAST(0x65dfff0, public_65dfff0)
    }
}

#undef public_65dffd8
#undef public_65dffe0
#undef public_65dffe8
#undef public_65dfff0

#pragma init_seg(compiler)
extern "C" void const* const public_65dffd8 = __AsmFindLabelExport(&internal_65dffd0, 0x65dffd8);
extern "C" void const* const public_65dffe0 = __AsmFindLabelExport(&internal_65dffd0, 0x65dffe0);
extern "C" void const* const public_65dffe8 = __AsmFindLabelExport(&internal_65dffd0, 0x65dffe8);
extern "C" void const* const public_65dfff0 = __AsmFindLabelExport(&internal_65dffd0, 0x65dfff0);
