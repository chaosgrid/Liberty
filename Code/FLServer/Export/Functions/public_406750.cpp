#include "FLServer-PCH.h"

PROC_DECLARE(0x406750, internal_406750, public_406750);
extern "C" NAKED register_t __cdecl internal_406750()
{
    __asm
    {
        mov word ptr ds : [public_426210], 0
        mov byte ptr ds : [public_426212], 1
        ret 
        UNREACHABLE_TRAP(0x406750)
    }
}
