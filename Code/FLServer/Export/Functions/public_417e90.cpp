#include "FLServer-PCH.h"

PROC_DECLARE(0x417e90, internal_417e90, public_417e90);
extern "C" NAKED register_t __cdecl internal_417e90()
{
    __asm
    {
        mov word ptr ds : [public_429e10], 4
        mov byte ptr ds : [public_429e12], 1
        ret 
        UNREACHABLE_TRAP(0x417e90)
    }
}
