#include "Common-PCH.h"

PROC_DECLARE(0x634b690, internal_634b690, public_634b690);
extern "C" NAKED register_t __cdecl internal_634b690()
{
    __asm
    {
        mov eax, 0x7D0
        ret 
        UNREACHABLE_TRAP(0x634b690)
    }
}
