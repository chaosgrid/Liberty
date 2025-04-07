#include "Common-PCH.h"

PROC_DECLARE(0x63624a0, internal_63624a0, public_63624a0);
extern "C" NAKED register_t __cdecl internal_63624a0()
{
    __asm
    {
        mov dword ptr ds : [0], 0
        ret 8
        UNREACHABLE_TRAP(0x63624a0)
    }
}
