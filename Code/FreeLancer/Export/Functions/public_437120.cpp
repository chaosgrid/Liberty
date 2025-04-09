#include "Freelancer-PCH.h"

PROC_DECLARE(0x437120, internal_437120, public_437120);
extern "C" NAKED register_t __cdecl internal_437120()
{
    __asm
    {
        mov word ptr ds : [public_6686a8], 4
        mov byte ptr ds : [public_6686aa], 1
        ret 
        UNREACHABLE_TRAP(0x437120)
    }
}
