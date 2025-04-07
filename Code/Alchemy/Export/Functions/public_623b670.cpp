#include "Alchemy-PCH.h"

PROC_DECLARE(0x623b670, internal_623b670, public_623b670);
extern "C" NAKED register_t __cdecl internal_623b670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6257b98], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623b670)
    }
}
