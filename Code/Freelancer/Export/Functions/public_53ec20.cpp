#include "Freelancer-PCH.h"

PROC_DECLARE(0x53ec20, internal_53ec20, public_53ec20);
extern "C" NAKED register_t __cdecl internal_53ec20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df81c]
        mov dword ptr ds : [public_678a1c], eax
        ret 
        UNREACHABLE_TRAP(0x53ec20)
    }
}
