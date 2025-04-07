#include "Shading-PCH.h"

PROC_DECLARE(0x6ec70a0, internal_6ec70a0, public_6ec70a0);
extern "C" NAKED register_t __cdecl internal_6ec70a0()
{
    __asm
    {
        lea eax, ds:[ecx+8]
        ret 
        UNREACHABLE_TRAP(0x6ec70a0)
    }
}
