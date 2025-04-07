#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8940);
CLANG_FORWARD_PROC_SYMBOL(public_6eb89b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa52b _public_6faa52b
#define public_6faa536 _public_6faa536
#define public_6faa541 _public_6faa541
#define public_6faa54f _public_6faa54f
#define public_6faa55a _public_6faa55a

PROC_DECLARE(0x6faa520, internal_6faa520, public_6faa520);
/* CHUNK of public_6eb84c0 */
extern "C" NAKED register_t __cdecl internal_6faa520()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x150]
        jmp public_6f15350
        public_6faa52b : nop
        lea ecx, ss:[ebp-0x158]
        jmp public_6eb8940
        public_6faa536 : nop
        lea ecx, ss:[ebp-0xDC]
        jmp public_6eb89b0
        public_6faa541 : nop
        mov ecx, dword ptr ss : [ebp-0x17C]
        add ecx, 8
        jmp public_6f15350
        public_6faa54f : nop
        lea ecx, ss:[ebp-0x150]
        jmp public_6f15350
        public_6faa55a : nop
        mov eax, offset public_6fbe8c8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa520)
        ASM_EXPORT_ENTRY_FIRST(0x6faa52b, public_6faa52b)
        ASM_EXPORT_ENTRY(0x6faa536, public_6faa536)
        ASM_EXPORT_ENTRY(0x6faa541, public_6faa541)
        ASM_EXPORT_ENTRY(0x6faa54f, public_6faa54f)
        ASM_EXPORT_ENTRY_LAST(0x6faa55a, public_6faa55a)
    }
}

#undef public_6faa52b
#undef public_6faa536
#undef public_6faa541
#undef public_6faa54f
#undef public_6faa55a

#pragma init_seg(compiler)
extern "C" void const* const public_6faa52b = __AsmFindLabelExport(&internal_6faa520, 0x6faa52b);
extern "C" void const* const public_6faa536 = __AsmFindLabelExport(&internal_6faa520, 0x6faa536);
extern "C" void const* const public_6faa541 = __AsmFindLabelExport(&internal_6faa520, 0x6faa541);
extern "C" void const* const public_6faa54f = __AsmFindLabelExport(&internal_6faa520, 0x6faa54f);
extern "C" void const* const public_6faa55a = __AsmFindLabelExport(&internal_6faa520, 0x6faa55a);
