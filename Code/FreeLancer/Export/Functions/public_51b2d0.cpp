#include "Freelancer-PCH.h"

PROC_DECLARE(0x51b2d0, internal_51b2d0, public_51b2d0);
extern "C" NAKED register_t __cdecl internal_51b2d0()
{
    __asm
    {
        fld dword ptr ds : [public_6164d0]
        fmul dword ptr ds : [public_6164d0]
        fstp dword ptr ds : [public_675230]
        ret 
        UNREACHABLE_TRAP(0x51b2d0)
    }
}
