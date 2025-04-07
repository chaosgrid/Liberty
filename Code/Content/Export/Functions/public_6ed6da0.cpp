#include "Content-PCH.h"

PROC_DECLARE(0x6ed6da0, internal_6ed6da0, public_6ed6da0);
extern "C" NAKED register_t __cdecl internal_6ed6da0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x14]
        ret 
        UNREACHABLE_TRAP(0x6ed6da0)
    }
}
