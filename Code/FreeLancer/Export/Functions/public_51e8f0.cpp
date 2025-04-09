#include "Freelancer-PCH.h"

PROC_DECLARE(0x51e8f0, internal_51e8f0, public_51e8f0);
extern "C" NAKED register_t __cdecl internal_51e8f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc2b8]
        mov dword ptr ds : [public_6752d4], eax
        ret 
        UNREACHABLE_TRAP(0x51e8f0)
    }
}
