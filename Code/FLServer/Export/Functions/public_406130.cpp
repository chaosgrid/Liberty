#include "FLServer-PCH.h"

PROC_DECLARE(0x406130, internal_406130, public_406130);
extern "C" NAKED register_t __cdecl internal_406130()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_4260ac], ax
        mov byte ptr ds : [public_4260ae], al
        ret 
        UNREACHABLE_TRAP(0x406130)
    }
}
