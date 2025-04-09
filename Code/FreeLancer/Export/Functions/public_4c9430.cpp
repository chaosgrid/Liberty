#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);

#define public_4c947b _public_4c947b

PROC_DECLARE(0x4c9430, internal_4c9430, public_4c9430);
extern "C" NAKED register_t __cdecl internal_4c9430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, ecx
        mov ecx, dword ptr ds : [eax]
        sub esp, 0x28
        cmp ecx, 0xFFFFFFFF
        jne public_4c947b
        cmp dword ptr ds : [eax+4], 2
        jne public_4c947b
        push edi
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+4]
        rep stosd
        mov eax, dword ptr ds : [edx+0x150]
        test eax, eax
        mov byte ptr ss : [esp+0x2A], 1
        mov dword ptr ss : [esp+4], eax
        pop edi
        je public_4c947b
        lea eax, ss:[esp]
        push eax
        call public_54bcb0
        add esp, 4
        add esp, 0x28
        ret 4
        public_4c947b : nop
        xor al, al
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x4c9430)
    }
}

#undef public_4c947b
