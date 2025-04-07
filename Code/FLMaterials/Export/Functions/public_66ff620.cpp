#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fabb0);
CLANG_FORWARD_PROC_SYMBOL(public_66fabd0);

#define public_66ff66c _public_66ff66c

PROC_DECLARE(0x66ff620, internal_66ff620, public_66ff620);
extern "C" NAKED register_t __cdecl internal_66ff620()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        push 8
        push esi
        call dword ptr ds : [eax+0x20]
        test eax, eax
        jl public_66ff66c
        call public_66fabd0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        push 0x80
        push 0x3F800000
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_66fabb0
        add esp, 4
        public_66ff66c : nop
        xor eax, eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x66ff620)
    }
}

#undef public_66ff66c
