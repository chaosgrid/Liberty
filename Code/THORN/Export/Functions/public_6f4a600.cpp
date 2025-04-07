#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a600, internal_6f4a600, public_6f4a600);
extern "C" NAKED register_t __cdecl internal_6f4a600()
{
    __asm
    {
        mov eax, offset public_6f6029c
        ret 
        UNREACHABLE_TRAP(0x6f4a600)
    }
}
