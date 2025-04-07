#include "Server-PCH.h"

PROC_DECLARE(0x6cf3d70, internal_6cf3d70, public_6cf3d70);
extern "C" NAKED register_t __cdecl internal_6cf3d70()
{
    __asm
    {
        mov eax, 0x1000000
        ret 
        UNREACHABLE_TRAP(0x6cf3d70)
    }
}
