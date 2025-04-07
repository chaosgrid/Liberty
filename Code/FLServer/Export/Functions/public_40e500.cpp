#include "FLServer-PCH.h"

PROC_DECLARE(0x40e500, internal_40e500, public_40e500);
extern "C" NAKED register_t __cdecl internal_40e500()
{
    __asm
    {
        mov word ptr ds : [public_427cbc], 0
        mov byte ptr ds : [public_427cbe], 1
        ret 
        UNREACHABLE_TRAP(0x40e500)
    }
}
