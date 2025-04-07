#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a7fd0, internal_5a7fd0, public_5a7fd0);
extern "C" NAKED register_t __cdecl internal_5a7fd0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_67ea2c], ax
        mov byte ptr ds : [public_67ea2e], al
        ret 
        UNREACHABLE_TRAP(0x5a7fd0)
    }
}
