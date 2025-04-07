#include "Freelancer-PCH.h"

PROC_DECLARE(0x53ec00, internal_53ec00, public_53ec00);
extern "C" NAKED register_t __cdecl internal_53ec00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df818]
        mov dword ptr ds : [public_678a24], eax
        ret 
        UNREACHABLE_TRAP(0x53ec00)
    }
}
