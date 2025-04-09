#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4372a0, internal_4372a0, public_4372a0);
extern "C" NAKED register_t __cdecl internal_4372a0()
{
    __asm
    {
        mov dl, byte ptr ss : [esp+4]
        mov al, 1
        mov byte ptr ds : [ecx+4], al
        mov byte ptr ds : [ecx+5], 0
        mov byte ptr ds : [ecx+6], dl
        ret 4
        UNREACHABLE_TRAP(0x4372a0)
    }
}
