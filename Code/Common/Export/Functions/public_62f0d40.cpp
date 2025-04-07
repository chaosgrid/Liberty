#include "Common-PCH.h"

PROC_DECLARE(0x62f0d40, internal_62f0d40, public_62f0d40);
extern "C" NAKED register_t __cdecl internal_62f0d40()
{
    __asm
    {
        inc dword ptr ds : [ecx+0x3C]
        ret 
        UNREACHABLE_TRAP(0x62f0d40)
    }
}
