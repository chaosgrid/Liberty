#include "Freelancer-PCH.h"

PROC_DECLARE(0x548e60, internal_548e60, public_548e60);
extern "C" NAKED register_t __cdecl internal_548e60()
{
    __asm
    {
        mov word ptr ds : [public_67974c], 4
        mov byte ptr ds : [public_67974e], 1
        ret 
        UNREACHABLE_TRAP(0x548e60)
    }
}
