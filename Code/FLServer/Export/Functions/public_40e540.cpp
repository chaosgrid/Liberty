#include "FLServer-PCH.h"

PROC_DECLARE(0x40e540, internal_40e540, public_40e540);
extern "C" NAKED register_t __cdecl internal_40e540()
{
    __asm
    {
        mov word ptr ds : [public_427cc0], 2
        mov byte ptr ds : [public_427cc2], 1
        ret 
        UNREACHABLE_TRAP(0x40e540)
    }
}
