#include "Common-PCH.h"

PROC_DECLARE(0x633ac20, internal_633ac20, public_633ac20);
extern "C" NAKED register_t __cdecl internal_633ac20()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x54]
        ret 
        UNREACHABLE_TRAP(0x633ac20)
    }
}
