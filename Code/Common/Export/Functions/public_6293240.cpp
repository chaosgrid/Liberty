#include "Common-PCH.h"

PROC_DECLARE(0x6293240, internal_6293240, public_6293240);
extern "C" NAKED register_t __cdecl internal_6293240()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x30]
        ret 
        UNREACHABLE_TRAP(0x6293240)
    }
}
