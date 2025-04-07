#include "Content-PCH.h"

PROC_DECLARE(0x6f250e0, internal_6f250e0, public_6f250e0);
extern "C" NAKED register_t __cdecl internal_6f250e0()
{
    __asm
    {
        mov eax, 0xB
        ret 
        UNREACHABLE_TRAP(0x6f250e0)
    }
}
