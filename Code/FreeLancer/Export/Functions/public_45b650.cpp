#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45b650, internal_45b650, public_45b650);
extern "C" NAKED register_t __cdecl internal_45b650()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_66d3d4], ax
        mov byte ptr ds : [public_66d3d6], al
        ret 
        UNREACHABLE_TRAP(0x45b650)
    }
}
