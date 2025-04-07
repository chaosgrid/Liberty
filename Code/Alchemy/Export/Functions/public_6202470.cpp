#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202470, internal_6202470, public_6202470);
extern "C" NAKED register_t __cdecl internal_6202470()
{
    __asm
    {
        mov al, byte ptr ds : [public_6257919]
        ret 4
        UNREACHABLE_TRAP(0x6202470)
    }
}
