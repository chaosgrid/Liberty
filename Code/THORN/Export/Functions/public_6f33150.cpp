#include "THORN-PCH.h"

PROC_DECLARE(0x6f33150, internal_6f33150, public_6f33150);
extern "C" NAKED register_t __cdecl internal_6f33150()
{
    __asm
    {
        mov eax, offset public_6f5febc
        ret 
        UNREACHABLE_TRAP(0x6f33150)
    }
}
