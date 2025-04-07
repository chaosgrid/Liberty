#include "FLServer-PCH.h"

PROC_DECLARE(0x413660, internal_413660, public_413660);
extern "C" NAKED register_t __cdecl internal_413660()
{
    __asm
    {
        mov word ptr ds : [public_428c88], 3
        mov byte ptr ds : [public_428c8a], 1
        ret 
        UNREACHABLE_TRAP(0x413660)
    }
}
