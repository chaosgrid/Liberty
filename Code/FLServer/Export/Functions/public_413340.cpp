#include "FLServer-PCH.h"

PROC_DECLARE(0x413340, internal_413340, public_413340);
extern "C" NAKED register_t __cdecl internal_413340()
{
    __asm
    {
        mov word ptr ds : [public_428c60], 3
        mov byte ptr ds : [public_428c62], 1
        ret 
        UNREACHABLE_TRAP(0x413340)
    }
}
