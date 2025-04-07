#include "FLServer-PCH.h"

PROC_DECLARE(0x406f50, internal_406f50, public_406f50);
extern "C" NAKED register_t __cdecl internal_406f50()
{
    __asm
    {
        mov word ptr ds : [public_426240], 2
        mov byte ptr ds : [public_426242], 1
        ret 
        UNREACHABLE_TRAP(0x406f50)
    }
}
