#include "FreeLancer-PCH.h"

PROC_DECLARE(0x524e20, internal_524e20, public_524e20);
extern "C" NAKED register_t __cdecl internal_524e20()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x44]
        shr al, 2
        and al, 1
        ret 
        UNREACHABLE_TRAP(0x524e20)
    }
}
