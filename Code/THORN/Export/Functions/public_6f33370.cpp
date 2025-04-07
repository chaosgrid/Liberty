#include "THORN-PCH.h"

PROC_DECLARE(0x6f33370, internal_6f33370, public_6f33370);
extern "C" NAKED register_t __cdecl internal_6f33370()
{
    __asm
    {
        mov eax, offset public_6f5ff3c
        ret 
        UNREACHABLE_TRAP(0x6f33370)
    }
}
