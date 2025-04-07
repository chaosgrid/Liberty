#include "Common-PCH.h"

PROC_DECLARE(0x633ae50, internal_633ae50, public_633ae50);
extern "C" NAKED register_t __cdecl internal_633ae50()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x88]
        ret 
        UNREACHABLE_TRAP(0x633ae50)
    }
}
