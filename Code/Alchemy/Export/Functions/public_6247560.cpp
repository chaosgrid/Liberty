#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f30);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624756b _public_624756b

PROC_DECLARE(0x6247560, internal_6247560, public_6247560);
/* CHUNK of public_6207c40 */
extern "C" NAKED register_t __cdecl internal_6247560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209f30
        public_624756b : nop
        mov eax, offset public_625032c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247560)
        ASM_EXPORT_ENTRY_SINGLE(0x624756b, public_624756b)
    }
}

#undef public_624756b

#pragma init_seg(compiler)
extern "C" void const* const public_624756b = __AsmFindLabelExport(&internal_6247560, 0x624756b);
