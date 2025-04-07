#include "FLServer-PCH.h"

PROC_DECLARE(0x413600, internal_413600, public_413600);
extern "C" NAKED register_t __cdecl internal_413600()
{
    __asm
    {
        mov word ptr ds : [public_428c90], 0
        mov byte ptr ds : [public_428c92], 1
        ret 
        UNREACHABLE_TRAP(0x413600)
    }
}
