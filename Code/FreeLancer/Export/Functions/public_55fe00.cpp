#include "Freelancer-PCH.h"

PROC_DECLARE(0x55fe00, internal_55fe00, public_55fe00);
extern "C" NAKED register_t __cdecl internal_55fe00()
{
    __asm
    {
        mov word ptr ds : [public_679b60], 0
        mov byte ptr ds : [public_679b62], 1
        ret 
        UNREACHABLE_TRAP(0x55fe00)
    }
}
