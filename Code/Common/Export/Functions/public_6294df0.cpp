#include "Common-PCH.h"

PROC_DECLARE(0x6294df0, internal_6294df0, public_6294df0);
extern "C" NAKED register_t __cdecl internal_6294df0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x6294df0)
    }
}
