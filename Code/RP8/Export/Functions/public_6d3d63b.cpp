#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3d63b, internal_6d3d63b, public_6d3d63b);
extern "C" NAKED register_t __cdecl internal_6d3d63b()
{
    __asm
    {
        push 1
        call public_6d404a2
        jmp dword ptr ds : [public_6d6ca88]
        UNREACHABLE_TRAP(0x6d3d63b)
    }
}
