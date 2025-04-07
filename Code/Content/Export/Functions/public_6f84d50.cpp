#include "Content-PCH.h"

PROC_DECLARE(0x6f84d50, internal_6f84d50, public_6f84d50);
extern "C" NAKED register_t __cdecl internal_6f84d50()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x6f84d50)
    }
}
