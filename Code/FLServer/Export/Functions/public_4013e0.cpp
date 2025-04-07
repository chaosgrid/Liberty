#include "FLServer-PCH.h"

PROC_DECLARE(0x4013e0, internal_4013e0, public_4013e0);
extern "C" NAKED register_t __cdecl internal_4013e0()
{
    __asm
    {
        mov word ptr ds : [public_425f40], 2
        mov byte ptr ds : [public_425f42], 1
        ret 
        UNREACHABLE_TRAP(0x4013e0)
    }
}
