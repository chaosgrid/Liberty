#include "Freelancer-PCH.h"

PROC_DECLARE(0x45de30, internal_45de30, public_45de30);
extern "C" NAKED register_t __cdecl internal_45de30()
{
    __asm
    {
        mov word ptr ds : [public_66da44], 0
        mov byte ptr ds : [public_66da46], 1
        ret 
        UNREACHABLE_TRAP(0x45de30)
    }
}
