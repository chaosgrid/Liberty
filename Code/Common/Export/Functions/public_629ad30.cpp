#include "Common-PCH.h"

PROC_DECLARE(0x629ad30, internal_629ad30, public_629ad30);
extern "C" NAKED register_t __cdecl internal_629ad30()
{
    __asm
    {
        lea eax, ds:[ecx+0x1B8]
        ret 
        UNREACHABLE_TRAP(0x629ad30)
    }
}
