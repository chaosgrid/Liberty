#include "FLServer-PCH.h"

PROC_DECLARE(0x406f30, internal_406f30, public_406f30);
extern "C" NAKED register_t __cdecl internal_406f30()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_426228], ax
        mov byte ptr ds : [public_42622a], al
        ret 
        UNREACHABLE_TRAP(0x406f30)
    }
}
