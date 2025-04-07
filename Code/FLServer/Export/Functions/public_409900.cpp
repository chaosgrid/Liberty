#include "FLServer-PCH.h"

PROC_DECLARE(0x409900, internal_409900, public_409900);
extern "C" NAKED register_t __cdecl internal_409900()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_4277e4], ax
        mov byte ptr ds : [public_4277e6], al
        ret 
        UNREACHABLE_TRAP(0x409900)
    }
}
