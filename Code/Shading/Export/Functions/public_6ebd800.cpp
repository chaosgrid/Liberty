#include "Shading-PCH.h"

PROC_DECLARE(0x6ebd800, internal_6ebd800, public_6ebd800);
extern "C" NAKED register_t __cdecl internal_6ebd800()
{
    __asm
    {
        mov eax, offset public_6ed274c
        ret 
        UNREACHABLE_TRAP(0x6ebd800)
    }
}
