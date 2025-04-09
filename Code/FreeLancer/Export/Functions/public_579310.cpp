#include "Freelancer-PCH.h"

PROC_DECLARE(0x579310, internal_579310, public_579310);
extern "C" NAKED register_t __cdecl internal_579310()
{
    __asm
    {
        mov dword ptr ds : [public_67c46c], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x579310)
    }
}
