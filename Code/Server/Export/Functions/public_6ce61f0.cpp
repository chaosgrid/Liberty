#include "Server-PCH.h"

PROC_DECLARE(0x6ce61f0, internal_6ce61f0, public_6ce61f0);
extern "C" NAKED register_t __cdecl internal_6ce61f0()
{
    __asm
    {
        mov eax, 0x8000000
        ret 
        UNREACHABLE_TRAP(0x6ce61f0)
    }
}
