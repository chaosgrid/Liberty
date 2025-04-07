#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624898b _public_624898b

PROC_DECLARE(0x6248980, internal_6248980, public_6248980);
/* CHUNK of public_621d140 */
extern "C" NAKED register_t __cdecl internal_6248980()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624898b : nop
        mov eax, offset public_6251838
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248980)
        ASM_EXPORT_ENTRY_SINGLE(0x624898b, public_624898b)
    }
}

#undef public_624898b

#pragma init_seg(compiler)
extern "C" void const* const public_624898b = __AsmFindLabelExport(&internal_6248980, 0x624898b);
