#include "FLServer-PCH.h"

PROC_DECLARE(0x409970, internal_409970, public_409970);
extern "C" NAKED register_t __cdecl internal_409970()
{
    __asm
    {
        mov word ptr ds : [public_427800], 3
        mov byte ptr ds : [public_427802], 1
        ret 
        UNREACHABLE_TRAP(0x409970)
    }
}
