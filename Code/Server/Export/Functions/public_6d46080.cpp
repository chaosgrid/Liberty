#include "Server-PCH.h"

PROC_DECLARE(0x6d46080, internal_6d46080, public_6d46080);
extern "C" NAKED register_t __cdecl internal_6d46080()
{
    __asm
    {
        mov word ptr ds : [public_6d902bc], 3
        mov byte ptr ds : [public_6d902be], 1
        ret 
        UNREACHABLE_TRAP(0x6d46080)
    }
}
