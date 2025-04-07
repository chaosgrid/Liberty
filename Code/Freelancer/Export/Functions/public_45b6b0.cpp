#include "Freelancer-PCH.h"

PROC_DECLARE(0x45b6b0, internal_45b6b0, public_45b6b0);
extern "C" NAKED register_t __cdecl internal_45b6b0()
{
    __asm
    {
        mov word ptr ds : [public_66d3c8], 4
        mov byte ptr ds : [public_66d3ca], 1
        ret 
        UNREACHABLE_TRAP(0x45b6b0)
    }
}
