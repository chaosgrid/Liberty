#include "Common-PCH.h"

PROC_DECLARE(0x629ad10, internal_629ad10, public_629ad10);
extern "C" NAKED register_t __cdecl internal_629ad10()
{
    __asm
    {
        lea eax, ds:[ecx+0x1B0]
        ret 
        UNREACHABLE_TRAP(0x629ad10)
    }
}
