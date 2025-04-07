#include "FLServer-PCH.h"

PROC_DECLARE(0x413b50, internal_413b50, public_413b50);
extern "C" NAKED register_t __cdecl internal_413b50()
{
    __asm
    {
        mov word ptr ds : [public_428cb4], 4
        mov byte ptr ds : [public_428cb6], 1
        ret 
        UNREACHABLE_TRAP(0x413b50)
    }
}
