#include "Common-PCH.h"

PROC_DECLARE(0x62da560, internal_62da560, public_62da560);
extern "C" NAKED register_t __cdecl internal_62da560()
{
    __asm
    {
        mov ax, 2
        ret 
        UNREACHABLE_TRAP(0x62da560)
    }
}
