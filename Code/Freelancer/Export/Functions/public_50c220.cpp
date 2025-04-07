#include "Freelancer-PCH.h"

PROC_DECLARE(0x50c220, internal_50c220, public_50c220);
extern "C" NAKED register_t __cdecl internal_50c220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db350]
        mov dword ptr ds : [public_675090], eax
        ret 
        UNREACHABLE_TRAP(0x50c220)
    }
}
