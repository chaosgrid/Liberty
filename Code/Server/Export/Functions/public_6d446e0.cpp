#include "Server-PCH.h"

PROC_DECLARE(0x6d446e0, internal_6d446e0, public_6d446e0);
extern "C" NAKED register_t __cdecl internal_6d446e0()
{
    __asm
    {
        mov word ptr ds : [public_6d8faec], 4
        mov byte ptr ds : [public_6d8faee], 1
        ret 
        UNREACHABLE_TRAP(0x6d446e0)
    }
}
