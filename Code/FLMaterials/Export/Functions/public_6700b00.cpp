#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700b08 _public_6700b08

PROC_DECLARE(0x6700b00, internal_6700b00, public_6700b00);
/* CHUNK of public_66f2e30 */
extern "C" NAKED register_t __cdecl internal_6700b00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_66ff6b0
        public_6700b08 : nop
        mov eax, offset public_67032e8
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700b00)
        ASM_EXPORT_ENTRY_SINGLE(0x6700b08, public_6700b08)
    }
}

#undef public_6700b08

#pragma init_seg(compiler)
extern "C" void const* const public_6700b08 = __AsmFindLabelExport(&internal_6700b00, 0x6700b08);
