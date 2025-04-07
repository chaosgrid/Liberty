#include "FLServer-PCH.h"

PROC_DECLARE(0x40d5d0, internal_40d5d0, public_40d5d0);
extern "C" NAKED register_t __cdecl internal_40d5d0()
{
    __asm
    {
        mov word ptr ds : [public_42785c], 2
        mov byte ptr ds : [public_42785e], 1
        ret 
        UNREACHABLE_TRAP(0x40d5d0)
    }
}
