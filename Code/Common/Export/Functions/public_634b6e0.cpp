#include "Common-PCH.h"

PROC_DECLARE(0x634b6e0, internal_634b6e0, public_634b6e0);
extern "C" NAKED register_t __cdecl internal_634b6e0()
{
    __asm
    {
        mov eax, 0x258
        ret 
        UNREACHABLE_TRAP(0x634b6e0)
    }
}
