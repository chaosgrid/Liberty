#include "Freelancer-PCH.h"

PROC_DECLARE(0x564870, internal_564870, public_564870);
extern "C" NAKED register_t __cdecl internal_564870()
{
    __asm
    {
        mov word ptr ds : [public_67c1e4], 0
        mov byte ptr ds : [public_67c1e6], 1
        ret 
        UNREACHABLE_TRAP(0x564870)
    }
}
