#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce83e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

PROC_DECLARE(0x6ce83e0, internal_6ce83e0, public_6ce83e0);
/* CHUNK of public_6ce8080 */
extern "C" NAKED register_t __cdecl internal_6ce83e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        call public_6d5ffb0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ce83e0)
    }
}
