#include "Server-PCH.h"

PROC_DECLARE(0x6ce10e0, internal_6ce10e0, public_6ce10e0);
extern "C" NAKED register_t __cdecl internal_6ce10e0()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x18], 8
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x6ce10e0)
    }
}
