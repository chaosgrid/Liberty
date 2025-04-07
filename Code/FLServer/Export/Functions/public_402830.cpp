#include "FLServer-PCH.h"

PROC_DECLARE(0x402830, internal_402830, public_402830);
extern "C" NAKED register_t __cdecl internal_402830()
{
    __asm
    {
        mov word ptr ds : [public_425f94], 0
        mov byte ptr ds : [public_425f96], 1
        ret 
        UNREACHABLE_TRAP(0x402830)
    }
}
