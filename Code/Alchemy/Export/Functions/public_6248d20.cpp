#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248d2b _public_6248d2b

PROC_DECLARE(0x6248d20, internal_6248d20, public_6248d20);
/* CHUNK of public_62234e0 */
extern "C" NAKED register_t __cdecl internal_6248d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248d2b : nop
        mov eax, offset public_6251c30
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248d20)
        ASM_EXPORT_ENTRY_SINGLE(0x6248d2b, public_6248d2b)
    }
}

#undef public_6248d2b

#pragma init_seg(compiler)
extern "C" void const* const public_6248d2b = __AsmFindLabelExport(&internal_6248d20, 0x6248d2b);
