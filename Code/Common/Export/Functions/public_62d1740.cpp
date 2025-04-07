#include "Common-PCH.h"

PROC_DECLARE(0x62d1740, internal_62d1740, public_62d1740);
extern "C" NAKED register_t __cdecl internal_62d1740()
{
    __asm
    {
        mov eax, 2
        ret 
        UNREACHABLE_TRAP(0x62d1740)
    }
}
