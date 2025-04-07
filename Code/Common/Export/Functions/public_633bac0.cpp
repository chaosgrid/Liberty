#include "Common-PCH.h"

PROC_DECLARE(0x633bac0, internal_633bac0, public_633bac0);
extern "C" NAKED register_t __cdecl internal_633bac0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x6C]
        ret 
        UNREACHABLE_TRAP(0x633bac0)
    }
}
