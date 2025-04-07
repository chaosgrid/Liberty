#include "RP8-PCH.h"

PROC_DECLARE(0x6d11354, internal_6d11354, public_6d11354);
extern "C" NAKED register_t __cdecl internal_6d11354()
{
    __asm
    {
        push ebp
        mov ebp, esp
        xor eax, eax
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d11354)
    }
}
