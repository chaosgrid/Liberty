#include "Server-PCH.h"

PROC_DECLARE(0x6d17280, internal_6d17280, public_6d17280);
extern "C" NAKED register_t __cdecl internal_6d17280()
{
    __asm
    {
        mov word ptr ds : [public_6d8e554], 3
        mov byte ptr ds : [public_6d8e556], 1
        ret 
        UNREACHABLE_TRAP(0x6d17280)
    }
}
