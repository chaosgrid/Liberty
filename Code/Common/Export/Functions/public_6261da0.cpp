#include "Common-PCH.h"

PROC_DECLARE(0x6261da0, internal_6261da0, public_6261da0);
extern "C" NAKED register_t __cdecl internal_6261da0()
{
    __asm
    {
        fld dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x6261da0)
    }
}
