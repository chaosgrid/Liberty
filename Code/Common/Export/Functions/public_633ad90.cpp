#include "Common-PCH.h"

PROC_DECLARE(0x633ad90, internal_633ad90, public_633ad90);
extern "C" NAKED register_t __cdecl internal_633ad90()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x64]
        ret 
        UNREACHABLE_TRAP(0x633ad90)
    }
}
