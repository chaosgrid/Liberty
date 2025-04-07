#include "FLServer-PCH.h"

PROC_DECLARE(0x402890, internal_402890, public_402890);
extern "C" NAKED register_t __cdecl internal_402890()
{
    __asm
    {
        mov word ptr ds : [public_425f8c], 3
        mov byte ptr ds : [public_425f8e], 1
        ret 
        UNREACHABLE_TRAP(0x402890)
    }
}
