#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217b80);
CLANG_FORWARD_PROC_SYMBOL(public_6217d80);

PROC_DECLARE(0x6217b80, internal_6217b80, public_6217b80);
extern "C" NAKED register_t __cdecl internal_6217b80()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_6217d80
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6217b80)
    }
}
