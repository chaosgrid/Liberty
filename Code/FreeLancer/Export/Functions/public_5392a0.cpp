#include "Freelancer-PCH.h"

PROC_DECLARE(0x5392a0, internal_5392a0, public_5392a0);
extern "C" NAKED register_t __cdecl internal_5392a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de758]
        mov dword ptr ds : [public_6789cc], eax
        ret 
        UNREACHABLE_TRAP(0x5392a0)
    }
}
