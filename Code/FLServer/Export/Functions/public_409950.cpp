#include "FLServer-PCH.h"

PROC_DECLARE(0x409950, internal_409950, public_409950);
extern "C" NAKED register_t __cdecl internal_409950()
{
    __asm
    {
        mov word ptr ds : [public_427814], 2
        mov byte ptr ds : [public_427816], 1
        ret 
        UNREACHABLE_TRAP(0x409950)
    }
}
