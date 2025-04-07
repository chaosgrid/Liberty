#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f0a0, internal_6d8f0a0, public_6d8f0a0);
extern "C" NAKED register_t __cdecl internal_6d8f0a0()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6d8f0a0)
    }
}
