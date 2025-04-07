#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a750, internal_6f4a750, public_6f4a750);
extern "C" NAKED register_t __cdecl internal_6f4a750()
{
    __asm
    {
        mov eax, offset public_6f5e514
        ret 
        UNREACHABLE_TRAP(0x6f4a750)
    }
}
