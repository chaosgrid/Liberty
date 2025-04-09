#include "Freelancer-PCH.h"

PROC_DECLARE(0x51cac0, internal_51cac0, public_51cac0);
extern "C" NAKED register_t __cdecl internal_51cac0()
{
    __asm
    {
        mov eax, offset public_5dc10c
        ret 
        UNREACHABLE_TRAP(0x51cac0)
    }
}
