#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711a80, internal_6711a80, public_6711a80);
extern "C" NAKED register_t __cdecl internal_6711a80()
{
    __asm
    {
        lea eax, ds:[ecx+0x34]
        ret 
        UNREACHABLE_TRAP(0x6711a80)
    }
}
