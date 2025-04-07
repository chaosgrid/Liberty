#include "FLServer-PCH.h"

PROC_DECLARE(0x4026c0, internal_4026c0, public_4026c0);
extern "C" NAKED register_t __cdecl internal_4026c0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_425f58], ax
        mov byte ptr ds : [public_425f5a], al
        ret 
        UNREACHABLE_TRAP(0x4026c0)
    }
}
