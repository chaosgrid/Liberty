#include "Common-PCH.h"

PROC_DECLARE(0x633ad80, internal_633ad80, public_633ad80);
extern "C" NAKED register_t __cdecl internal_633ad80()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x60]
        ret 
        UNREACHABLE_TRAP(0x633ad80)
    }
}
