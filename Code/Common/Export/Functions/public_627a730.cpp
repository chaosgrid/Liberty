#include "Common-PCH.h"

PROC_DECLARE(0x627a730, internal_627a730, public_627a730);
extern "C" NAKED register_t __cdecl internal_627a730()
{
    __asm
    {
        fld dword ptr ds : [public_63fbbc4]
        ret 
        UNREACHABLE_TRAP(0x627a730)
    }
}
