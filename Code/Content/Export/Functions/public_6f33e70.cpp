#include "Content-PCH.h"

PROC_DECLARE(0x6f33e70, internal_6f33e70, public_6f33e70);
extern "C" NAKED register_t __cdecl internal_6f33e70()
{
    __asm
    {
        lea eax, ds:[ecx+0x1D0]
        ret 
        UNREACHABLE_TRAP(0x6f33e70)
    }
}
