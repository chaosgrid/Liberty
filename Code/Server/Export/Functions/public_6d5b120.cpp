#include "Server-PCH.h"

PROC_DECLARE(0x6d5b120, internal_6d5b120, public_6d5b120);
extern "C" NAKED register_t __cdecl internal_6d5b120()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6d9043c], ax
        mov byte ptr ds : [public_6d9043e], al
        ret 
        UNREACHABLE_TRAP(0x6d5b120)
    }
}
