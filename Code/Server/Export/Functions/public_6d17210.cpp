#include "Server-PCH.h"

PROC_DECLARE(0x6d17210, internal_6d17210, public_6d17210);
extern "C" NAKED register_t __cdecl internal_6d17210()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6d8e564], ax
        mov byte ptr ds : [public_6d8e566], al
        ret 
        UNREACHABLE_TRAP(0x6d17210)
    }
}
