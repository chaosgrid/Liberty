#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9118 _public_5b9118
#define public_5b9120 _public_5b9120
#define public_5b9128 _public_5b9128

PROC_DECLARE(0x5b9110, internal_5b9110, public_5b9110);
/* CHUNK of public_434f40 */
extern "C" NAKED register_t __cdecl internal_5b9110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_4dd9a0
        public_5b9118 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_455e90
        public_5b9120 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_455e90
        public_5b9128 : nop
        mov eax, offset public_5f304c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9110)
        ASM_EXPORT_ENTRY_FIRST(0x5b9118, public_5b9118)
        ASM_EXPORT_ENTRY(0x5b9120, public_5b9120)
        ASM_EXPORT_ENTRY_LAST(0x5b9128, public_5b9128)
    }
}

#undef public_5b9118
#undef public_5b9120
#undef public_5b9128

#pragma init_seg(compiler)
extern "C" void const* const public_5b9118 = __AsmFindLabelExport(&internal_5b9110, 0x5b9118);
extern "C" void const* const public_5b9120 = __AsmFindLabelExport(&internal_5b9110, 0x5b9120);
extern "C" void const* const public_5b9128 = __AsmFindLabelExport(&internal_5b9110, 0x5b9128);
