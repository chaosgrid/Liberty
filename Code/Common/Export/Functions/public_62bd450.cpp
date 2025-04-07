#include "Common-PCH.h"

PROC_DECLARE(0x62bd450, internal_62bd450, public_62bd450);
extern "C" NAKED register_t __cdecl internal_62bd450()
{
    __asm
    {
        fld dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x62bd450)
    }
}
