#include "FLServer-PCH.h"

PROC_DECLARE(0x411d50, internal_411d50, public_411d50);
extern "C" NAKED register_t __cdecl internal_411d50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b290]
        ret 
        UNREACHABLE_TRAP(0x411d50)
    }
}
