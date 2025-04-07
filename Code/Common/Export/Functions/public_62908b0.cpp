#include "Common-PCH.h"

PROC_DECLARE(0x62908b0, internal_62908b0, public_62908b0);
extern "C" NAKED register_t __cdecl internal_62908b0()
{
    __asm
    {
        fld dword ptr ds : [public_639c418]
        fdiv dword ptr ds : [public_63eb318]
        fstp dword ptr ds : [public_63fc0f4]
        ret 
        UNREACHABLE_TRAP(0x62908b0)
    }
}
