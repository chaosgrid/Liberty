#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f6ec0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700d38 _public_6700d38

PROC_DECLARE(0x6700d30, internal_6700d30, public_6700d30);
/* CHUNK of public_66faad0 */
extern "C" NAKED register_t __cdecl internal_6700d30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_66f6ec0
        public_6700d38 : nop
        mov eax, offset public_67035fc
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700d30)
        ASM_EXPORT_ENTRY_SINGLE(0x6700d38, public_6700d38)
    }
}

#undef public_6700d38

#pragma init_seg(compiler)
extern "C" void const* const public_6700d38 = __AsmFindLabelExport(&internal_6700d30, 0x6700d38);
