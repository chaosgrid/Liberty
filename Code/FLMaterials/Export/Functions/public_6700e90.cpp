#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700e98 _public_6700e98

PROC_DECLARE(0x6700e90, internal_6700e90, public_6700e90);
/* CHUNK of public_66fff80 */
extern "C" NAKED register_t __cdecl internal_6700e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_66ff6b0
        public_6700e98 : nop
        mov eax, offset public_6703780
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700e90)
        ASM_EXPORT_ENTRY_SINGLE(0x6700e98, public_6700e98)
    }
}

#undef public_6700e98

#pragma init_seg(compiler)
extern "C" void const* const public_6700e98 = __AsmFindLabelExport(&internal_6700e90, 0x6700e98);
