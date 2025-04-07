#include "FLServer-PCH.h"

PROC_DECLARE(0x40f8a0, internal_40f8a0, public_40f8a0);
extern "C" NAKED register_t __cdecl internal_40f8a0()
{
    __asm
    {
        mov word ptr ds : [public_427ce8], 2
        mov byte ptr ds : [public_427cea], 1
        ret 
        UNREACHABLE_TRAP(0x40f8a0)
    }
}
