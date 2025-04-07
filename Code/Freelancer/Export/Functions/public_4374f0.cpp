#include "Freelancer-PCH.h"

PROC_DECLARE(0x4374f0, internal_4374f0, public_4374f0);
extern "C" NAKED register_t __cdecl internal_4374f0()
{
    __asm
    {
        mov word ptr ds : [public_6686d0], 4
        mov byte ptr ds : [public_6686d2], 1
        ret 
        UNREACHABLE_TRAP(0x4374f0)
    }
}
