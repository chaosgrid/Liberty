#include "FLServer-PCH.h"

PROC_DECLARE(0x40e560, internal_40e560, public_40e560);
extern "C" NAKED register_t __cdecl internal_40e560()
{
    __asm
    {
        mov word ptr ds : [public_427cb4], 3
        mov byte ptr ds : [public_427cb6], 1
        ret 
        UNREACHABLE_TRAP(0x40e560)
    }
}
