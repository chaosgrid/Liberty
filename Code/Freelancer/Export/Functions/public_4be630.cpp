#include "Freelancer-PCH.h"

PROC_DECLARE(0x4be630, internal_4be630, public_4be630);
extern "C" NAKED register_t __cdecl internal_4be630()
{
    __asm
    {
        mov word ptr ds : [public_67248c], 3
        mov byte ptr ds : [public_67248e], 1
        ret 
        UNREACHABLE_TRAP(0x4be630)
    }
}
