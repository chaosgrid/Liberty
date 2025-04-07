#include "Common-PCH.h"

PROC_DECLARE(0x629ba50, internal_629ba50, public_629ba50);
extern "C" NAKED register_t __cdecl internal_629ba50()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x78]
        ret 
        UNREACHABLE_TRAP(0x629ba50)
    }
}
