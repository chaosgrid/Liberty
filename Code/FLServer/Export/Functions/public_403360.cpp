#include "FLServer-PCH.h"

PROC_DECLARE(0x403360, internal_403360, public_403360);
extern "C" NAKED register_t __cdecl internal_403360()
{
    __asm
    {
        lea eax, ds:[ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x403360)
    }
}
