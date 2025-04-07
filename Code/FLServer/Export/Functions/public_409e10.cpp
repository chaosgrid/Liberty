#include "FLServer-PCH.h"

PROC_DECLARE(0x409e10, internal_409e10, public_409e10);
extern "C" NAKED register_t __cdecl internal_409e10()
{
    __asm
    {
        fld qword ptr ds : [ecx+0x2C0]
        ret 
        UNREACHABLE_TRAP(0x409e10)
    }
}
