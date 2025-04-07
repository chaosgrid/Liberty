#include "THORN-PCH.h"

PROC_DECLARE(0x6f332f0, internal_6f332f0, public_6f332f0);
extern "C" NAKED register_t __cdecl internal_6f332f0()
{
    __asm
    {
        mov eax, offset public_6f5ff28
        ret 
        UNREACHABLE_TRAP(0x6f332f0)
    }
}
