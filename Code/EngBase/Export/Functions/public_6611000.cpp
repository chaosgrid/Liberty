#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611010);
CLANG_FORWARD_PROC_SYMBOL(public_6611090);

PROC_DECLARE(0x6611000, internal_6611000, public_6611000);
extern "C" NAKED register_t __cdecl internal_6611000()
{
    __asm
    {
        call public_6611010
        jmp public_6611090
        UNREACHABLE_TRAP(0x6611000)
    }
}
