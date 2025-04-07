#include "Freelancer-PCH.h"

PROC_DECLARE(0x561be0, internal_561be0, public_561be0);
extern "C" NAKED register_t __cdecl internal_561be0()
{
    __asm
    {
        mov byte ptr ds : [public_679bb4], 0x87
        mov byte ptr ds : [public_679bb5], 0xC3
        mov byte ptr ds : [public_679bb6], 0xE0
        mov byte ptr ds : [public_679bb7], 0xC0
        ret 
        UNREACHABLE_TRAP(0x561be0)
    }
}
