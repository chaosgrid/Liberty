#include "Freelancer-PCH.h"

PROC_DECLARE(0x561ca0, internal_561ca0, public_561ca0);
extern "C" NAKED register_t __cdecl internal_561ca0()
{
    __asm
    {
        mov byte ptr ds : [public_679b9c], 0x88
        mov byte ptr ds : [public_679b9d], 0
        mov byte ptr ds : [public_679b9e], 0xC2
        mov byte ptr ds : [public_679b9f], 0xFF
        ret 
        UNREACHABLE_TRAP(0x561ca0)
    }
}
