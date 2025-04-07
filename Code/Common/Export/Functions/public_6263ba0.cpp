#include "Common-PCH.h"

PROC_DECLARE(0x6263ba0, internal_6263ba0, public_6263ba0);
extern "C" NAKED register_t __cdecl internal_6263ba0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x6263ba0)
    }
}
