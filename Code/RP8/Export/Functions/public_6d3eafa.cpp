#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3eafa, internal_6d3eafa, public_6d3eafa);
extern "C" NAKED register_t __cdecl internal_6d3eafa()
{
    __asm
    {
        push 1
        call public_6d404a2
        jmp dword ptr ds : [public_6d6cac8]
        UNREACHABLE_TRAP(0x6d3eafa)
    }
}
