#include "Freelancer-PCH.h"

PROC_DECLARE(0x45ded0, internal_45ded0, public_45ded0);
extern "C" NAKED register_t __cdecl internal_45ded0()
{
    __asm
    {
        fld dword ptr ds : [public_5ceedc]
        fmul dword ptr ds : [public_5cef60]
        fstp dword ptr ds : [public_66da30]
        ret 
        UNREACHABLE_TRAP(0x45ded0)
    }
}
