#include "Common-PCH.h"

PROC_DECLARE(0x633b020, internal_633b020, public_633b020);
extern "C" NAKED register_t __cdecl internal_633b020()
{
    __asm
    {
        lea eax, ds:[ecx+0x80]
        ret 
        UNREACHABLE_TRAP(0x633b020)
    }
}
