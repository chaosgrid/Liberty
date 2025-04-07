#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62120f0);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);

#define public_621211a _public_621211a

PROC_DECLARE(0x62120f0, internal_62120f0, public_62120f0);
extern "C" NAKED register_t __cdecl internal_62120f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        lea esi, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0x1BA23359
        jne public_621211a
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call dword ptr ds : [public_624b00c]
        add esp, 4
        mov dword ptr ds : [esi+0x60], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_621211a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push esi
        call public_623f9e0
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62120f0)
    }
}

#undef public_621211a
