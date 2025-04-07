#include "Freelancer-PCH.h"

PROC_DECLARE(0x437070, internal_437070, public_437070);
extern "C" NAKED register_t __cdecl internal_437070()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cae10]
        mov dword ptr ds : [public_6686c4], eax
        ret 
        UNREACHABLE_TRAP(0x437070)
    }
}
