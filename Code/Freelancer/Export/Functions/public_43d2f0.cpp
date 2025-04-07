#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d2f0, internal_43d2f0, public_43d2f0);
extern "C" NAKED register_t __cdecl internal_43d2f0()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x14], 0
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x43d2f0)
    }
}
