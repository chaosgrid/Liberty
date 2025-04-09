#include "FreeLancer-PCH.h"

PROC_DECLARE(0x548e40, internal_548e40, public_548e40);
extern "C" NAKED register_t __cdecl internal_548e40()
{
    __asm
    {
        mov word ptr ds : [public_679750], 3
        mov byte ptr ds : [public_679752], 1
        ret 
        UNREACHABLE_TRAP(0x548e40)
    }
}
