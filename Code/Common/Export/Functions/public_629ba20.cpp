#include "Common-PCH.h"

PROC_DECLARE(0x629ba20, internal_629ba20, public_629ba20);
extern "C" NAKED register_t __cdecl internal_629ba20()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x7C]
        ret 
        UNREACHABLE_TRAP(0x629ba20)
    }
}
