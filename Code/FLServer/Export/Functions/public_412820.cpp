#include "FLServer-PCH.h"

PROC_DECLARE(0x412820, internal_412820, public_412820);
extern "C" NAKED register_t __cdecl internal_412820()
{
    __asm
    {
        mov word ptr ds : [public_428c40], 0
        mov byte ptr ds : [public_428c42], 1
        ret 
        UNREACHABLE_TRAP(0x412820)
    }
}
