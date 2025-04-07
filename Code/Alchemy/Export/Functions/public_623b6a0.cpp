#include "Alchemy-PCH.h"

PROC_DECLARE(0x623b6a0, internal_623b6a0, public_623b6a0);
extern "C" NAKED register_t __cdecl internal_623b6a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6257b9c], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623b6a0)
    }
}
