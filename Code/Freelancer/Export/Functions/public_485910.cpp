#include "Freelancer-PCH.h"

PROC_DECLARE(0x485910, internal_485910, public_485910);
extern "C" NAKED register_t __cdecl internal_485910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d1d2c]
        mov dword ptr ds : [public_671f44], eax
        ret 
        UNREACHABLE_TRAP(0x485910)
    }
}
