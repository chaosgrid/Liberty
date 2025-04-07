#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62471ab _public_62471ab

PROC_DECLARE(0x62471a0, internal_62471a0, public_62471a0);
/* CHUNK of public_6201d60 */
extern "C" NAKED register_t __cdecl internal_62471a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62471ab : nop
        mov eax, offset public_624ff2c
        jmp public_6246126
        UNREACHABLE_TRAP(0x62471a0)
        ASM_EXPORT_ENTRY_SINGLE(0x62471ab, public_62471ab)
    }
}

#undef public_62471ab

#pragma init_seg(compiler)
extern "C" void const* const public_62471ab = __AsmFindLabelExport(&internal_62471a0, 0x62471ab);
