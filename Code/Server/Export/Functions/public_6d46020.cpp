#include "Server-PCH.h"

PROC_DECLARE(0x6d46020, internal_6d46020, public_6d46020);
extern "C" NAKED register_t __cdecl internal_6d46020()
{
    __asm
    {
        mov word ptr ds : [public_6d902c8], 0
        mov byte ptr ds : [public_6d902ca], 1
        ret 
        UNREACHABLE_TRAP(0x6d46020)
    }
}
