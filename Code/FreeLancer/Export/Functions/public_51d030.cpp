#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51d030, internal_51d030, public_51d030);
extern "C" NAKED register_t __cdecl internal_51d030()
{
    __asm
    {
        mov dword ptr ds : [public_675278], 0
        mov dword ptr ds : [public_67527c], 0
        mov dword ptr ds : [public_675280], 0
        ret 
        UNREACHABLE_TRAP(0x51d030)
    }
}
