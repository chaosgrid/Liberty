#include "FLServer-PCH.h"

PROC_DECLARE(0x412880, internal_412880, public_412880);
extern "C" NAKED register_t __cdecl internal_412880()
{
    __asm
    {
        mov word ptr ds : [public_428c38], 3
        mov byte ptr ds : [public_428c3a], 1
        ret 
        UNREACHABLE_TRAP(0x412880)
    }
}
