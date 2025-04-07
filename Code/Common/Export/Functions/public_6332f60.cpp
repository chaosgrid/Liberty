#include "Common-PCH.h"

PROC_DECLARE(0x6332f60, internal_6332f60, public_6332f60);
extern "C" NAKED register_t __cdecl internal_6332f60()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x14]
        ret 
        UNREACHABLE_TRAP(0x6332f60)
    }
}
