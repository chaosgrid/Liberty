#include "FLServer-PCH.h"

PROC_DECLARE(0x402750, internal_402750, public_402750);
extern "C" NAKED register_t __cdecl internal_402750()
{
    __asm
    {
        mov word ptr ds : [public_425f64], 4
        mov byte ptr ds : [public_425f66], 1
        ret 
        UNREACHABLE_TRAP(0x402750)
    }
}
