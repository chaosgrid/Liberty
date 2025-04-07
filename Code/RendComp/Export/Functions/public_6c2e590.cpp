#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e620);

PROC_DECLARE(0x6c2e590, internal_6c2e590, public_6c2e590);
extern "C" NAKED register_t __cdecl internal_6c2e590()
{
    __asm
    {
        call public_6c2e5a0
        jmp public_6c2e620
        UNREACHABLE_TRAP(0x6c2e590)
    }
}
