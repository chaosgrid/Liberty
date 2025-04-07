#include "Common-PCH.h"

PROC_DECLARE(0x629a840, internal_629a840, public_629a840);
extern "C" NAKED register_t __cdecl internal_629a840()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1A8]
        ret 
        UNREACHABLE_TRAP(0x629a840)
    }
}
