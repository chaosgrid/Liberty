#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700b5b _public_6700b5b
#define public_6700b66 _public_6700b66

PROC_DECLARE(0x6700b50, internal_6700b50, public_6700b50);
/* CHUNK of public_66f3cd0 */
extern "C" NAKED register_t __cdecl internal_6700b50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_66f1ac0
        public_6700b5b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_66f1ac0
        public_6700b66 : nop
        mov eax, offset public_6703350
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700b50)
        ASM_EXPORT_ENTRY_FIRST(0x6700b5b, public_6700b5b)
        ASM_EXPORT_ENTRY_LAST(0x6700b66, public_6700b66)
    }
}

#undef public_6700b5b
#undef public_6700b66

#pragma init_seg(compiler)
extern "C" void const* const public_6700b5b = __AsmFindLabelExport(&internal_6700b50, 0x6700b5b);
extern "C" void const* const public_6700b66 = __AsmFindLabelExport(&internal_6700b50, 0x6700b66);
