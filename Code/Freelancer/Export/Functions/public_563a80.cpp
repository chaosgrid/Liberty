#include "Freelancer-PCH.h"

PROC_DECLARE(0x563a80, internal_563a80, public_563a80);
extern "C" NAKED register_t __cdecl internal_563a80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e21e0]
        mov dword ptr ds : [public_67a490], eax
        ret 
        UNREACHABLE_TRAP(0x563a80)
    }
}
