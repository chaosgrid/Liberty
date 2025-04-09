#include "Freelancer-PCH.h"

PROC_DECLARE(0x45ab30, internal_45ab30, public_45ab30);
extern "C" NAKED register_t __cdecl internal_45ab30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce830]
        mov dword ptr ds : [public_66d390], eax
        ret 
        UNREACHABLE_TRAP(0x45ab30)
    }
}
