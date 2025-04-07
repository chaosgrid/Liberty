#include "FLServer-PCH.h"

PROC_DECLARE(0x4156b0, internal_4156b0, public_4156b0);
extern "C" NAKED register_t __cdecl internal_4156b0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_429514], ax
        mov byte ptr ds : [public_429516], al
        ret 
        UNREACHABLE_TRAP(0x4156b0)
    }
}
