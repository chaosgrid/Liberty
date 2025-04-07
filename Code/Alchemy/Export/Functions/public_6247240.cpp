#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624724b _public_624724b

PROC_DECLARE(0x6247240, internal_6247240, public_6247240);
/* CHUNK of public_6204120 */
extern "C" NAKED register_t __cdecl internal_6247240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624724b : nop
        mov eax, offset public_624ffe8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247240)
        ASM_EXPORT_ENTRY_SINGLE(0x624724b, public_624724b)
    }
}

#undef public_624724b

#pragma init_seg(compiler)
extern "C" void const* const public_624724b = __AsmFindLabelExport(&internal_6247240, 0x624724b);
