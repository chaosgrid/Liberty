#include "Freelancer-PCH.h"

PROC_DECLARE(0x51e9f0, internal_51e9f0, public_51e9f0);
extern "C" NAKED register_t __cdecl internal_51e9f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc2c0]
        mov dword ptr ds : [public_6752e4], eax
        ret 
        UNREACHABLE_TRAP(0x51e9f0)
    }
}
