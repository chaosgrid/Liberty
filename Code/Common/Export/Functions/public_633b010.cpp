#include "Common-PCH.h"

PROC_DECLARE(0x633b010, internal_633b010, public_633b010);
extern "C" NAKED register_t __cdecl internal_633b010()
{
    __asm
    {
        lea eax, ds:[ecx+0x74]
        ret 
        UNREACHABLE_TRAP(0x633b010)
    }
}
