#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624867b _public_624867b

PROC_DECLARE(0x6248670, internal_6248670, public_6248670);
/* CHUNK of public_621ad10 */
extern "C" NAKED register_t __cdecl internal_6248670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624867b : nop
        mov eax, offset public_6251548
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248670)
        ASM_EXPORT_ENTRY_SINGLE(0x624867b, public_624867b)
    }
}

#undef public_624867b

#pragma init_seg(compiler)
extern "C" void const* const public_624867b = __AsmFindLabelExport(&internal_6248670, 0x624867b);
