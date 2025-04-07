#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_622d3b0);

PROC_DECLARE(0x622d2a0, internal_622d2a0, public_622d2a0);
extern "C" NAKED register_t __cdecl internal_622d2a0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_622d3b0
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x622d2a0)
    }
}
