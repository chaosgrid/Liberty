#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d530);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

PROC_DECLARE(0x40d530, internal_40d530, public_40d530);
/* CHUNK of public_40c4d0 */
extern "C" NAKED register_t __cdecl internal_40d530()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_418978
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40d530)
    }
}
