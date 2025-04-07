#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3cce1, internal_6d3cce1, public_6d3cce1);
extern "C" NAKED register_t __cdecl internal_6d3cce1()
{
    __asm
    {
        push 1
        call public_6d404a2
        jmp dword ptr ds : [public_6d6ca60]
        UNREACHABLE_TRAP(0x6d3cce1)
    }
}
