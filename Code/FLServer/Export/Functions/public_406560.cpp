#include "FLServer-PCH.h"

PROC_DECLARE(0x406560, internal_406560, public_406560);
extern "C" NAKED register_t __cdecl internal_406560()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_4261d4], ax
        mov byte ptr ds : [public_4261d6], al
        ret 
        UNREACHABLE_TRAP(0x406560)
    }
}
