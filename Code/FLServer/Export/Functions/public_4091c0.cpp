#include "FLServer-PCH.h"

PROC_DECLARE(0x4091c0, internal_4091c0, public_4091c0);
extern "C" NAKED register_t __cdecl internal_4091c0()
{
    __asm
    {
        mov word ptr ds : [public_426ba8], 3
        mov byte ptr ds : [public_426baa], 1
        ret 
        UNREACHABLE_TRAP(0x4091c0)
    }
}
