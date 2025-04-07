#include "FLServer-PCH.h"

PROC_DECLARE(0x40db40, internal_40db40, public_40db40);
extern "C" NAKED register_t __cdecl internal_40db40()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_427878], ax
        mov byte ptr ds : [public_42787a], al
        ret 
        UNREACHABLE_TRAP(0x40db40)
    }
}
