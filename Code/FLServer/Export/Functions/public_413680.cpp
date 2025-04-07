#include "FLServer-PCH.h"

PROC_DECLARE(0x413680, internal_413680, public_413680);
extern "C" NAKED register_t __cdecl internal_413680()
{
    __asm
    {
        mov word ptr ds : [public_428c8c], 4
        mov byte ptr ds : [public_428c8e], 1
        ret 
        UNREACHABLE_TRAP(0x413680)
    }
}
