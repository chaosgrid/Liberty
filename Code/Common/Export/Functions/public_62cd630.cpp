#include "Common-PCH.h"

PROC_DECLARE(0x62cd630, internal_62cd630, public_62cd630);
extern "C" NAKED register_t __cdecl internal_62cd630()
{
    __asm
    {
        or byte ptr ds : [ecx+0x28], 2
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x62cd630)
    }
}
