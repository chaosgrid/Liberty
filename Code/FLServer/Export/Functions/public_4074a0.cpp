#include "FLServer-PCH.h"

PROC_DECLARE(0x4074a0, internal_4074a0, public_4074a0);
extern "C" NAKED register_t __cdecl internal_4074a0()
{
    __asm
    {
        mov word ptr ds : [public_426260], 4
        mov byte ptr ds : [public_426262], 1
        ret 
        UNREACHABLE_TRAP(0x4074a0)
    }
}
