#include "Alchemy-PCH.h"

PROC_DECLARE(0x623d7a0, internal_623d7a0, public_623d7a0);
extern "C" NAKED register_t __cdecl internal_623d7a0()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623d7a0)
    }
}
