#include "Server-PCH.h"

PROC_DECLARE(0x6d44660, internal_6d44660, public_6d44660);
extern "C" NAKED register_t __cdecl internal_6d44660()
{
    __asm
    {
        mov word ptr ds : [public_6d8fafc], 0
        mov byte ptr ds : [public_6d8fafe], 1
        ret 
        UNREACHABLE_TRAP(0x6d44660)
    }
}
