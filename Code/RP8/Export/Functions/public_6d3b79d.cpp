#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37ae9);
CLANG_FORWARD_PROC_SYMBOL(public_6d3b79d);

PROC_DECLARE(0x6d3b79d, internal_6d3b79d, public_6d3b79d);
extern "C" NAKED register_t __cdecl internal_6d3b79d()
{
    __asm
    {
        push esi
        push 1
        push 8
        push dword ptr ss : [esp+0x10]
        mov esi, ecx
        call public_6d37ae9
        mov dword ptr ds : [esi], offset public_6d5f77c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3b79d)
    }
}
