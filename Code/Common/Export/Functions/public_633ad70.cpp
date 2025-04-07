#include "Common-PCH.h"

PROC_DECLARE(0x633ad70, internal_633ad70, public_633ad70);
extern "C" NAKED register_t __cdecl internal_633ad70()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x5C]
        ret 
        UNREACHABLE_TRAP(0x633ad70)
    }
}
