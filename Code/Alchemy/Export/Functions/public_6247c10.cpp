#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247c1b _public_6247c1b

PROC_DECLARE(0x6247c10, internal_6247c10, public_6247c10);
/* CHUNK of public_620f6b0 */
extern "C" NAKED register_t __cdecl internal_6247c10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247c1b : nop
        mov eax, offset public_6250a24
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247c10)
        ASM_EXPORT_ENTRY_SINGLE(0x6247c1b, public_6247c1b)
    }
}

#undef public_6247c1b

#pragma init_seg(compiler)
extern "C" void const* const public_6247c1b = __AsmFindLabelExport(&internal_6247c10, 0x6247c1b);
