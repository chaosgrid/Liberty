#include "Common-PCH.h"

PROC_DECLARE(0x629d2c0, internal_629d2c0, public_629d2c0);
extern "C" NAKED register_t __cdecl internal_629d2c0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x60]
        ret 
        UNREACHABLE_TRAP(0x629d2c0)
    }
}
