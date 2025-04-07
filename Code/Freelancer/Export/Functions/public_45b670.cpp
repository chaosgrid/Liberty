#include "Freelancer-PCH.h"

PROC_DECLARE(0x45b670, internal_45b670, public_45b670);
extern "C" NAKED register_t __cdecl internal_45b670()
{
    __asm
    {
        mov word ptr ds : [public_66d3d0], 2
        mov byte ptr ds : [public_66d3d2], 1
        ret 
        UNREACHABLE_TRAP(0x45b670)
    }
}
