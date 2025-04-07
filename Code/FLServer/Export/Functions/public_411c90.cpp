#include "FLServer-PCH.h"

PROC_DECLARE(0x411c90, internal_411c90, public_411c90);
extern "C" NAKED register_t __cdecl internal_411c90()
{
    __asm
    {
        mov word ptr ds : [public_428488], 3
        mov byte ptr ds : [public_42848a], 1
        ret 
        UNREACHABLE_TRAP(0x411c90)
    }
}
