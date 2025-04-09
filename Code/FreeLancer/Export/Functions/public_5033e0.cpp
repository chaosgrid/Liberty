#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5033e0, internal_5033e0, public_5033e0);
extern "C" NAKED register_t __cdecl internal_5033e0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x7C]
        or al, 1
        mov byte ptr ds : [ecx+0x7C], al
        and al, 1
        ret 8
        UNREACHABLE_TRAP(0x5033e0)
    }
}
