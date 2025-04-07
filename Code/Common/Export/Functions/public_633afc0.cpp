#include "Common-PCH.h"

PROC_DECLARE(0x633afc0, internal_633afc0, public_633afc0);
extern "C" NAKED register_t __cdecl internal_633afc0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x90]
        ret 
        UNREACHABLE_TRAP(0x633afc0)
    }
}
