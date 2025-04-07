#include "FLServer-PCH.h"

PROC_DECLARE(0x406180, internal_406180, public_406180);
extern "C" NAKED register_t __cdecl internal_406180()
{
    __asm
    {
        mov word ptr ds : [public_4261c0], 2
        mov byte ptr ds : [public_4261c2], 1
        ret 
        UNREACHABLE_TRAP(0x406180)
    }
}
