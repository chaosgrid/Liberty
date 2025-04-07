#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf47a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad99c9);

#define public_6ad9ce4 _public_6ad9ce4

PROC_DECLARE(0x6ad9cdc, internal_6ad9cdc, public_6ad9cdc);
/* CHUNK of public_6ad970e */
extern "C" NAKED register_t __cdecl internal_6ad9cdc()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6ad99c9
        public_6ad9ce4 : nop
        mov eax, offset public_6adb5b8
        jmp public_6acf47a
        UNREACHABLE_TRAP(0x6ad9cdc)
        ASM_EXPORT_ENTRY_SINGLE(0x6ad9ce4, public_6ad9ce4)
    }
}

#undef public_6ad9ce4

#pragma init_seg(compiler)
extern "C" void const* const public_6ad9ce4 = __AsmFindLabelExport(&internal_6ad9cdc, 0x6ad9ce4);
