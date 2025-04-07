#include "Freelancer-PCH.h"

PROC_DECLARE(0x564a50, internal_564a50, public_564a50);
extern "C" NAKED register_t __cdecl internal_564a50()
{
    __asm
    {
        mov dword ptr ds : [public_67c1cc], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x564a50)
    }
}
