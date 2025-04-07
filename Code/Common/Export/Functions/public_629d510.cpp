#include "Common-PCH.h"

PROC_DECLARE(0x629d510, internal_629d510, public_629d510);
extern "C" NAKED register_t __cdecl internal_629d510()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xFC]
        ret 
        UNREACHABLE_TRAP(0x629d510)
    }
}
