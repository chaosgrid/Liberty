#include "FreeLancer-PCH.h"

PROC_DECLARE(0x50c3f0, internal_50c3f0, public_50c3f0);
extern "C" NAKED register_t __cdecl internal_50c3f0()
{
    __asm
    {
        mov dword ptr ds : [public_675080], offset public_5db448
        ret 
        UNREACHABLE_TRAP(0x50c3f0)
    }
}
