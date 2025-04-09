#include "Freelancer-PCH.h"

PROC_DECLARE(0x564860, internal_564860, public_564860);
extern "C" NAKED register_t __cdecl internal_564860()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_67c1e8], ax
        mov byte ptr ds : [public_67c1ea], al
        ret 
        UNREACHABLE_TRAP(0x564860)
    }
}
