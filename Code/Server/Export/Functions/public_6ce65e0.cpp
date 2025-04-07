#include "Server-PCH.h"

PROC_DECLARE(0x6ce65e0, internal_6ce65e0, public_6ce65e0);
extern "C" NAKED register_t __cdecl internal_6ce65e0()
{
    __asm
    {
        mov word ptr ds : [public_6d8d6a0], 3
        mov byte ptr ds : [public_6d8d6a2], 1
        ret 
        UNREACHABLE_TRAP(0x6ce65e0)
    }
}
