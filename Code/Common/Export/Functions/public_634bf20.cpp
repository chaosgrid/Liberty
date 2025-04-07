#include "Common-PCH.h"

PROC_DECLARE(0x634bf20, internal_634bf20, public_634bf20);
extern "C" NAKED register_t __cdecl internal_634bf20()
{
    __asm
    {
        mov eax, offset public_63edca8
        ret 
        UNREACHABLE_TRAP(0x634bf20)
    }
}
