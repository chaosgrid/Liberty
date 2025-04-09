#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438d10);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9308 _public_5b9308
#define public_5b9310 _public_5b9310

PROC_DECLARE(0x5b9300, internal_5b9300, public_5b9300);
/* CHUNK of public_4393b0 */
extern "C" NAKED register_t __cdecl internal_5b9300()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_438d10
        public_5b9308 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_4a2d30
        public_5b9310 : nop
        mov eax, offset public_5f3290
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9300)
        ASM_EXPORT_ENTRY_FIRST(0x5b9308, public_5b9308)
        ASM_EXPORT_ENTRY_LAST(0x5b9310, public_5b9310)
    }
}

#undef public_5b9308
#undef public_5b9310

#pragma init_seg(compiler)
extern "C" void const* const public_5b9308 = __AsmFindLabelExport(&internal_5b9300, 0x5b9308);
extern "C" void const* const public_5b9310 = __AsmFindLabelExport(&internal_5b9300, 0x5b9310);
