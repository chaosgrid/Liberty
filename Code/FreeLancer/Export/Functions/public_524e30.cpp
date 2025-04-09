#include "FreeLancer-PCH.h"

PROC_DECLARE(0x524e30, internal_524e30, public_524e30);
extern "C" NAKED register_t __cdecl internal_524e30()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x44]
        and al, 1
        ret 
        UNREACHABLE_TRAP(0x524e30)
    }
}
