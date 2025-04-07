#include "Common-PCH.h"

PROC_DECLARE(0x62876d0, internal_62876d0, public_62876d0);
extern "C" NAKED register_t __cdecl internal_62876d0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x19C]
        ret 
        UNREACHABLE_TRAP(0x62876d0)
    }
}
