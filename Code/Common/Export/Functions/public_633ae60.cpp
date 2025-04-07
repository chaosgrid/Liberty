#include "Common-PCH.h"

PROC_DECLARE(0x633ae60, internal_633ae60, public_633ae60);
extern "C" NAKED register_t __cdecl internal_633ae60()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x9C]
        ret 
        UNREACHABLE_TRAP(0x633ae60)
    }
}
