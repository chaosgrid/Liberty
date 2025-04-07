#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393b98 _public_6393b98

PROC_DECLARE(0x6393b90, internal_6393b90, public_6393b90);
/* CHUNK of public_629f340 */
extern "C" NAKED register_t __cdecl internal_6393b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629f2f0
        public_6393b98 : nop
        mov eax, offset public_63acf04
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393b90)
        ASM_EXPORT_ENTRY_SINGLE(0x6393b98, public_6393b98)
    }
}

#undef public_6393b98

#pragma init_seg(compiler)
extern "C" void const* const public_6393b98 = __AsmFindLabelExport(&internal_6393b90, 0x6393b98);
