#include "FLServer-PCH.h"

PROC_DECLARE(0x40d5f0, internal_40d5f0, public_40d5f0);
extern "C" NAKED register_t __cdecl internal_40d5f0()
{
    __asm
    {
        mov word ptr ds : [public_427850], 3
        mov byte ptr ds : [public_427852], 1
        ret 
        UNREACHABLE_TRAP(0x40d5f0)
    }
}
