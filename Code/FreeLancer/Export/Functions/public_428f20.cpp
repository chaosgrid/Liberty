#include "Freelancer-PCH.h"

PROC_DECLARE(0x428f20, internal_428f20, public_428f20);
extern "C" NAKED register_t __cdecl internal_428f20()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_667a34], 0x64
        mov dword ptr ds : [public_667a38], eax
        mov dword ptr ds : [public_667a3c], 0xFFFFFFFF
        mov dword ptr ds : [public_667a40], eax
        ret 
        UNREACHABLE_TRAP(0x428f20)
    }
}
