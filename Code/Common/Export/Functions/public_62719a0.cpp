#include "Common-PCH.h"

PROC_DECLARE(0x62719a0, internal_62719a0, public_62719a0);
extern "C" NAKED register_t __cdecl internal_62719a0()
{
    __asm
    {
        mov eax, 0x1FFFFFFF
        ret 
        UNREACHABLE_TRAP(0x62719a0)
    }
}
