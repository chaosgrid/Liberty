#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247b1b _public_6247b1b

PROC_DECLARE(0x6247b10, internal_6247b10, public_6247b10);
/* CHUNK of public_620e6c0 */
extern "C" NAKED register_t __cdecl internal_6247b10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247b1b : nop
        mov eax, offset public_625092c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247b10)
        ASM_EXPORT_ENTRY_SINGLE(0x6247b1b, public_6247b1b)
    }
}

#undef public_6247b1b

#pragma init_seg(compiler)
extern "C" void const* const public_6247b1b = __AsmFindLabelExport(&internal_6247b10, 0x6247b1b);
