#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393718 _public_6393718

PROC_DECLARE(0x6393710, internal_6393710, public_6393710);
/* CHUNK of public_6295440 */
extern "C" NAKED register_t __cdecl internal_6393710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629f2f0
        public_6393718 : nop
        mov eax, offset public_63ac908
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393710)
        ASM_EXPORT_ENTRY_SINGLE(0x6393718, public_6393718)
    }
}

#undef public_6393718

#pragma init_seg(compiler)
extern "C" void const* const public_6393718 = __AsmFindLabelExport(&internal_6393710, 0x6393718);
