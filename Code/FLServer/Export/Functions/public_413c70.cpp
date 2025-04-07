#include "FLServer-PCH.h"

PROC_DECLARE(0x413c70, internal_413c70, public_413c70);
extern "C" NAKED register_t __cdecl internal_413c70()
{
    __asm
    {
        mov word ptr ds : [public_429500], 2
        mov byte ptr ds : [public_429502], 1
        ret 
        UNREACHABLE_TRAP(0x413c70)
    }
}
