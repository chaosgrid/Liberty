#include "FLServer-PCH.h"

PROC_DECLARE(0x401040, internal_401040, public_401040);
extern "C" NAKED register_t __cdecl internal_401040()
{
    __asm
    {
        mov word ptr ds : [public_425f14], 0
        mov byte ptr ds : [public_425f16], 1
        ret 
        UNREACHABLE_TRAP(0x401040)
    }
}
