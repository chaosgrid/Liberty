#include "FLServer-PCH.h"

PROC_DECLARE(0x406590, internal_406590, public_406590);
extern "C" NAKED register_t __cdecl internal_406590()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_4261d0], ax
        mov byte ptr ds : [public_4261d2], al
        ret 
        UNREACHABLE_TRAP(0x406590)
    }
}
