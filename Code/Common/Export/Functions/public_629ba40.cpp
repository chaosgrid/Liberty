#include "Common-PCH.h"

PROC_DECLARE(0x629ba40, internal_629ba40, public_629ba40);
extern "C" NAKED register_t __cdecl internal_629ba40()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x74]
        ret 
        UNREACHABLE_TRAP(0x629ba40)
    }
}
