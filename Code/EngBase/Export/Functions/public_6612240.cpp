#include "EngBase-PCH.h"

PROC_DECLARE(0x6612240, internal_6612240, public_6612240);
extern "C" NAKED register_t __cdecl internal_6612240()
{
    __asm
    {
        lea eax, ds:[ecx+0x78]
        ret 
        UNREACHABLE_TRAP(0x6612240)
    }
}
