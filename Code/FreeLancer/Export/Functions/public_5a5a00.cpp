#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a5a00, internal_5a5a00, public_5a5a00);
extern "C" NAKED register_t __cdecl internal_5a5a00()
{
    __asm
    {
        mov word ptr ds : [public_67e78c], 4
        mov byte ptr ds : [public_67e78e], 1
        ret 
        UNREACHABLE_TRAP(0x5a5a00)
    }
}
