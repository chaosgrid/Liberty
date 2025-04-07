#include "Freelancer-PCH.h"

PROC_DECLARE(0x564af0, internal_564af0, public_564af0);
extern "C" NAKED register_t __cdecl internal_564af0()
{
    __asm
    {
        mov byte ptr ds : [public_67bd40], 0
        ret 
        UNREACHABLE_TRAP(0x564af0)
    }
}
