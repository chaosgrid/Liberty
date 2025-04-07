#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217be0);
CLANG_FORWARD_PROC_SYMBOL(public_6217da0);

PROC_DECLARE(0x6217be0, internal_6217be0, public_6217be0);
extern "C" NAKED register_t __cdecl internal_6217be0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_6217da0
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6217be0)
    }
}
