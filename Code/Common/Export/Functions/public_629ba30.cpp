#include "Common-PCH.h"

PROC_DECLARE(0x629ba30, internal_629ba30, public_629ba30);
extern "C" NAKED register_t __cdecl internal_629ba30()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x50]
        ret 
        UNREACHABLE_TRAP(0x629ba30)
    }
}
