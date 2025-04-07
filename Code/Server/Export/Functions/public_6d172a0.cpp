#include "Server-PCH.h"

PROC_DECLARE(0x6d172a0, internal_6d172a0, public_6d172a0);
extern "C" NAKED register_t __cdecl internal_6d172a0()
{
    __asm
    {
        mov word ptr ds : [public_6d8e550], 4
        mov byte ptr ds : [public_6d8e552], 1
        ret 
        UNREACHABLE_TRAP(0x6d172a0)
    }
}
