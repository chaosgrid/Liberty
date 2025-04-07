#include "Freelancer-PCH.h"

PROC_DECLARE(0x40e220, internal_40e220, public_40e220);
extern "C" NAKED register_t __cdecl internal_40e220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c8460]
        mov dword ptr ds : [public_6164cc], eax
        ret 
        UNREACHABLE_TRAP(0x40e220)
    }
}
