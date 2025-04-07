#include "FLServer-PCH.h"

PROC_DECLARE(0x40dbd0, internal_40dbd0, public_40dbd0);
extern "C" NAKED register_t __cdecl internal_40dbd0()
{
    __asm
    {
        mov word ptr ds : [public_427884], 4
        mov byte ptr ds : [public_427886], 1
        ret 
        UNREACHABLE_TRAP(0x40dbd0)
    }
}
