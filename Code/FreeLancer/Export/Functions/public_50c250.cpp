#include "FreeLancer-PCH.h"

PROC_DECLARE(0x50c250, internal_50c250, public_50c250);
extern "C" NAKED register_t __cdecl internal_50c250()
{
    __asm
    {
        mov dword ptr ds : [public_675084], offset public_5db35c
        ret 
        UNREACHABLE_TRAP(0x50c250)
    }
}
