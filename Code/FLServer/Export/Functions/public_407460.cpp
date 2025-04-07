#include "FLServer-PCH.h"

PROC_DECLARE(0x407460, internal_407460, public_407460);
extern "C" NAKED register_t __cdecl internal_407460()
{
    __asm
    {
        mov word ptr ds : [public_426268], 2
        mov byte ptr ds : [public_42626a], 1
        ret 
        UNREACHABLE_TRAP(0x407460)
    }
}
