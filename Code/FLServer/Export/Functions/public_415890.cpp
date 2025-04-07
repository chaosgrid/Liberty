#include "FLServer-PCH.h"

PROC_DECLARE(0x415890, internal_415890, public_415890);
extern "C" NAKED register_t __cdecl internal_415890()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_429538], ax
        mov byte ptr ds : [public_42953a], al
        ret 
        UNREACHABLE_TRAP(0x415890)
    }
}
