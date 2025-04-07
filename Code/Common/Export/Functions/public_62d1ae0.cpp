#include "Common-PCH.h"

PROC_DECLARE(0x62d1ae0, internal_62d1ae0, public_62d1ae0);
extern "C" NAKED register_t __cdecl internal_62d1ae0()
{
    __asm
    {
        lea eax, ds:[ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x62d1ae0)
    }
}
