#include "Freelancer-PCH.h"

PROC_DECLARE(0x552b50, internal_552b50, public_552b50);
extern "C" NAKED register_t __cdecl internal_552b50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0e18]
        mov dword ptr ds : [public_679944], eax
        ret 
        UNREACHABLE_TRAP(0x552b50)
    }
}
