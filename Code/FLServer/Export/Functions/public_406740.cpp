#include "FLServer-PCH.h"

PROC_DECLARE(0x406740, internal_406740, public_406740);
extern "C" NAKED register_t __cdecl internal_406740()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_426200], ax
        mov byte ptr ds : [public_426202], al
        ret 
        UNREACHABLE_TRAP(0x406740)
    }
}
