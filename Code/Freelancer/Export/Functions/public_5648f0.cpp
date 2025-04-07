#include "Freelancer-PCH.h"

PROC_DECLARE(0x5648f0, internal_5648f0, public_5648f0);
extern "C" NAKED register_t __cdecl internal_5648f0()
{
    __asm
    {
        mov word ptr ds : [public_67c1d4], 4
        mov byte ptr ds : [public_67c1d6], 1
        ret 
        UNREACHABLE_TRAP(0x5648f0)
    }
}
