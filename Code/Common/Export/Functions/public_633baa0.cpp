#include "Common-PCH.h"

PROC_DECLARE(0x633baa0, internal_633baa0, public_633baa0);
extern "C" NAKED register_t __cdecl internal_633baa0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x60]
        ret 
        UNREACHABLE_TRAP(0x633baa0)
    }
}
