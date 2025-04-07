#include "Common-PCH.h"

PROC_DECLARE(0x627cd20, internal_627cd20, public_627cd20);
extern "C" NAKED register_t __cdecl internal_627cd20()
{
    __asm
    {
        fld dword ptr ds : [public_639a1d0]
        ret 
        UNREACHABLE_TRAP(0x627cd20)
    }
}
