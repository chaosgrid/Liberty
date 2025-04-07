#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248deb _public_6248deb

PROC_DECLARE(0x6248de0, internal_6248de0, public_6248de0);
/* CHUNK of public_6224b60 */
extern "C" NAKED register_t __cdecl internal_6248de0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248deb : nop
        mov eax, offset public_6251d04
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248de0)
        ASM_EXPORT_ENTRY_SINGLE(0x6248deb, public_6248deb)
    }
}

#undef public_6248deb

#pragma init_seg(compiler)
extern "C" void const* const public_6248deb = __AsmFindLabelExport(&internal_6248de0, 0x6248deb);
