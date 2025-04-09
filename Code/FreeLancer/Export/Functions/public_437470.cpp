#include "Freelancer-PCH.h"

PROC_DECLARE(0x437470, internal_437470, public_437470);
extern "C" NAKED register_t __cdecl internal_437470()
{
    __asm
    {
        mov word ptr ds : [public_6686e0], 0
        mov byte ptr ds : [public_6686e2], 1
        ret 
        UNREACHABLE_TRAP(0x437470)
    }
}
