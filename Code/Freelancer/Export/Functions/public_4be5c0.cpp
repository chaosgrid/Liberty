#include "Freelancer-PCH.h"

PROC_DECLARE(0x4be5c0, internal_4be5c0, public_4be5c0);
extern "C" NAKED register_t __cdecl internal_4be5c0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_67249c], ax
        mov byte ptr ds : [public_67249e], al
        ret 
        UNREACHABLE_TRAP(0x4be5c0)
    }
}
