#include "FLServer-PCH.h"

PROC_DECLARE(0x406f10, internal_406f10, public_406f10);
extern "C" NAKED register_t __cdecl internal_406f10()
{
    __asm
    {
        mov word ptr ds : [public_42623c], 0
        mov byte ptr ds : [public_42623e], 1
        ret 
        UNREACHABLE_TRAP(0x406f10)
    }
}
