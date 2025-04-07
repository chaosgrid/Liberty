#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248d4b _public_6248d4b

PROC_DECLARE(0x6248d40, internal_6248d40, public_6248d40);
/* CHUNK of public_62237a0 */
extern "C" NAKED register_t __cdecl internal_6248d40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248d4b : nop
        mov eax, offset public_6251c54
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248d40)
        ASM_EXPORT_ENTRY_SINGLE(0x6248d4b, public_6248d4b)
    }
}

#undef public_6248d4b

#pragma init_seg(compiler)
extern "C" void const* const public_6248d4b = __AsmFindLabelExport(&internal_6248d40, 0x6248d4b);
