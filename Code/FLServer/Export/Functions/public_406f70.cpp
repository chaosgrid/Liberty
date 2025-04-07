#include "FLServer-PCH.h"

PROC_DECLARE(0x406f70, internal_406f70, public_406f70);
extern "C" NAKED register_t __cdecl internal_406f70()
{
    __asm
    {
        mov word ptr ds : [public_426234], 3
        mov byte ptr ds : [public_426236], 1
        ret 
        UNREACHABLE_TRAP(0x406f70)
    }
}
