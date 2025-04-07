#include "Common-PCH.h"

PROC_DECLARE(0x629a850, internal_629a850, public_629a850);
extern "C" NAKED register_t __cdecl internal_629a850()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1A9]
        ret 
        UNREACHABLE_TRAP(0x629a850)
    }
}
