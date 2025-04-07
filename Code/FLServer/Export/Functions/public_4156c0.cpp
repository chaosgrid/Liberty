#include "FLServer-PCH.h"

PROC_DECLARE(0x4156c0, internal_4156c0, public_4156c0);
extern "C" NAKED register_t __cdecl internal_4156c0()
{
    __asm
    {
        mov word ptr ds : [public_429524], 0
        mov byte ptr ds : [public_429526], 1
        ret 
        UNREACHABLE_TRAP(0x4156c0)
    }
}
