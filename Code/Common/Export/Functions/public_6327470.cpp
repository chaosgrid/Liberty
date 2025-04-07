#include "Common-PCH.h"

PROC_DECLARE(0x6327470, internal_6327470, public_6327470);
extern "C" NAKED register_t __cdecl internal_6327470()
{
    __asm
    {
        lea eax, ds:[ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x6327470)
    }
}
