#include "Freelancer-PCH.h"

PROC_DECLARE(0x5648b0, internal_5648b0, public_5648b0);
extern "C" NAKED register_t __cdecl internal_5648b0()
{
    __asm
    {
        mov word ptr ds : [public_67c1dc], 2
        mov byte ptr ds : [public_67c1de], 1
        ret 
        UNREACHABLE_TRAP(0x5648b0)
    }
}
