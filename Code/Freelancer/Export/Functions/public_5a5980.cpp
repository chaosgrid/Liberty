#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a5980, internal_5a5980, public_5a5980);
extern "C" NAKED register_t __cdecl internal_5a5980()
{
    __asm
    {
        mov word ptr ds : [public_67e79c], 0
        mov byte ptr ds : [public_67e79e], 1
        ret 
        UNREACHABLE_TRAP(0x5a5980)
    }
}
