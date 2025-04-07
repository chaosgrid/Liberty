#include "FLServer-PCH.h"

PROC_DECLARE(0x406140, internal_406140, public_406140);
extern "C" NAKED register_t __cdecl internal_406140()
{
    __asm
    {
        mov word ptr ds : [public_4261bc], 0
        mov byte ptr ds : [public_4261be], 1
        ret 
        UNREACHABLE_TRAP(0x406140)
    }
}
