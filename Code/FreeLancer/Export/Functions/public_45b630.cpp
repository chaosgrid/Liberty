#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45b630, internal_45b630, public_45b630);
extern "C" NAKED register_t __cdecl internal_45b630()
{
    __asm
    {
        mov word ptr ds : [public_66d3d8], 0
        mov byte ptr ds : [public_66d3da], 1
        ret 
        UNREACHABLE_TRAP(0x45b630)
    }
}
