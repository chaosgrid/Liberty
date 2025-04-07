#include "Freelancer-PCH.h"

PROC_DECLARE(0x561c00, internal_561c00, public_561c00);
extern "C" NAKED register_t __cdecl internal_561c00()
{
    __asm
    {
        mov byte ptr ds : [public_679bb0], 0x87
        mov byte ptr ds : [public_679bb1], 0xC3
        mov byte ptr ds : [public_679bb2], 0xE0
        mov byte ptr ds : [public_679bb3], 0xFF
        ret 
        UNREACHABLE_TRAP(0x561c00)
    }
}
