#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5648d0, internal_5648d0, public_5648d0);
extern "C" NAKED register_t __cdecl internal_5648d0()
{
    __asm
    {
        mov word ptr ds : [public_67c1d8], 3
        mov byte ptr ds : [public_67c1da], 1
        ret 
        UNREACHABLE_TRAP(0x5648d0)
    }
}
