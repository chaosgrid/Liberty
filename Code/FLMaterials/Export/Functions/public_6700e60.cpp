#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f95c0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700e6b _public_6700e6b
#define public_6700e76 _public_6700e76
#define public_6700e81 _public_6700e81

PROC_DECLARE(0x6700e60, internal_6700e60, public_6700e60);
/* CHUNK of public_66ff3c0 */
extern "C" NAKED register_t __cdecl internal_6700e60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x6C
        jmp public_66f95c0
        public_6700e6b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_66f95c0
        public_6700e76 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x7C
        jmp public_66f95c0
        public_6700e81 : nop
        mov eax, offset public_670375c
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700e60)
        ASM_EXPORT_ENTRY_FIRST(0x6700e6b, public_6700e6b)
        ASM_EXPORT_ENTRY(0x6700e76, public_6700e76)
        ASM_EXPORT_ENTRY_LAST(0x6700e81, public_6700e81)
    }
}

#undef public_6700e6b
#undef public_6700e76
#undef public_6700e81

#pragma init_seg(compiler)
extern "C" void const* const public_6700e6b = __AsmFindLabelExport(&internal_6700e60, 0x6700e6b);
extern "C" void const* const public_6700e76 = __AsmFindLabelExport(&internal_6700e60, 0x6700e76);
extern "C" void const* const public_6700e81 = __AsmFindLabelExport(&internal_6700e60, 0x6700e81);
