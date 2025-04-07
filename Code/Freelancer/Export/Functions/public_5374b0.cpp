#include "Freelancer-PCH.h"

PROC_DECLARE(0x5374b0, internal_5374b0, public_5374b0);
extern "C" NAKED register_t __cdecl internal_5374b0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_6789a4], 0x12C
        mov dword ptr ds : [public_6789a8], eax
        mov dword ptr ds : [public_6789ac], 0xFFFFFFFF
        mov dword ptr ds : [public_6789b0], eax
        ret 
        UNREACHABLE_TRAP(0x5374b0)
    }
}
