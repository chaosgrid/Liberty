#include "FLServer-PCH.h"

PROC_DECLARE(0x413360, internal_413360, public_413360);
extern "C" NAKED register_t __cdecl internal_413360()
{
    __asm
    {
        mov word ptr ds : [public_428c64], 4
        mov byte ptr ds : [public_428c66], 1
        ret 
        UNREACHABLE_TRAP(0x413360)
    }
}
