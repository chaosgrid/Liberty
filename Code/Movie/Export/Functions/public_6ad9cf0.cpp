#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf47a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c7a);

#define public_6ad9cf8 _public_6ad9cf8

PROC_DECLARE(0x6ad9cf0, internal_6ad9cf0, public_6ad9cf0);
/* CHUNK of public_6ad97f6 */
extern "C" NAKED register_t __cdecl internal_6ad9cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ad9c7a
        public_6ad9cf8 : nop
        mov eax, offset public_6adb5e0
        jmp public_6acf47a
        UNREACHABLE_TRAP(0x6ad9cf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6ad9cf8, public_6ad9cf8)
    }
}

#undef public_6ad9cf8

#pragma init_seg(compiler)
extern "C" void const* const public_6ad9cf8 = __AsmFindLabelExport(&internal_6ad9cf0, 0x6ad9cf8);
