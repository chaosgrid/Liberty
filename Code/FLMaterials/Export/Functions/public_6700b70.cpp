#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700b78 _public_6700b78

PROC_DECLARE(0x6700b70, internal_6700b70, public_6700b70);
/* CHUNK of public_66f4010 */
extern "C" NAKED register_t __cdecl internal_6700b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_66ff6b0
        public_6700b78 : nop
        mov eax, offset public_6703374
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700b70)
        ASM_EXPORT_ENTRY_SINGLE(0x6700b78, public_6700b78)
    }
}

#undef public_6700b78

#pragma init_seg(compiler)
extern "C" void const* const public_6700b78 = __AsmFindLabelExport(&internal_6700b70, 0x6700b78);
