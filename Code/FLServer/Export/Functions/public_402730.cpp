#include "FLServer-PCH.h"

PROC_DECLARE(0x402730, internal_402730, public_402730);
extern "C" NAKED register_t __cdecl internal_402730()
{
    __asm
    {
        mov word ptr ds : [public_425f60], 3
        mov byte ptr ds : [public_425f62], 1
        ret 
        UNREACHABLE_TRAP(0x402730)
    }
}
