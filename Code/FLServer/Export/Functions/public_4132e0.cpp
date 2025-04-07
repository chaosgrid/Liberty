#include "FLServer-PCH.h"

PROC_DECLARE(0x4132e0, internal_4132e0, public_4132e0);
extern "C" NAKED register_t __cdecl internal_4132e0()
{
    __asm
    {
        mov word ptr ds : [public_428c68], 0
        mov byte ptr ds : [public_428c6a], 1
        ret 
        UNREACHABLE_TRAP(0x4132e0)
    }
}
