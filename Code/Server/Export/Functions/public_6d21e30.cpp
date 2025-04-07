#include "Server-PCH.h"

PROC_DECLARE(0x6d21e30, internal_6d21e30, public_6d21e30);
extern "C" NAKED register_t __cdecl internal_6d21e30()
{
    __asm
    {
        lea eax, ds:[ecx+0x30]
        ret 
        UNREACHABLE_TRAP(0x6d21e30)
    }
}
