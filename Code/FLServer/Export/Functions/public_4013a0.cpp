#include "FLServer-PCH.h"

PROC_DECLARE(0x4013a0, internal_4013a0, public_4013a0);
extern "C" NAKED register_t __cdecl internal_4013a0()
{
    __asm
    {
        mov word ptr ds : [public_425f3c], 0
        mov byte ptr ds : [public_425f3e], 1
        ret 
        UNREACHABLE_TRAP(0x4013a0)
    }
}
