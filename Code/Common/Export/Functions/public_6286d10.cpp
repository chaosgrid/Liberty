#include "Common-PCH.h"

PROC_DECLARE(0x6286d10, internal_6286d10, public_6286d10);
extern "C" NAKED register_t __cdecl internal_6286d10()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x11]
        ret 
        UNREACHABLE_TRAP(0x6286d10)
    }
}
