#include "Common-PCH.h"

PROC_DECLARE(0x6288240, internal_6288240, public_6288240);
extern "C" NAKED register_t __cdecl internal_6288240()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x2A0]
        ret 
        UNREACHABLE_TRAP(0x6288240)
    }
}
