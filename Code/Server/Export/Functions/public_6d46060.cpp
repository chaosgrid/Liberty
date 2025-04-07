#include "Server-PCH.h"

PROC_DECLARE(0x6d46060, internal_6d46060, public_6d46060);
extern "C" NAKED register_t __cdecl internal_6d46060()
{
    __asm
    {
        mov word ptr ds : [public_6d902c0], 2
        mov byte ptr ds : [public_6d902c2], 1
        ret 
        UNREACHABLE_TRAP(0x6d46060)
    }
}
