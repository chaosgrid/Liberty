#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c96d0, internal_4c96d0, public_4c96d0);
extern "C" NAKED register_t __cdecl internal_4c96d0()
{
    __asm
    {
        mov word ptr ds : [public_6748e0], 0
        mov byte ptr ds : [public_6748e2], 1
        ret 
        UNREACHABLE_TRAP(0x4c96d0)
    }
}
