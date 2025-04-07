#include "Common-PCH.h"

PROC_DECLARE(0x62e6250, internal_62e6250, public_62e6250);
extern "C" NAKED register_t __cdecl internal_62e6250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0798]
        mov dword ptr ds : [public_63fca4c], eax
        ret 
        UNREACHABLE_TRAP(0x62e6250)
    }
}
