#include "FLServer-PCH.h"

PROC_DECLARE(0x409150, internal_409150, public_409150);
extern "C" NAKED register_t __cdecl internal_409150()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_426ba0], ax
        mov byte ptr ds : [public_426ba2], al
        ret 
        UNREACHABLE_TRAP(0x409150)
    }
}
