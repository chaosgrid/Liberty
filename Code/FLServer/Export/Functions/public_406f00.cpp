#include "FLServer-PCH.h"

PROC_DECLARE(0x406f00, internal_406f00, public_406f00);
extern "C" NAKED register_t __cdecl internal_406f00()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_42622c], ax
        mov byte ptr ds : [public_42622e], al
        ret 
        UNREACHABLE_TRAP(0x406f00)
    }
}
