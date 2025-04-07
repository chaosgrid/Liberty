#include "FLServer-PCH.h"

PROC_DECLARE(0x413c90, internal_413c90, public_413c90);
extern "C" NAKED register_t __cdecl internal_413c90()
{
    __asm
    {
        mov word ptr ds : [public_4294e0], 3
        mov byte ptr ds : [public_4294e2], 1
        ret 
        UNREACHABLE_TRAP(0x413c90)
    }
}
