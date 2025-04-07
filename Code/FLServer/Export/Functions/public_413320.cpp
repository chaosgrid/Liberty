#include "FLServer-PCH.h"

PROC_DECLARE(0x413320, internal_413320, public_413320);
extern "C" NAKED register_t __cdecl internal_413320()
{
    __asm
    {
        mov word ptr ds : [public_428c6c], 2
        mov byte ptr ds : [public_428c6e], 1
        ret 
        UNREACHABLE_TRAP(0x413320)
    }
}
