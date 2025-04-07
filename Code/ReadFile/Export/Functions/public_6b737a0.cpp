#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b737a0);

PROC_DECLARE(0x6b737a0, internal_6b737a0, public_6b737a0);
extern "C" NAKED register_t __cdecl internal_6b737a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        push ecx
        push 0x2000
        push esi
        call dword ptr ds : [public_6b79084]
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b737a0)
    }
}
