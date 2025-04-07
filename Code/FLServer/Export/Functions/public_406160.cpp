#include "FLServer-PCH.h"

PROC_DECLARE(0x406160, internal_406160, public_406160);
extern "C" NAKED register_t __cdecl internal_406160()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_4260a8], ax
        mov byte ptr ds : [public_4260aa], al
        ret 
        UNREACHABLE_TRAP(0x406160)
    }
}
