#include "FLServer-PCH.h"

PROC_DECLARE(0x4091a0, internal_4091a0, public_4091a0);
extern "C" NAKED register_t __cdecl internal_4091a0()
{
    __asm
    {
        mov word ptr ds : [public_426bb4], 2
        mov byte ptr ds : [public_426bb6], 1
        ret 
        UNREACHABLE_TRAP(0x4091a0)
    }
}
