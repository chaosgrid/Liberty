#include "FLServer-PCH.h"

PROC_DECLARE(0x4158b0, internal_4158b0, public_4158b0);
extern "C" NAKED register_t __cdecl internal_4158b0()
{
    __asm
    {
        mov word ptr ds : [public_429550], 2
        mov byte ptr ds : [public_429552], 1
        ret 
        UNREACHABLE_TRAP(0x4158b0)
    }
}
