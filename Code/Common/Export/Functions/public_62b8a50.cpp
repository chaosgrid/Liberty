#include "Common-PCH.h"

PROC_DECLARE(0x62b8a50, internal_62b8a50, public_62b8a50);
extern "C" NAKED register_t __cdecl internal_62b8a50()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1E4]
        ret 
        UNREACHABLE_TRAP(0x62b8a50)
    }
}
