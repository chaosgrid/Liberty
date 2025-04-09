#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_51b450);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_51e586 _public_51e586
#define public_51e596 _public_51e596
#define public_51e5ba _public_51e5ba
#define public_51e5e6 _public_51e5e6
#define public_51e5eb _public_51e5eb
#define public_51e645 _public_51e645

PROC_DECLARE(0x51e4c0, internal_51e4c0, public_51e4c0);
extern "C" NAKED register_t __cdecl internal_51e4c0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        xor eax, eax
        push edi
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_5c6d64]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x1C], offset public_5dc298
        mov dword ptr ss : [esp+0x18], 0x14
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        mov ebp, ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0xF8]
        push ebx
/*FIXUP push offset public_5dc284 @0x51e50f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc284
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov edi, dword ptr ss : [ebp+0x100]
        lea eax, ss:[ebp+0x110]
        lea esi, ss:[ebp+0x214]
        add edi, 0x10
        mov ecx, 0xC
        push eax
        rep movsd
        call dword ptr ds : [public_5c61a4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xAC]
        test eax, eax
        je public_51e586
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x9A
/*FIXUP push offset public_5dc254 @0x51e565*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc254
        mov eax, 0x100002
/*FIXUP push offset public_5dc220 @0x51e56f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc220
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x18
        ret 4
        public_51e586 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle public_51e5eb
        public_51e596 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ds : [eax], 4
        jne public_51e5ba
        mov edx, dword ptr ss : [ebp+0xFC]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [ebp+0x104], esi
        public_51e5ba : nop
        mov eax, dword ptr ds : [ebx]
/*FIXUP push offset public_5dc214 @0x51e5bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc214
        push esi
        push eax
        call dword ptr ds : [public_5c625c]
        add esp, 0xC
        test eax, eax
        je public_51e5e6
        mov edx, dword ptr ss : [ebp+0x100]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [ebp+0x108], esi
        public_51e5e6 : nop
        inc esi
        cmp esi, edi
        jl public_51e596
        public_51e5eb : nop
        mov ebx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx]
        push 0
        push ebx
        call dword ptr ds : [eax+0x58]
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, ebp
        call public_51b450
        push 0x40400000
        push 0x3F800000
        mov bl, al
        call public_41a0f0
        add esp, 8
        call public_54baf0
        test eax, eax
        je public_51e645
        mov ecx, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [public_67ecd0]
        mov esi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 5
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        call dword ptr ds : [esi+0xE4]
        public_51e645 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x51e4c0)
    }
}

#undef public_51e586
#undef public_51e596
#undef public_51e5ba
#undef public_51e5e6
#undef public_51e5eb
#undef public_51e645
