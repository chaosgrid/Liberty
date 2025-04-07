#include "Freelancer-PCH.h"

PROC_DECLARE(0x45de90, internal_45de90, public_45de90);
extern "C" NAKED register_t __cdecl internal_45de90()
{
    __asm
    {
        mov word ptr ds : [public_66da38], 3
        mov byte ptr ds : [public_66da3a], 1
        ret 
        UNREACHABLE_TRAP(0x45de90)
    }
}
