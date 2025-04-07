#include "FLServer-PCH.h"

PROC_DECLARE(0x402870, internal_402870, public_402870);
extern "C" NAKED register_t __cdecl internal_402870()
{
    __asm
    {
        mov word ptr ds : [public_426098], 2
        mov byte ptr ds : [public_42609a], 1
        ret 
        UNREACHABLE_TRAP(0x402870)
    }
}
