#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45b690, internal_45b690, public_45b690);
extern "C" NAKED register_t __cdecl internal_45b690()
{
    __asm
    {
        mov word ptr ds : [public_66d3cc], 3
        mov byte ptr ds : [public_66d3ce], 1
        ret 
        UNREACHABLE_TRAP(0x45b690)
    }
}
