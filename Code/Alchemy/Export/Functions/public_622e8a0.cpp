#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e8a0);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);

#define public_622e8ca _public_622e8ca

PROC_DECLARE(0x622e8a0, internal_622e8a0, public_622e8a0);
extern "C" NAKED register_t __cdecl internal_622e8a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        lea esi, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0x1BA23359
        jne public_622e8ca
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call dword ptr ds : [public_624b00c]
        add esp, 4
        mov dword ptr ds : [esi+0x60], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_622e8ca : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push esi
        call public_623f9e0
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x622e8a0)
    }
}

#undef public_622e8ca
