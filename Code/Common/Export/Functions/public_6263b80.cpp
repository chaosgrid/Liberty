#include "Common-PCH.h"

PROC_DECLARE(0x6263b80, internal_6263b80, public_6263b80);
extern "C" NAKED register_t __cdecl internal_6263b80()
{
    __asm
    {
        lea eax, ds:[ecx+8]
        ret 
        UNREACHABLE_TRAP(0x6263b80)
    }
}
