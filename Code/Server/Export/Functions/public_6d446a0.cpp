#include "Server-PCH.h"

PROC_DECLARE(0x6d446a0, internal_6d446a0, public_6d446a0);
extern "C" NAKED register_t __cdecl internal_6d446a0()
{
    __asm
    {
        mov word ptr ds : [public_6d8faf4], 2
        mov byte ptr ds : [public_6d8faf6], 1
        ret 
        UNREACHABLE_TRAP(0x6d446a0)
    }
}
