#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c9730, internal_4c9730, public_4c9730);
extern "C" NAKED register_t __cdecl internal_4c9730()
{
    __asm
    {
        mov word ptr ds : [public_6748d4], 3
        mov byte ptr ds : [public_6748d6], 1
        ret 
        UNREACHABLE_TRAP(0x4c9730)
    }
}
