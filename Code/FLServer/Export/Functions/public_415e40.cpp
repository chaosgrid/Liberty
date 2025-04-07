#include "FLServer-PCH.h"

PROC_DECLARE(0x415e40, internal_415e40, public_415e40);
extern "C" NAKED register_t __cdecl internal_415e40()
{
    __asm
    {
        mov word ptr ds : [public_429da0], 0
        mov byte ptr ds : [public_429da2], 1
        ret 
        UNREACHABLE_TRAP(0x415e40)
    }
}
