#include "Common-PCH.h"

PROC_DECLARE(0x62ad180, internal_62ad180, public_62ad180);
extern "C" NAKED register_t __cdecl internal_62ad180()
{
    __asm
    {
        fld dword ptr ds : [public_6399408]
        ret 
        UNREACHABLE_TRAP(0x62ad180)
    }
}
