#include "Freelancer-PCH.h"

PROC_DECLARE(0x4cdf30, internal_4cdf30, public_4cdf30);
extern "C" NAKED register_t __cdecl internal_4cdf30()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_673f48], eax
        mov dword ptr ds : [public_6735c0], eax
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x4cdf30)
    }
}
