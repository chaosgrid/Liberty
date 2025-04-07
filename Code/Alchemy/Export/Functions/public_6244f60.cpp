#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244f60);

PROC_DECLARE(0x6244f60, internal_6244f60, public_6244f60);
extern "C" NAKED register_t __cdecl internal_6244f60()
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
        call dword ptr ds : [public_624b070]
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6244f60)
    }
}
