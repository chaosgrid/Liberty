#include "Common-PCH.h"

PROC_DECLARE(0x62db3a0, internal_62db3a0, public_62db3a0);
extern "C" NAKED register_t __cdecl internal_62db3a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a05b0]
        mov dword ptr ds : [public_63fc988], eax
        ret 
        UNREACHABLE_TRAP(0x62db3a0)
    }
}
