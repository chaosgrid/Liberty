#include "FLServer-PCH.h"

PROC_DECLARE(0x415720, internal_415720, public_415720);
extern "C" NAKED register_t __cdecl internal_415720()
{
    __asm
    {
        mov word ptr ds : [public_42951c], 3
        mov byte ptr ds : [public_42951e], 1
        ret 
        UNREACHABLE_TRAP(0x415720)
    }
}
