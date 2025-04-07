#include "FLServer-PCH.h"

PROC_DECLARE(0x4158d0, internal_4158d0, public_4158d0);
extern "C" NAKED register_t __cdecl internal_4158d0()
{
    __asm
    {
        mov word ptr ds : [public_429544], 3
        mov byte ptr ds : [public_429546], 1
        ret 
        UNREACHABLE_TRAP(0x4158d0)
    }
}
