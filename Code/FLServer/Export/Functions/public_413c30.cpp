#include "FLServer-PCH.h"

PROC_DECLARE(0x413c30, internal_413c30, public_413c30);
extern "C" NAKED register_t __cdecl internal_413c30()
{
    __asm
    {
        mov word ptr ds : [public_4294e8], 0
        mov byte ptr ds : [public_4294ea], 1
        ret 
        UNREACHABLE_TRAP(0x413c30)
    }
}
