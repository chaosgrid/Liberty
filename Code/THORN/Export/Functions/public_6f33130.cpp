#include "THORN-PCH.h"

PROC_DECLARE(0x6f33130, internal_6f33130, public_6f33130);
extern "C" NAKED register_t __cdecl internal_6f33130()
{
    __asm
    {
        mov eax, offset public_6f5ff0c
        ret 
        UNREACHABLE_TRAP(0x6f33130)
    }
}
