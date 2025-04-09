#include "Freelancer-PCH.h"

PROC_DECLARE(0x561cc0, internal_561cc0, public_561cc0);
extern "C" NAKED register_t __cdecl internal_561cc0()
{
    __asm
    {
        mov al, 0x48
        mov byte ptr ds : [public_679b98], al
        mov byte ptr ds : [public_679b99], al
        mov byte ptr ds : [public_679b9a], 0xE0
        mov byte ptr ds : [public_679b9b], 0xFF
        ret 
        UNREACHABLE_TRAP(0x561cc0)
    }
}
