#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f1d0, internal_6d8f1d0, public_6d8f1d0);
extern "C" NAKED register_t __cdecl internal_6d8f1d0()
{
    __asm
    {
        mov eax, offset public_6dbbd2c
        ret 
        UNREACHABLE_TRAP(0x6d8f1d0)
    }
}
