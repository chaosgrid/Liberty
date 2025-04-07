#include "Common-PCH.h"

PROC_DECLARE(0x634c6c0, internal_634c6c0, public_634c6c0);
extern "C" NAKED register_t __cdecl internal_634c6c0()
{
    __asm
    {
        mov eax, 0x3E8
        ret 
        UNREACHABLE_TRAP(0x634c6c0)
    }
}
