#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f450);

PROC_DECLARE(0x6203300, internal_6203300, public_6203300);
extern "C" NAKED register_t __cdecl internal_6203300()
{
    __asm
    {
        call public_623f450
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6203300)
    }
}
