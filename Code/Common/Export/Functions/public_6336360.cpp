#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6336360);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x6336360, internal_6336360, public_6336360);
extern "C" NAKED register_t __cdecl internal_6336360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a998]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_658a998], eax
        mov dword ptr ds : [public_658a99c], eax
        mov dword ptr ds : [public_658a9a0], eax
        ret 
        UNREACHABLE_TRAP(0x6336360)
    }
}
