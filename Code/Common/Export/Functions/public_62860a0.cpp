#include "Common-PCH.h"

PROC_DECLARE(0x62860a0, internal_62860a0, public_62860a0);
extern "C" NAKED register_t __cdecl internal_62860a0()
{
    __asm
    {
        lea eax, ds:[ecx+0xE4]
        ret 
        UNREACHABLE_TRAP(0x62860a0)
    }
}
