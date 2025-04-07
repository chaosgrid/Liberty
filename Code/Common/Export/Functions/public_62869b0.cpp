#include "Common-PCH.h"

PROC_DECLARE(0x62869b0, internal_62869b0, public_62869b0);
extern "C" NAKED register_t __cdecl internal_62869b0()
{
    __asm
    {
        lea eax, ds:[ecx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x62869b0)
    }
}
