#include "Common-PCH.h"

PROC_DECLARE(0x62a22c0, internal_62a22c0, public_62a22c0);
extern "C" NAKED register_t __cdecl internal_62a22c0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x62a22c0)
    }
}
