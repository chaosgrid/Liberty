#include "FLServer-PCH.h"

PROC_DECLARE(0x406f90, internal_406f90, public_406f90);
extern "C" NAKED register_t __cdecl internal_406f90()
{
    __asm
    {
        mov word ptr ds : [public_426238], 4
        mov byte ptr ds : [public_42623a], 1
        ret 
        UNREACHABLE_TRAP(0x406f90)
    }
}
