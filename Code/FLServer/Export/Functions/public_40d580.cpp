#include "FLServer-PCH.h"

PROC_DECLARE(0x40d580, internal_40d580, public_40d580);
extern "C" NAKED register_t __cdecl internal_40d580()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_427848], ax
        mov byte ptr ds : [public_42784a], al
        ret 
        UNREACHABLE_TRAP(0x40d580)
    }
}
