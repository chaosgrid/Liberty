#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f6ec0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700c38 _public_6700c38

PROC_DECLARE(0x6700c30, internal_6700c30, public_6700c30);
/* CHUNK of public_66f6450 */
extern "C" NAKED register_t __cdecl internal_6700c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_66f6ec0
        public_6700c38 : nop
        mov eax, offset public_67034b4
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700c30)
        ASM_EXPORT_ENTRY_SINGLE(0x6700c38, public_6700c38)
    }
}

#undef public_6700c38

#pragma init_seg(compiler)
extern "C" void const* const public_6700c38 = __AsmFindLabelExport(&internal_6700c30, 0x6700c38);
