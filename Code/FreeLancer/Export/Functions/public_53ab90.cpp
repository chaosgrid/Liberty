#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53ab90, internal_53ab90, public_53ab90);
extern "C" NAKED register_t __cdecl internal_53ab90()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6789e0], ax
        mov byte ptr ds : [public_6789e2], al
        ret 
        UNREACHABLE_TRAP(0x53ab90)
    }
}
