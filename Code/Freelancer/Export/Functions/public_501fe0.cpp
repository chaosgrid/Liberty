#include "Freelancer-PCH.h"

PROC_DECLARE(0x501fe0, internal_501fe0, public_501fe0);
extern "C" NAKED register_t __cdecl internal_501fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5da77c]
        mov dword ptr ds : [public_674fe4], eax
        ret 
        UNREACHABLE_TRAP(0x501fe0)
    }
}
