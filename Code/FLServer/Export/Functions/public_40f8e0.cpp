#include "FLServer-PCH.h"

PROC_DECLARE(0x40f8e0, internal_40f8e0, public_40f8e0);
extern "C" NAKED register_t __cdecl internal_40f8e0()
{
    __asm
    {
        mov word ptr ds : [public_427ce0], 4
        mov byte ptr ds : [public_427ce2], 1
        ret 
        UNREACHABLE_TRAP(0x40f8e0)
    }
}
