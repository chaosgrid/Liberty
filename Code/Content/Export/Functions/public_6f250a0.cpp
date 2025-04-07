#include "Content-PCH.h"

PROC_DECLARE(0x6f250a0, internal_6f250a0, public_6f250a0);
extern "C" NAKED register_t __cdecl internal_6f250a0()
{
    __asm
    {
        mov eax, 0x13
        ret 
        UNREACHABLE_TRAP(0x6f250a0)
    }
}
