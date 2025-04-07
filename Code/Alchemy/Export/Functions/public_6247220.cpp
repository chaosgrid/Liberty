#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624722b _public_624722b

PROC_DECLARE(0x6247220, internal_6247220, public_6247220);
/* CHUNK of public_6203ed0 */
extern "C" NAKED register_t __cdecl internal_6247220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624722b : nop
        mov eax, offset public_624ffc4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247220)
        ASM_EXPORT_ENTRY_SINGLE(0x624722b, public_624722b)
    }
}

#undef public_624722b

#pragma init_seg(compiler)
extern "C" void const* const public_624722b = __AsmFindLabelExport(&internal_6247220, 0x624722b);
