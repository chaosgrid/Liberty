#include "Common-PCH.h"

PROC_DECLARE(0x633ae40, internal_633ae40, public_633ae40);
extern "C" NAKED register_t __cdecl internal_633ae40()
{
    __asm
    {
        lea eax, ds:[ecx+0x8C]
        ret 
        UNREACHABLE_TRAP(0x633ae40)
    }
}
