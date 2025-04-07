#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202500, internal_6202500, public_6202500);
extern "C" NAKED register_t __cdecl internal_6202500()
{
    __asm
    {
        mov al, byte ptr ds : [public_6255061]
        ret 4
        UNREACHABLE_TRAP(0x6202500)
    }
}
