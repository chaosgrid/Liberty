#include "Common-PCH.h"

PROC_DECLARE(0x62a0720, internal_62a0720, public_62a0720);
extern "C" NAKED register_t __cdecl internal_62a0720()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x18]
        ret 
        UNREACHABLE_TRAP(0x62a0720)
    }
}
