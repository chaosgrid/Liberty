#include "Common-PCH.h"

PROC_DECLARE(0x6287b60, internal_6287b60, public_6287b60);
extern "C" NAKED register_t __cdecl internal_6287b60()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x29C]
        ret 
        UNREACHABLE_TRAP(0x6287b60)
    }
}
