#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711ac0, internal_6711ac0, public_6711ac0);
extern "C" NAKED register_t __cdecl internal_6711ac0()
{
    __asm
    {
        lea eax, ds:[ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6711ac0)
    }
}
