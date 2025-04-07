#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f6ec0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700cd8 _public_6700cd8

PROC_DECLARE(0x6700cd0, internal_6700cd0, public_6700cd0);
/* CHUNK of public_66fa160 */
extern "C" NAKED register_t __cdecl internal_6700cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_66f6ec0
        public_6700cd8 : nop
        mov eax, offset public_670356c
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700cd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6700cd8, public_6700cd8)
    }
}

#undef public_6700cd8

#pragma init_seg(compiler)
extern "C" void const* const public_6700cd8 = __AsmFindLabelExport(&internal_6700cd0, 0x6700cd8);
