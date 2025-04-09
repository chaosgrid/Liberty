#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c9750, internal_4c9750, public_4c9750);
extern "C" NAKED register_t __cdecl internal_4c9750()
{
    __asm
    {
        mov word ptr ds : [public_6748d0], 4
        mov byte ptr ds : [public_6748d2], 1
        ret 
        UNREACHABLE_TRAP(0x4c9750)
    }
}
