#include "Common-PCH.h"

PROC_DECLARE(0x62a0730, internal_62a0730, public_62a0730);
extern "C" NAKED register_t __cdecl internal_62a0730()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x1C]
        ret 
        UNREACHABLE_TRAP(0x62a0730)
    }
}
