#include "Common-PCH.h"

PROC_DECLARE(0x627cb70, internal_627cb70, public_627cb70);
extern "C" NAKED register_t __cdecl internal_627cb70()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x38]
        ret 
        UNREACHABLE_TRAP(0x627cb70)
    }
}
