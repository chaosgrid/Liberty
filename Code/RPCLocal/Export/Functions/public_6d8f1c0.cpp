#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f1c0, internal_6d8f1c0, public_6d8f1c0);
extern "C" NAKED register_t __cdecl internal_6d8f1c0()
{
    __asm
    {
        mov eax, offset public_6dbbd28
        ret 
        UNREACHABLE_TRAP(0x6d8f1c0)
    }
}
