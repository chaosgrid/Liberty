#include "FLServer-PCH.h"

PROC_DECLARE(0x40db50, internal_40db50, public_40db50);
extern "C" NAKED register_t __cdecl internal_40db50()
{
    __asm
    {
        mov word ptr ds : [public_427888], 0
        mov byte ptr ds : [public_42788a], 1
        ret 
        UNREACHABLE_TRAP(0x40db50)
    }
}
