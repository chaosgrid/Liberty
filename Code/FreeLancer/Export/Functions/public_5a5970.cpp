#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a5970, internal_5a5970, public_5a5970);
extern "C" NAKED register_t __cdecl internal_5a5970()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_67e7a0], ax
        mov byte ptr ds : [public_67e7a2], al
        ret 
        UNREACHABLE_TRAP(0x5a5970)
    }
}
