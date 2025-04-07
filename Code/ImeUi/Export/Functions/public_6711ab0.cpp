#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711ab0, internal_6711ab0, public_6711ab0);
extern "C" NAKED register_t __cdecl internal_6711ab0()
{
    __asm
    {
        lea eax, ds:[ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x6711ab0)
    }
}
