#include "FLServer-PCH.h"

PROC_DECLARE(0x409160, internal_409160, public_409160);
extern "C" NAKED register_t __cdecl internal_409160()
{
    __asm
    {
        mov word ptr ds : [public_426bb0], 0
        mov byte ptr ds : [public_426bb2], 1
        ret 
        UNREACHABLE_TRAP(0x409160)
    }
}
