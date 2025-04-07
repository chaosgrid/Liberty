#include "Common-PCH.h"

PROC_DECLARE(0x629d990, internal_629d990, public_629d990);
extern "C" NAKED register_t __cdecl internal_629d990()
{
    __asm
    {
        lea eax, ds:[ecx+0x50]
        ret 
        UNREACHABLE_TRAP(0x629d990)
    }
}
