#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b06a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b1450);
CLANG_FORWARD_PROC_SYMBOL(public_4b1d20);
CLANG_FORWARD_PROC_SYMBOL(public_5646e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4b06e0 _public_4b06e0
#define public_4b06f3 _public_4b06f3
#define public_4b0700 _public_4b0700
#define public_4b070b _public_4b070b
#define public_4b0718 _public_4b0718
#define public_4b0760 _public_4b0760
#define public_4b0770 _public_4b0770
#define public_4b07c2 _public_4b07c2
#define public_4b07c5 _public_4b07c5
#define public_4b07d1 _public_4b07d1
#define public_4b07e6 _public_4b07e6
#define public_4b0856 _public_4b0856
#define public_4b0868 _public_4b0868
#define public_4b088a _public_4b088a
#define public_4b088c _public_4b088c
#define public_4b08bd _public_4b08bd
#define public_4b08c5 _public_4b08c5
#define public_4b08cc _public_4b08cc
#define public_4b090e _public_4b090e

PROC_DECLARE(0x4b06a0, internal_4b06a0, public_4b06a0);
extern "C" NAKED register_t __cdecl internal_4b06a0()
{
    __asm
    {
        sub esp, 0x2C
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x32E]
        test al, al
        jne public_4b090e
        push ebx
        xor ecx, ecx
        push esi
        lea ebx, ss:[ebp+0x7B8]
        push edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x38], 0
        mov byte ptr ss : [esp+0x3A], 0
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], ebx
        lea ecx, ds:[ecx]
        public_4b06e0 : nop
        mov eax, dword ptr ss : [ebp+0x7F4]
        cmp eax, 1
        jne public_4b06f3
        mov esi, dword ptr ss : [ebp+0x508]
        jmp public_4b070b
        public_4b06f3 : nop
        cmp eax, 2
        jne public_4b0700
        mov esi, dword ptr ss : [ebp+0x548]
        jmp public_4b070b
        public_4b0700 : nop
        cmp eax, 3
        jne public_4b0718
        mov esi, dword ptr ss : [ebp+0x528]
        public_4b070b : nop
        add esi, ecx
        lea edi, ss:[esp+0x24]
        mov ecx, 6
        rep movsd
        public_4b0718 : nop
        mov al, byte ptr ss : [esp+0x3A]
        test al, al
        jne public_4b08cc
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_4b0868
        mov esi, dword ptr ss : [esp+0x24]
        cmp esi, 0x536
        jne public_4b07e6
        mov eax, dword ptr ss : [ebp+0x8B8]
        cmp eax, dword ptr ss : [ebp+0x330]
        jne public_4b0760
        mov cl, byte ptr ss : [ebp+0x8BC]
        cmp cl, byte ptr ss : [ebp+0x334]
        je public_4b08cc
        public_4b0760 : nop
        xor edi, edi
        lea esi, ss:[ebp+0x954]
        lea ebx, ss:[ebp+0x8D4]
        mov edi, edi
        public_4b0770 : nop
        mov al, byte ptr ds : [edi+ebp+0x944]
        test al, al
        je public_4b07d1
        mov edx, dword ptr ds : [ebx-8]
        cmp edx, dword ptr ss : [ebp+0x8B8]
        jne public_4b07d1
        mov ecx, dword ptr ds : [ebx]
        xor eax, eax
        cmp ecx, 0x20
        movzx ecx, byte ptr ss : [ebp+0x8BC]
        sete al
        cmp ecx, eax
        jne public_4b07d1
        mov al, byte ptr ss : [esp+0x40]
        test al, al
        mov eax, dword ptr ds : [esi]
        je public_4b07c2
        mov ecx, dword ptr ss : [ebp+0x564]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x38
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        jmp public_4b07c5
        public_4b07c2 : nop
        push 0xFFFFFFFF
        push eax
        public_4b07c5 : nop
        mov ecx, ebp
        push 0x536
        call public_4b1450
        public_4b07d1 : nop
        inc edi
        add esi, 4
        add ebx, 0xC
        cmp edi, 0xA
        jl public_4b0770
        mov ebx, dword ptr ss : [esp+0x14]
        jmp public_4b08cc
        public_4b07e6 : nop
        mov ecx, dword ptr ds : [ebx-0x164]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x3B
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0
        fild qword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [ebx]
        fnstsw ax
        test ah, 0x44
        jnp public_4b08cc
        mov al, byte ptr ss : [esp+0x40]
        fld dword ptr ds : [ebx]
        test al, al
        je public_4b0856
        mov esi, dword ptr ds : [ebx-0x164]
        mov edi, dword ptr ds : [esi]
        push 0
        call public_5b7ec0
        push eax
        push 0x38
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        fld dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        mov ecx, ebp
        call public_4b1450
        jmp public_4b08cc
        public_4b0856 : nop
        push 0xFFFFFFFF
        call public_5b7ec0
        push eax
        push esi
        mov ecx, ebp
        call public_4b1450
        jmp public_4b08cc
        public_4b0868 : nop
        mov edx, dword ptr ds : [ebx-0x19C]
        test byte ptr ds : [edx+0x6C], 2
        je public_4b08cc
        fld dword ptr ds : [ebx]
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 1
        jne public_4b088a
        mov eax, 1
        jmp public_4b088c
        public_4b088a : nop
        xor eax, eax
        public_4b088c : nop
        mov ecx, dword ptr ds : [ebx-0x1D4]
        xor edx, edx
        test eax, eax
        mov eax, dword ptr ds : [ecx]
        sete dl
        push 0
        mov esi, edx
        push esi
        push 0x30
        call dword ptr ds : [eax+0xA8]
        mov al, byte ptr ss : [esp+0x40]
        test al, al
        je public_4b08bd
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push esi
        push edx
        jmp public_4b08c5
        public_4b08bd : nop
        mov eax, dword ptr ss : [esp+0x24]
        push 0xFFFFFFFF
        push esi
        push eax
        public_4b08c5 : nop
        mov ecx, ebp
        call public_4b1d20
        public_4b08cc : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x10]
        add ecx, 0x18
        inc edi
        add ebx, 4
        cmp ecx, 0x150
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ecx
        jl public_4b06e0
        push 0x1E
        call public_5646e0
        push 0x1F
        call public_5646e0
        push 0x20
        call public_5646e0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        public_4b090e : nop
        pop ebp
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x4b06a0)
    }
}

#undef public_4b06e0
#undef public_4b06f3
#undef public_4b0700
#undef public_4b070b
#undef public_4b0718
#undef public_4b0760
#undef public_4b0770
#undef public_4b07c2
#undef public_4b07c5
#undef public_4b07d1
#undef public_4b07e6
#undef public_4b0856
#undef public_4b0868
#undef public_4b088a
#undef public_4b088c
#undef public_4b08bd
#undef public_4b08c5
#undef public_4b08cc
#undef public_4b090e
