#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6d60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

PROC_DECLARE(0x6ce6d60, internal_6ce6d60, public_6ce6d60);
/* CHUNK of public_6ce6d80 */
extern "C" NAKED register_t __cdecl internal_6ce6d60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6d5ffb0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ce6d60)
    }
}
