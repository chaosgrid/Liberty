#include "Common-PCH.h"

PROC_DECLARE(0x62908f0, internal_62908f0, public_62908f0);
extern "C" NAKED register_t __cdecl internal_62908f0()
{
    __asm
    {
        mov dword ptr ds : [public_63fc0dc], 0x3F800000
        mov dword ptr ds : [public_63fc0e0], 0x3F800000
        mov dword ptr ds : [public_63fc0e4], 0x3F800000
        ret 
        UNREACHABLE_TRAP(0x62908f0)
    }
}
