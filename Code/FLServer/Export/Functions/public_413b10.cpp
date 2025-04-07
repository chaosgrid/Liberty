#include "FLServer-PCH.h"

PROC_DECLARE(0x413b10, internal_413b10, public_413b10);
extern "C" NAKED register_t __cdecl internal_413b10()
{
    __asm
    {
        mov word ptr ds : [public_428cbc], 2
        mov byte ptr ds : [public_428cbe], 1
        ret 
        UNREACHABLE_TRAP(0x413b10)
    }
}
