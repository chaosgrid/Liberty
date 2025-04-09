#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552b20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c136b _public_5c136b
#define public_5c1376 _public_5c1376
#define public_5c1381 _public_5c1381

PROC_DECLARE(0x5c1360, internal_5c1360, public_5c1360);
/* CHUNK of public_551500 */
extern "C" NAKED register_t __cdecl internal_5c1360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1A4]
        jmp public_552b20
        public_5c136b : nop
        lea ecx, ss:[ebp-0x16C]
        jmp public_552b20
        public_5c1376 : nop
        lea ecx, ss:[ebp-0x1B4]
        jmp public_552b20
        public_5c1381 : nop
        mov eax, offset public_5fb6bc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1360)
        ASM_EXPORT_ENTRY_FIRST(0x5c136b, public_5c136b)
        ASM_EXPORT_ENTRY(0x5c1376, public_5c1376)
        ASM_EXPORT_ENTRY_LAST(0x5c1381, public_5c1381)
    }
}

#undef public_5c136b
#undef public_5c1376
#undef public_5c1381

#pragma init_seg(compiler)
extern "C" void const* const public_5c136b = __AsmFindLabelExport(&internal_5c1360, 0x5c136b);
extern "C" void const* const public_5c1376 = __AsmFindLabelExport(&internal_5c1360, 0x5c1376);
extern "C" void const* const public_5c1381 = __AsmFindLabelExport(&internal_5c1360, 0x5c1381);
