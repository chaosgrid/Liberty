#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700da8 _public_6700da8
#define public_6700db3 _public_6700db3

PROC_DECLARE(0x6700da0, internal_6700da0, public_6700da0);
/* CHUNK of public_66fda40 */
extern "C" NAKED register_t __cdecl internal_6700da0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_66ff6b0
        public_6700da8 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6700710
        pop ecx
        ret 
        public_6700db3 : nop
        mov eax, offset public_6703688
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700da0)
        ASM_EXPORT_ENTRY_FIRST(0x6700da8, public_6700da8)
        ASM_EXPORT_ENTRY_LAST(0x6700db3, public_6700db3)
    }
}

#undef public_6700da8
#undef public_6700db3

#pragma init_seg(compiler)
extern "C" void const* const public_6700da8 = __AsmFindLabelExport(&internal_6700da0, 0x6700da8);
extern "C" void const* const public_6700db3 = __AsmFindLabelExport(&internal_6700da0, 0x6700db3);
