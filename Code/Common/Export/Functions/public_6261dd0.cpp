#include "Common-PCH.h"

PROC_DECLARE(0x6261dd0, internal_6261dd0, public_6261dd0);
extern "C" NAKED register_t __cdecl internal_6261dd0()
{
    __asm
    {
        lea eax, ds:[ecx+0x24]
        ret 
        UNREACHABLE_TRAP(0x6261dd0)
    }
}
