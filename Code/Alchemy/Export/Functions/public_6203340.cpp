#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203340, internal_6203340, public_6203340);
extern "C" NAKED register_t __cdecl internal_6203340()
{
    __asm
    {
        mov eax, offset public_625539c
        ret 
        UNREACHABLE_TRAP(0x6203340)
    }
}
