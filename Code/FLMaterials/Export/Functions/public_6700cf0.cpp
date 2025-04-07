#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700cf8 _public_6700cf8

PROC_DECLARE(0x6700cf0, internal_6700cf0, public_6700cf0);
/* CHUNK of public_66fa3f0 */
extern "C" NAKED register_t __cdecl internal_6700cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_66ff6b0
        public_6700cf8 : nop
        mov eax, offset public_6703590
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700cf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6700cf8, public_6700cf8)
    }
}

#undef public_6700cf8

#pragma init_seg(compiler)
extern "C" void const* const public_6700cf8 = __AsmFindLabelExport(&internal_6700cf0, 0x6700cf8);
