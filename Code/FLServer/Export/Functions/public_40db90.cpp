#include "FLServer-PCH.h"

PROC_DECLARE(0x40db90, internal_40db90, public_40db90);
extern "C" NAKED register_t __cdecl internal_40db90()
{
    __asm
    {
        mov word ptr ds : [public_427c90], 2
        mov byte ptr ds : [public_427c92], 1
        ret 
        UNREACHABLE_TRAP(0x40db90)
    }
}
