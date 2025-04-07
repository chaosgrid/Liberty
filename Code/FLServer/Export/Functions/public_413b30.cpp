#include "FLServer-PCH.h"

PROC_DECLARE(0x413b30, internal_413b30, public_413b30);
extern "C" NAKED register_t __cdecl internal_413b30()
{
    __asm
    {
        mov word ptr ds : [public_428cb0], 3
        mov byte ptr ds : [public_428cb2], 1
        ret 
        UNREACHABLE_TRAP(0x413b30)
    }
}
