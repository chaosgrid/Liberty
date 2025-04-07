#include "Common-PCH.h"

PROC_DECLARE(0x62a22d0, internal_62a22d0, public_62a22d0);
extern "C" NAKED register_t __cdecl internal_62a22d0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xF1]
        ret 
        UNREACHABLE_TRAP(0x62a22d0)
    }
}
