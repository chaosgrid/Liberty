#include "Server-PCH.h"

PROC_DECLARE(0x6ce14e0, internal_6ce14e0, public_6ce14e0);
extern "C" NAKED register_t __cdecl internal_6ce14e0()
{
    __asm
    {
        lea eax, ds:[ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6ce14e0)
    }
}
