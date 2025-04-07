#include "FLServer-PCH.h"

PROC_DECLARE(0x402710, internal_402710, public_402710);
extern "C" NAKED register_t __cdecl internal_402710()
{
    __asm
    {
        mov word ptr ds : [public_425f6c], 2
        mov byte ptr ds : [public_425f6e], 1
        ret 
        UNREACHABLE_TRAP(0x402710)
    }
}
