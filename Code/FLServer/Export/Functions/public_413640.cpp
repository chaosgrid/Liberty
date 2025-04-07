#include "FLServer-PCH.h"

PROC_DECLARE(0x413640, internal_413640, public_413640);
extern "C" NAKED register_t __cdecl internal_413640()
{
    __asm
    {
        mov word ptr ds : [public_428c94], 2
        mov byte ptr ds : [public_428c96], 1
        ret 
        UNREACHABLE_TRAP(0x413640)
    }
}
