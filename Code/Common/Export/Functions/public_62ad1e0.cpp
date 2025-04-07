#include "Common-PCH.h"

PROC_DECLARE(0x62ad1e0, internal_62ad1e0, public_62ad1e0);
extern "C" NAKED register_t __cdecl internal_62ad1e0()
{
    __asm
    {
        mov byte ptr ds : [ecx+0xF0], 0
        ret 
        UNREACHABLE_TRAP(0x62ad1e0)
    }
}
