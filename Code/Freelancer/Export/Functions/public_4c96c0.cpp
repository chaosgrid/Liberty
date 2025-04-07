#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c96c0, internal_4c96c0, public_4c96c0);
extern "C" NAKED register_t __cdecl internal_4c96c0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6748e4], ax
        mov byte ptr ds : [public_6748e6], al
        ret 
        UNREACHABLE_TRAP(0x4c96c0)
    }
}
