#include "Common-PCH.h"

PROC_DECLARE(0x62a0790, internal_62a0790, public_62a0790);
extern "C" NAKED register_t __cdecl internal_62a0790()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x3C]
        ret 
        UNREACHABLE_TRAP(0x62a0790)
    }
}
