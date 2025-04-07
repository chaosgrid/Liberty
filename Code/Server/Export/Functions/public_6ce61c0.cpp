#include "Server-PCH.h"

PROC_DECLARE(0x6ce61c0, internal_6ce61c0, public_6ce61c0);
extern "C" NAKED register_t __cdecl internal_6ce61c0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x3C]
        ret 
        UNREACHABLE_TRAP(0x6ce61c0)
    }
}
