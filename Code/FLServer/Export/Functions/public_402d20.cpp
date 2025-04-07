#include "FLServer-PCH.h"

PROC_DECLARE(0x402d20, internal_402d20, public_402d20);
extern "C" NAKED register_t __cdecl internal_402d20()
{
    __asm
    {
        lea eax, ds:[ecx+4]
        ret 
        UNREACHABLE_TRAP(0x402d20)
    }
}
