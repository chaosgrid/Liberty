#include "Server-PCH.h"

PROC_DECLARE(0x6ce1ad0, internal_6ce1ad0, public_6ce1ad0);
extern "C" NAKED register_t __cdecl internal_6ce1ad0()
{
    __asm
    {
        lea eax, ds:[ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x6ce1ad0)
    }
}
