#include "FLServer-PCH.h"

PROC_DECLARE(0x4132d0, internal_4132d0, public_4132d0);
extern "C" NAKED register_t __cdecl internal_4132d0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_428c58], ax
        mov byte ptr ds : [public_428c5a], al
        ret 
        UNREACHABLE_TRAP(0x4132d0)
    }
}
