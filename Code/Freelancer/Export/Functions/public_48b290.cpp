#include "Freelancer-PCH.h"

PROC_DECLARE(0x48b290, internal_48b290, public_48b290);
extern "C" NAKED register_t __cdecl internal_48b290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d2694]
        mov dword ptr ds : [public_67202c], eax
        ret 
        UNREACHABLE_TRAP(0x48b290)
    }
}
