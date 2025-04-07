#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f471a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f471b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4be60);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f4bebb _public_6f4bebb
#define public_6f4befb _public_6f4befb
#define public_6f4bf1b _public_6f4bf1b

PROC_DECLARE(0x6f4be60, internal_6f4be60, public_6f4be60);
extern "C" NAKED register_t __cdecl internal_6f4be60()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ds:[esi+0x20C]
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0x210]
        je public_6f4bf1b
        mov esi, dword ptr ds : [esi+0x1F8]
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ds : [esi+0x10]
        jne public_6f4bebb
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6f4bf1b
        mov ecx, esi
        call public_6f471a0
        or eax, 0xC
        mov ecx, esi
        push eax
        call public_6f471b0
        pop edi
        pop esi
        pop ecx
        ret 8
        public_6f4bebb : nop
        add esi, 0x1C
        lea edx, ss:[esp+0x14]
        push esi
        push edx
        call dword ptr ds : [public_6fb35d8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        cmp edi, eax
        jne public_6f4befb
        mov eax, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6f4bf1b
        mov ecx, esi
        call public_6f471a0
        or eax, 4
        mov ecx, esi
        push eax
        call public_6f471b0
        pop edi
        pop esi
        pop ecx
        ret 8
        public_6f4befb : nop
        mov ecx, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6f4bf1b
        mov ecx, esi
        call public_6f471a0
        and eax, 0xFFFFFFF3
        mov ecx, esi
        push eax
        call public_6f471b0
        public_6f4bf1b : nop
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f4be60)
    }
}

#undef public_6f4bebb
#undef public_6f4befb
#undef public_6f4bf1b
