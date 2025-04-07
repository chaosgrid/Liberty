#include "Common-PCH.h"

PROC_DECLARE(0x629d4c0, internal_629d4c0, public_629d4c0);
extern "C" NAKED register_t __cdecl internal_629d4c0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xF4]
        ret 
        UNREACHABLE_TRAP(0x629d4c0)
    }
}
