#include "Common-PCH.h"

PROC_DECLARE(0x62d43b0, internal_62d43b0, public_62d43b0);
extern "C" NAKED register_t __cdecl internal_62d43b0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x150]
        ret 
        UNREACHABLE_TRAP(0x62d43b0)
    }
}
