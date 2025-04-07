#include "FLServer-PCH.h"

PROC_DECLARE(0x4067b0, internal_4067b0, public_4067b0);
extern "C" NAKED register_t __cdecl internal_4067b0()
{
    __asm
    {
        mov word ptr ds : [public_426208], 3
        mov byte ptr ds : [public_42620a], 1
        ret 
        UNREACHABLE_TRAP(0x4067b0)
    }
}
