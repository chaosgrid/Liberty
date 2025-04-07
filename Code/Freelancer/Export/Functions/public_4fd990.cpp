#include "Freelancer-PCH.h"

PROC_DECLARE(0x4fd990, internal_4fd990, public_4fd990);
extern "C" NAKED register_t __cdecl internal_4fd990()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+8]
        and al, 1
        ret 
        UNREACHABLE_TRAP(0x4fd990)
    }
}
