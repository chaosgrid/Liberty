#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3e3a5, internal_6d3e3a5, public_6d3e3a5);
extern "C" NAKED register_t __cdecl internal_6d3e3a5()
{
    __asm
    {
        push 1
        call public_6d404a2
        jmp dword ptr ds : [public_6d6ca8c]
        UNREACHABLE_TRAP(0x6d3e3a5)
    }
}
