#include "Content-PCH.h"

PROC_DECLARE(0x6f250b0, internal_6f250b0, public_6f250b0);
extern "C" NAKED register_t __cdecl internal_6f250b0()
{
    __asm
    {
        mov eax, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f250b0)
    }
}
