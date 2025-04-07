#include "Common-PCH.h"

PROC_DECLARE(0x62e1510, internal_62e1510, public_62e1510);
extern "C" NAKED register_t __cdecl internal_62e1510()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0758]
        mov dword ptr ds : [public_63fca40], eax
        ret 
        UNREACHABLE_TRAP(0x62e1510)
    }
}
