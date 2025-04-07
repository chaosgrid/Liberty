#include "FLServer-PCH.h"

PROC_DECLARE(0x411c30, internal_411c30, public_411c30);
extern "C" NAKED register_t __cdecl internal_411c30()
{
    __asm
    {
        mov word ptr ds : [public_428490], 0
        mov byte ptr ds : [public_428492], 1
        ret 
        UNREACHABLE_TRAP(0x411c30)
    }
}
