#include "Freelancer-PCH.h"

PROC_DECLARE(0x45deb0, internal_45deb0, public_45deb0);
extern "C" NAKED register_t __cdecl internal_45deb0()
{
    __asm
    {
        mov word ptr ds : [public_66da34], 4
        mov byte ptr ds : [public_66da36], 1
        ret 
        UNREACHABLE_TRAP(0x45deb0)
    }
}
