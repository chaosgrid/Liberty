#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542310, internal_542310, public_542310);
extern "C" NAKED register_t __cdecl internal_542310()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df8c0]
        mov dword ptr ds : [public_678ae8], eax
        ret 
        UNREACHABLE_TRAP(0x542310)
    }
}
