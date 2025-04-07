#include "Common-PCH.h"

PROC_DECLARE(0x633afb0, internal_633afb0, public_633afb0);
extern "C" NAKED register_t __cdecl internal_633afb0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x64]
        ret 
        UNREACHABLE_TRAP(0x633afb0)
    }
}
