#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8eeb0, internal_6d8eeb0, public_6d8eeb0);
extern "C" NAKED register_t __cdecl internal_6d8eeb0()
{
    __asm
    {
        mov eax, offset public_6dbbcdc
        ret 
        UNREACHABLE_TRAP(0x6d8eeb0)
    }
}
