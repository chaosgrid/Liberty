#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c96f0, internal_4c96f0, public_4c96f0);
extern "C" NAKED register_t __cdecl internal_4c96f0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6748dc], ax
        mov byte ptr ds : [public_6748de], al
        ret 
        UNREACHABLE_TRAP(0x4c96f0)
    }
}
