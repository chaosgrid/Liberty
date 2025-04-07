#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242ea0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

PROC_DECLARE(0x6242ea0, internal_6242ea0, public_6242ea0);
extern "C" NAKED register_t __cdecl internal_6242ea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_62460e0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6242ea0)
    }
}
