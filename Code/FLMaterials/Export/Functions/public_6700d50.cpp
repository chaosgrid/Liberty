#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3080);
CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700d58 _public_6700d58
#define public_6700d60 _public_6700d60
#define public_6700d68 _public_6700d68
#define public_6700d70 _public_6700d70

PROC_DECLARE(0x6700d50, internal_6700d50, public_6700d50);
/* CHUNK of public_66fb540 */
extern "C" NAKED register_t __cdecl internal_6700d50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0x14]
        jmp public_66ff6b0
        public_6700d58 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_66f3080
        public_6700d60 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_66f3080
        public_6700d68 : nop
        lea ecx, ss:[ebp+8]
        jmp public_66ff6b0
        public_6700d70 : nop
        mov eax, offset public_6703638
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700d50)
        ASM_EXPORT_ENTRY_FIRST(0x6700d58, public_6700d58)
        ASM_EXPORT_ENTRY(0x6700d60, public_6700d60)
        ASM_EXPORT_ENTRY(0x6700d68, public_6700d68)
        ASM_EXPORT_ENTRY_LAST(0x6700d70, public_6700d70)
    }
}

#undef public_6700d58
#undef public_6700d60
#undef public_6700d68
#undef public_6700d70

#pragma init_seg(compiler)
extern "C" void const* const public_6700d58 = __AsmFindLabelExport(&internal_6700d50, 0x6700d58);
extern "C" void const* const public_6700d60 = __AsmFindLabelExport(&internal_6700d50, 0x6700d60);
extern "C" void const* const public_6700d68 = __AsmFindLabelExport(&internal_6700d50, 0x6700d68);
extern "C" void const* const public_6700d70 = __AsmFindLabelExport(&internal_6700d50, 0x6700d70);
