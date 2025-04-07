#include "FLServer-PCH.h"

PROC_DECLARE(0x4067d0, internal_4067d0, public_4067d0);
extern "C" NAKED register_t __cdecl internal_4067d0()
{
    __asm
    {
        mov word ptr ds : [public_42620c], 4
        mov byte ptr ds : [public_42620e], 1
        ret 
        UNREACHABLE_TRAP(0x4067d0)
    }
}
