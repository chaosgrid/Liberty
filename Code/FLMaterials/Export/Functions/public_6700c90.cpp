#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700c98 _public_6700c98

PROC_DECLARE(0x6700c90, internal_6700c90, public_6700c90);
/* CHUNK of public_66f9c00 */
extern "C" NAKED register_t __cdecl internal_6700c90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_66ff6b0
        public_6700c98 : nop
        mov eax, offset public_670351c
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700c90)
        ASM_EXPORT_ENTRY_SINGLE(0x6700c98, public_6700c98)
    }
}

#undef public_6700c98

#pragma init_seg(compiler)
extern "C" void const* const public_6700c98 = __AsmFindLabelExport(&internal_6700c90, 0x6700c98);
