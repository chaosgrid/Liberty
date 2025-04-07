#include "FLServer-PCH.h"

PROC_DECLARE(0x4135f0, internal_4135f0, public_4135f0);
extern "C" NAKED register_t __cdecl internal_4135f0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_428c80], ax
        mov byte ptr ds : [public_428c82], al
        ret 
        UNREACHABLE_TRAP(0x4135f0)
    }
}
