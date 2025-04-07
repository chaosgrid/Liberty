#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8eec0, internal_6d8eec0, public_6d8eec0);
extern "C" NAKED register_t __cdecl internal_6d8eec0()
{
    __asm
    {
        mov eax, offset public_6dbbce0
        ret 
        UNREACHABLE_TRAP(0x6d8eec0)
    }
}
