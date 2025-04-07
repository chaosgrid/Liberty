#include "Server-PCH.h"

PROC_DECLARE(0x6ce6570, internal_6ce6570, public_6ce6570);
extern "C" NAKED register_t __cdecl internal_6ce6570()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6d8d6b0], ax
        mov byte ptr ds : [public_6d8d6b2], al
        ret 
        UNREACHABLE_TRAP(0x6ce6570)
    }
}
