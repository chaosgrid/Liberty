#include "Common-PCH.h"

PROC_DECLARE(0x62c2f50, internal_62c2f50, public_62c2f50);
extern "C" NAKED register_t __cdecl internal_62c2f50()
{
    __asm
    {
        and byte ptr ds : [ecx+0x28], 0xFD
        ret 
        UNREACHABLE_TRAP(0x62c2f50)
    }
}
