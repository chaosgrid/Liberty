#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cea0);

PROC_DECLARE(0x6d3cf10, internal_6d3cf10, public_6d3cf10);
extern "C" NAKED register_t __cdecl internal_6d3cf10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3cea0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3cf10)
    }
}
