#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66ff6b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700b98 _public_6700b98
#define public_6700ba0 _public_6700ba0
#define public_6700ba8 _public_6700ba8
#define public_6700bb0 _public_6700bb0
#define public_6700bb8 _public_6700bb8

PROC_DECLARE(0x6700b90, internal_6700b90, public_6700b90);
/* CHUNK of public_66f4d20 */
extern "C" NAKED register_t __cdecl internal_6700b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_66ff6b0
        public_6700b98 : nop
        lea ecx, ss:[ebp-0x58]
        jmp public_66f3cd0
        public_6700ba0 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_66f1ac0
        public_6700ba8 : nop
        lea ecx, ss:[ebp-0x48]
        jmp public_66f1ac0
        public_6700bb0 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_66f1ac0
        public_6700bb8 : nop
        mov eax, offset public_6703400
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700b90)
        ASM_EXPORT_ENTRY_FIRST(0x6700b98, public_6700b98)
        ASM_EXPORT_ENTRY(0x6700ba0, public_6700ba0)
        ASM_EXPORT_ENTRY(0x6700ba8, public_6700ba8)
        ASM_EXPORT_ENTRY(0x6700bb0, public_6700bb0)
        ASM_EXPORT_ENTRY_LAST(0x6700bb8, public_6700bb8)
    }
}

#undef public_6700b98
#undef public_6700ba0
#undef public_6700ba8
#undef public_6700bb0
#undef public_6700bb8

#pragma init_seg(compiler)
extern "C" void const* const public_6700b98 = __AsmFindLabelExport(&internal_6700b90, 0x6700b98);
extern "C" void const* const public_6700ba0 = __AsmFindLabelExport(&internal_6700b90, 0x6700ba0);
extern "C" void const* const public_6700ba8 = __AsmFindLabelExport(&internal_6700b90, 0x6700ba8);
extern "C" void const* const public_6700bb0 = __AsmFindLabelExport(&internal_6700b90, 0x6700bb0);
extern "C" void const* const public_6700bb8 = __AsmFindLabelExport(&internal_6700b90, 0x6700bb8);
