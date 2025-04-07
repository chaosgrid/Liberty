#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a1e90, internal_5a1e90, public_5a1e90);
extern "C" NAKED register_t __cdecl internal_5a1e90()
{
    __asm
    {
        mov al, 0xFF
        mov byte ptr ds : [public_67dd50], 0x9B
        mov byte ptr ds : [public_67dd51], 0xCD
        mov byte ptr ds : [public_67dd52], al
        mov byte ptr ds : [public_67dd53], al
        ret 
        UNREACHABLE_TRAP(0x5a1e90)
    }
}
