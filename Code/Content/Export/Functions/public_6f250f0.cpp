#include "Content-PCH.h"

PROC_DECLARE(0x6f250f0, internal_6f250f0, public_6f250f0);
extern "C" NAKED register_t __cdecl internal_6f250f0()
{
    __asm
    {
        mov eax, 0xD
        ret 
        UNREACHABLE_TRAP(0x6f250f0)
    }
}
