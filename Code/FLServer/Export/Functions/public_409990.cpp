#include "FLServer-PCH.h"

PROC_DECLARE(0x409990, internal_409990, public_409990);
extern "C" NAKED register_t __cdecl internal_409990()
{
    __asm
    {
        mov word ptr ds : [public_427804], 4
        mov byte ptr ds : [public_427806], 1
        ret 
        UNREACHABLE_TRAP(0x409990)
    }
}
