#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3b573);
CLANG_FORWARD_PROC_SYMBOL(public_6d3bd3b);

PROC_DECLARE(0x6d3bd3b, internal_6d3bd3b, public_6d3bd3b);
extern "C" NAKED register_t __cdecl internal_6d3bd3b()
{
    __asm
    {
        push esi
        push dword ptr ss : [esp+8]
        mov esi, ecx
        call public_6d3b573
        mov dword ptr ds : [esi], offset public_6d5f87c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3bd3b)
    }
}
