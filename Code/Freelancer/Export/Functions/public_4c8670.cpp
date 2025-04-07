#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c8670, internal_4c8670, public_4c8670);
extern "C" NAKED register_t __cdecl internal_4c8670()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x38]
        ret 
        UNREACHABLE_TRAP(0x4c8670)
    }
}
