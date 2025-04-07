#include "Common-PCH.h"

PROC_DECLARE(0x62876a0, internal_62876a0, public_62876a0);
extern "C" NAKED register_t __cdecl internal_62876a0()
{
    __asm
    {
        lea eax, ds:[ecx+0x164]
        ret 
        UNREACHABLE_TRAP(0x62876a0)
    }
}
