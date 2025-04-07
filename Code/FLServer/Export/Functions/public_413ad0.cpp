#include "FLServer-PCH.h"

PROC_DECLARE(0x413ad0, internal_413ad0, public_413ad0);
extern "C" NAKED register_t __cdecl internal_413ad0()
{
    __asm
    {
        mov word ptr ds : [public_428cb8], 0
        mov byte ptr ds : [public_428cba], 1
        ret 
        UNREACHABLE_TRAP(0x413ad0)
    }
}
