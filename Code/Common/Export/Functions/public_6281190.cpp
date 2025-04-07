#include "Common-PCH.h"

PROC_DECLARE(0x6281190, internal_6281190, public_6281190);
extern "C" NAKED register_t __cdecl internal_6281190()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xA0]
        and al, 1
        ret 
        UNREACHABLE_TRAP(0x6281190)
    }
}
