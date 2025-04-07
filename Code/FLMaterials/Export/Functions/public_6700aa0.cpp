#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700aab _public_6700aab

PROC_DECLARE(0x6700aa0, internal_6700aa0, public_6700aa0);
/* CHUNK of public_66f1210 */
extern "C" NAKED register_t __cdecl internal_6700aa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6700710
        pop ecx
        ret 
        public_6700aab : nop
        mov eax, offset public_6703258
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700aa0)
        ASM_EXPORT_ENTRY_SINGLE(0x6700aab, public_6700aab)
    }
}

#undef public_6700aab

#pragma init_seg(compiler)
extern "C" void const* const public_6700aab = __AsmFindLabelExport(&internal_6700aa0, 0x6700aab);
