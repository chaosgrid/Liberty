#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417280);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

PROC_DECLARE(0x417280, internal_417280, public_417280);
extern "C" NAKED register_t __cdecl internal_417280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_429dd0]
        push eax
        call public_418978
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_429dd0], eax
        mov dword ptr ds : [public_429dd4], eax
        mov dword ptr ds : [public_429dd8], eax
        ret 
        UNREACHABLE_TRAP(0x417280)
    }
}
