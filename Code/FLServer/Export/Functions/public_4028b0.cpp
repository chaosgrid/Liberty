#include "FLServer-PCH.h"

PROC_DECLARE(0x4028b0, internal_4028b0, public_4028b0);
extern "C" NAKED register_t __cdecl internal_4028b0()
{
    __asm
    {
        mov word ptr ds : [public_425f90], 4
        mov byte ptr ds : [public_425f92], 1
        ret 
        UNREACHABLE_TRAP(0x4028b0)
    }
}
