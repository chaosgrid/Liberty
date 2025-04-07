#include "Common-PCH.h"

PROC_DECLARE(0x62629e0, internal_62629e0, public_62629e0);
extern "C" NAKED register_t __cdecl internal_62629e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x62629e0)
    }
}
