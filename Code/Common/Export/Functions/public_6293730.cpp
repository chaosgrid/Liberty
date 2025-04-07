#include "Common-PCH.h"

PROC_DECLARE(0x6293730, internal_6293730, public_6293730);
extern "C" NAKED register_t __cdecl internal_6293730()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [ecx+0x2C], 0
        ret 
        UNREACHABLE_TRAP(0x6293730)
    }
}
