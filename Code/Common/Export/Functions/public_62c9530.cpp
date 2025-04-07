#include "Common-PCH.h"

PROC_DECLARE(0x62c9530, internal_62c9530, public_62c9530);
extern "C" NAKED register_t __cdecl internal_62c9530()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x1D4], 1
        ret 4
        UNREACHABLE_TRAP(0x62c9530)
    }
}
