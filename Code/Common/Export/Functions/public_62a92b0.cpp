#include "Common-PCH.h"

PROC_DECLARE(0x62a92b0, internal_62a92b0, public_62a92b0);
extern "C" NAKED register_t __cdecl internal_62a92b0()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x168], 0
        ret 4
        UNREACHABLE_TRAP(0x62a92b0)
    }
}
