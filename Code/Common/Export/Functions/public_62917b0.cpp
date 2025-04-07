#include "Common-PCH.h"

PROC_DECLARE(0x62917b0, internal_62917b0, public_62917b0);
extern "C" NAKED register_t __cdecl internal_62917b0()
{
    __asm
    {
        lea eax, ds:[ecx+0x60]
        ret 
        UNREACHABLE_TRAP(0x62917b0)
    }
}
