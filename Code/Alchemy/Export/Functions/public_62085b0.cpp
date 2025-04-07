#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62085b0);
CLANG_FORWARD_PROC_SYMBOL(public_620a0f0);

PROC_DECLARE(0x62085b0, internal_62085b0, public_62085b0);
extern "C" NAKED register_t __cdecl internal_62085b0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_620a0f0
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62085b0)
    }
}
