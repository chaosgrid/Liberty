#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b0180, internal_5b0180, public_5b0180);
extern "C" NAKED register_t __cdecl internal_5b0180()
{
    __asm
    {
        mov word ptr ds : [public_67ec88], 0
        mov byte ptr ds : [public_67ec8a], 1
        ret 
        UNREACHABLE_TRAP(0x5b0180)
    }
}
