#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3080);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700dc8 _public_6700dc8

PROC_DECLARE(0x6700dc0, internal_6700dc0, public_6700dc0);
/* CHUNK of public_66fe570 */
extern "C" NAKED register_t __cdecl internal_6700dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_66f3080
        public_6700dc8 : nop
        mov eax, offset public_67036ac
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700dc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6700dc8, public_6700dc8)
    }
}

#undef public_6700dc8

#pragma init_seg(compiler)
extern "C" void const* const public_6700dc8 = __AsmFindLabelExport(&internal_6700dc0, 0x6700dc8);
