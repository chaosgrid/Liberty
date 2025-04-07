#include "Server-PCH.h"

PROC_DECLARE(0x6d5b1b0, internal_6d5b1b0, public_6d5b1b0);
extern "C" NAKED register_t __cdecl internal_6d5b1b0()
{
    __asm
    {
        mov word ptr ds : [public_6d90428], 4
        mov byte ptr ds : [public_6d9042a], 1
        ret 
        UNREACHABLE_TRAP(0x6d5b1b0)
    }
}
