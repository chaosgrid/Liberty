#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3080);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700cb8 _public_6700cb8
#define public_6700cc0 _public_6700cc0

PROC_DECLARE(0x6700cb0, internal_6700cb0, public_6700cb0);
/* CHUNK of public_66f9ea0 */
extern "C" NAKED register_t __cdecl internal_6700cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_66f3080
        public_6700cb8 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_66f3080
        public_6700cc0 : nop
        mov eax, offset public_6703548
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700cb0)
        ASM_EXPORT_ENTRY_FIRST(0x6700cb8, public_6700cb8)
        ASM_EXPORT_ENTRY_LAST(0x6700cc0, public_6700cc0)
    }
}

#undef public_6700cb8
#undef public_6700cc0

#pragma init_seg(compiler)
extern "C" void const* const public_6700cb8 = __AsmFindLabelExport(&internal_6700cb0, 0x6700cb8);
extern "C" void const* const public_6700cc0 = __AsmFindLabelExport(&internal_6700cb0, 0x6700cc0);
