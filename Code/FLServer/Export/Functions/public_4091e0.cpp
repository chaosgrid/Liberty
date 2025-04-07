#include "FLServer-PCH.h"

PROC_DECLARE(0x4091e0, internal_4091e0, public_4091e0);
extern "C" NAKED register_t __cdecl internal_4091e0()
{
    __asm
    {
        mov word ptr ds : [public_426bac], 4
        mov byte ptr ds : [public_426bae], 1
        ret 
        UNREACHABLE_TRAP(0x4091e0)
    }
}
