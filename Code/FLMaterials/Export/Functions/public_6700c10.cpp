#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700c18 _public_6700c18

PROC_DECLARE(0x6700c10, internal_6700c10, public_6700c10);
/* CHUNK of public_66f6240 */
extern "C" NAKED register_t __cdecl internal_6700c10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_66ff6b0
        public_6700c18 : nop
        mov eax, offset public_670346c
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700c10)
        ASM_EXPORT_ENTRY_SINGLE(0x6700c18, public_6700c18)
    }
}

#undef public_6700c18

#pragma init_seg(compiler)
extern "C" void const* const public_6700c18 = __AsmFindLabelExport(&internal_6700c10, 0x6700c18);
