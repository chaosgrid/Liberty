#include "Freelancer-PCH.h"

PROC_DECLARE(0x548de0, internal_548de0, public_548de0);
extern "C" NAKED register_t __cdecl internal_548de0()
{
    __asm
    {
        mov word ptr ds : [public_67975c], 0
        mov byte ptr ds : [public_67975e], 1
        ret 
        UNREACHABLE_TRAP(0x548de0)
    }
}
