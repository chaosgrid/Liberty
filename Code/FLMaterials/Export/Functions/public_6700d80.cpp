#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700d88 _public_6700d88

PROC_DECLARE(0x6700d80, internal_6700d80, public_6700d80);
/* CHUNK of public_66fc150 */
extern "C" NAKED register_t __cdecl internal_6700d80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_66ff6b0
        public_6700d88 : nop
        mov eax, offset public_670365c
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700d80)
        ASM_EXPORT_ENTRY_SINGLE(0x6700d88, public_6700d88)
    }
}

#undef public_6700d88

#pragma init_seg(compiler)
extern "C" void const* const public_6700d88 = __AsmFindLabelExport(&internal_6700d80, 0x6700d88);
