#include "FreeLancer-PCH.h"

PROC_DECLARE(0x40d2b0, internal_40d2b0, public_40d2b0);
extern "C" NAKED register_t __cdecl internal_40d2b0()
{
    __asm
    {
        mov dword ptr ds : [public_6164a0], offset public_5c845c
        ret 
        UNREACHABLE_TRAP(0x40d2b0)
    }
}
