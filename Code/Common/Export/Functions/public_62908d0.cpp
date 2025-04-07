#include "Common-PCH.h"

PROC_DECLARE(0x62908d0, internal_62908d0, public_62908d0);
extern "C" NAKED register_t __cdecl internal_62908d0()
{
    __asm
    {
        mov dword ptr ds : [public_63fc0e8], 0x40000000
        mov dword ptr ds : [public_63fc0ec], 0x40000000
        mov dword ptr ds : [public_63fc0f0], 0x40000000
        ret 
        UNREACHABLE_TRAP(0x62908d0)
    }
}
