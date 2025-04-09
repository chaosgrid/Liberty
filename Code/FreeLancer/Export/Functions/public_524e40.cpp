#include "FreeLancer-PCH.h"

PROC_DECLARE(0x524e40, internal_524e40, public_524e40);
extern "C" NAKED register_t __cdecl internal_524e40()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x44]
        shr al, 1
        and al, 1
        ret 
        UNREACHABLE_TRAP(0x524e40)
    }
}
