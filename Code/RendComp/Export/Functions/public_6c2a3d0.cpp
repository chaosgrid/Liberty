#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a530);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d720);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f7d0);

#define public_6c2a3f3 _public_6c2a3f3
#define public_6c2a413 _public_6c2a413
#define public_6c2a417 _public_6c2a417
#define public_6c2a41c _public_6c2a41c
#define public_6c2a4f6 _public_6c2a4f6
#define public_6c2a509 _public_6c2a509
#define public_6c2a51c _public_6c2a51c

PROC_DECLARE(0x6c2a3d0, internal_6c2a3d0, public_6c2a3d0);
extern "C" NAKED register_t __cdecl internal_6c2a3d0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp eax, 0x10
        jne public_6c2a509
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6c2a3f3 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6c2a417
        cmp cl, bl
        je public_6c2a413
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6c2a417
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6c2a3f3
        public_6c2a413 : nop
        xor eax, eax
        jmp public_6c2a41c
        public_6c2a417 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c2a41c : nop
        cmp eax, ebx
        jne public_6c2a509
        push 1
        push 0x34
        call dword ptr ds : [public_6c36044]
        mov edi, eax
        add esp, 8
        cmp edi, ebx
        je public_6c2a4f6
        mov al, byte ptr ss : [esp+0x20]
        mov dl, byte ptr ss : [esp+0x20]
        lea ecx, ds:[edi+0xC]
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6c2a8f0
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ds : [edi+0x28], bl
        push ebp
        mov ecx, edi
        mov dword ptr ds : [edi], offset public_6c362c0
        mov dword ptr ds : [edi+0x30], 1
        call public_6c2d720
        mov ebp, eax
        cmp ebp, ebx
        je public_6c2a51c
        mov edx, dword ptr ds : [edi+0x10]
        lea esi, ds:[edi+0xC]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6c2a5e0
        mov ecx, esi
        call public_6c2f7d0
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6c2a5e0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6c2a530
        mov ecx, dword ptr ds : [esi+4]
        push 1
        push ecx
        mov ecx, esi
        call public_6c2a5f0
        mov edx, dword ptr ds : [esi+8]
        push 1
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6c2a5f0
        push edi
        mov dword ptr ds : [esi+8], ebx
        call dword ptr ds : [public_6c3603c]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6c2a4f6 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        pop ecx
        ret 0xC
        public_6c2a509 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        pop ecx
        ret 0xC
        public_6c2a51c : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6c2a3d0)
    }
}

#undef public_6c2a3f3
#undef public_6c2a413
#undef public_6c2a417
#undef public_6c2a41c
#undef public_6c2a4f6
#undef public_6c2a509
#undef public_6c2a51c
