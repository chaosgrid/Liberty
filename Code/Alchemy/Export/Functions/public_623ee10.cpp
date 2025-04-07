#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ed80);
CLANG_FORWARD_PROC_SYMBOL(public_623ee10);

PROC_DECLARE(0x623ee10, internal_623ee10, public_623ee10);
extern "C" NAKED register_t __cdecl internal_623ee10()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push eax
        push esi
        mov dword ptr ss : [esp+0xC], 0
        call public_623ed80
        mov eax, esi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x623ee10)
    }
}
