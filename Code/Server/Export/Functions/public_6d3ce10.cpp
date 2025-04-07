#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cda0);

PROC_DECLARE(0x6d3ce10, internal_6d3ce10, public_6d3ce10);
extern "C" NAKED register_t __cdecl internal_6d3ce10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3cda0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3ce10)
    }
}
