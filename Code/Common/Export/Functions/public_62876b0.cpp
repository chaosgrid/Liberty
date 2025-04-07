#include "Common-PCH.h"

PROC_DECLARE(0x62876b0, internal_62876b0, public_62876b0);
extern "C" NAKED register_t __cdecl internal_62876b0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x198]
        ret 
        UNREACHABLE_TRAP(0x62876b0)
    }
}
