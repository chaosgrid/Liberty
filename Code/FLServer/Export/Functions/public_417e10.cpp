#include "FLServer-PCH.h"

PROC_DECLARE(0x417e10, internal_417e10, public_417e10);
extern "C" NAKED register_t __cdecl internal_417e10()
{
    __asm
    {
        mov word ptr ds : [public_429e14], 0
        mov byte ptr ds : [public_429e16], 1
        ret 
        UNREACHABLE_TRAP(0x417e10)
    }
}
