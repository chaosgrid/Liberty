#include "FLServer-PCH.h"

PROC_DECLARE(0x411c70, internal_411c70, public_411c70);
extern "C" NAKED register_t __cdecl internal_411c70()
{
    __asm
    {
        mov word ptr ds : [public_428c18], 2
        mov byte ptr ds : [public_428c1a], 1
        ret 
        UNREACHABLE_TRAP(0x411c70)
    }
}
