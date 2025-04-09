#include "FreeLancer-PCH.h"

PROC_DECLARE(0x406b50, internal_406b50, public_406b50);
extern "C" NAKED register_t __cdecl internal_406b50()
{
    __asm
    {
        inc dword ptr ds : [ecx+0x18]
        ret 
        UNREACHABLE_TRAP(0x406b50)
    }
}
