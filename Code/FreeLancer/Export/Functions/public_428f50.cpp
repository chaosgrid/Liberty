#include "Freelancer-PCH.h"

PROC_DECLARE(0x428f50, internal_428f50, public_428f50);
extern "C" NAKED register_t __cdecl internal_428f50()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_667a24], 0x40
        mov dword ptr ds : [public_667a28], eax
        mov dword ptr ds : [public_667a2c], 0xFFFFFFFF
        mov dword ptr ds : [public_667a30], eax
        ret 
        UNREACHABLE_TRAP(0x428f50)
    }
}
