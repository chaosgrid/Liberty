#include "FLServer-PCH.h"

PROC_DECLARE(0x40e580, internal_40e580, public_40e580);
extern "C" NAKED register_t __cdecl internal_40e580()
{
    __asm
    {
        mov word ptr ds : [public_427cb8], 4
        mov byte ptr ds : [public_427cba], 1
        ret 
        UNREACHABLE_TRAP(0x40e580)
    }
}
