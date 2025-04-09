#include "FreeLancer-PCH.h"

PROC_DECLARE(0x548e20, internal_548e20, public_548e20);
extern "C" NAKED register_t __cdecl internal_548e20()
{
    __asm
    {
        mov word ptr ds : [public_679754], 2
        mov byte ptr ds : [public_679756], 1
        ret 
        UNREACHABLE_TRAP(0x548e20)
    }
}
