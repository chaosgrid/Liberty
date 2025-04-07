#include "FLServer-PCH.h"

PROC_DECLARE(0x412860, internal_412860, public_412860);
extern "C" NAKED register_t __cdecl internal_412860()
{
    __asm
    {
        mov word ptr ds : [public_428c44], 2
        mov byte ptr ds : [public_428c46], 1
        ret 
        UNREACHABLE_TRAP(0x412860)
    }
}
