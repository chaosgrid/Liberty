#include "Common-PCH.h"

PROC_DECLARE(0x62e6240, internal_62e6240, public_62e6240);
extern "C" NAKED register_t __cdecl internal_62e6240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0790]
        mov dword ptr ds : [public_63fca50], eax
        ret 
        UNREACHABLE_TRAP(0x62e6240)
    }
}
