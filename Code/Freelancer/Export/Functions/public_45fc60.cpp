#include "Freelancer-PCH.h"

PROC_DECLARE(0x45fc60, internal_45fc60, public_45fc60);
extern "C" NAKED register_t __cdecl internal_45fc60()
{
    __asm
    {
        fld dword ptr ds : [public_5ceef4]
        fmul dword ptr ds : [public_5cef60]
        fstp dword ptr ds : [public_66d4d4]
        ret 
        UNREACHABLE_TRAP(0x45fc60)
    }
}
