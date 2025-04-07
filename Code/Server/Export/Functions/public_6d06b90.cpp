#include "Server-PCH.h"

PROC_DECLARE(0x6d06b90, internal_6d06b90, public_6d06b90);
extern "C" NAKED register_t __cdecl internal_6d06b90()
{
    __asm
    {
        mov word ptr ds : [public_6d8d9e0], 0
        mov byte ptr ds : [public_6d8d9e2], 1
        ret 
        UNREACHABLE_TRAP(0x6d06b90)
    }
}
