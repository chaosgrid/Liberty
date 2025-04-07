#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d610);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2df90);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e2c0);

#define public_6f2d628 _public_6f2d628
#define public_6f2d641 _public_6f2d641
#define public_6f2d644 _public_6f2d644
#define public_6f2d64d _public_6f2d64d
#define public_6f2d6b7 _public_6f2d6b7
#define public_6f2d6cf _public_6f2d6cf
#define public_6f2d6d9 _public_6f2d6d9
#define public_6f2d6dd _public_6f2d6dd
#define public_6f2d6f0 _public_6f2d6f0
#define public_6f2d72b _public_6f2d72b
#define public_6f2d73a _public_6f2d73a
#define public_6f2d75b _public_6f2d75b
#define public_6f2d77c _public_6f2d77c
#define public_6f2d78a _public_6f2d78a
#define public_6f2d7a9 _public_6f2d7a9
#define public_6f2d7b5 _public_6f2d7b5
#define public_6f2d7d1 _public_6f2d7d1
#define public_6f2d803 _public_6f2d803
#define public_6f2d80c _public_6f2d80c
#define public_6f2d849 _public_6f2d849

PROC_DECLARE(0x6f2d610, internal_6f2d610, public_6f2d610);
extern "C" NAKED register_t __cdecl internal_6f2d610()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov al, 1
        je public_6f2d64d
        public_6f2d628 : nop
        lea eax, ss:[ebp+0xC]
        push eax
        push ebx
        mov esi, ebp
        call dword ptr ds : [public_6f5a03c]
        add esp, 8
        test al, al
        je public_6f2d641
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f2d644
        public_6f2d641 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f2d644 : nop
        cmp ebp, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        jne public_6f2d628
        public_6f2d64d : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6f2d7d1
        push 0
        push esi
        mov ecx, edi
        call public_6f2df90
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f2e2c0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f2d6b7
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f2d6b7
        lea eax, ds:[esi+0xC]
        push eax
        push ebx
        call dword ptr ds : [public_6f5a03c]
        add esp, 8
        test al, al
        jne public_6f2d6b7
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f2d6dd
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f2d6dd
        public_6f2d6b7 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f2d6cf
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2d6d9
        public_6f2d6cf : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f2d6d9
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f2d6d9 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f2d6dd : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f2d7b5
        nop 
        lea esp, ss:[esp]
        public_6f2d6f0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6f2d7b5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f2d75b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f2d72b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f2d7a9
        public_6f2d72b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f2d73a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f2dee0
        public_6f2d73a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f2df30
        jmp public_6f2d7a9
        public_6f2d75b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f2d77c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f2d7a9
        public_6f2d77c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f2d78a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f2df30
        public_6f2d78a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f2dee0
        public_6f2d7a9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f2d6f0
        public_6f2d7b5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f2d7d1 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_6f2d80c
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx]
        jne public_6f2d803
        push ebx
        push esi
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_6f2dc80
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6f2d803 : nop
        lea ecx, ss:[esp+0x10]
        call public_6f2dfb0
        public_6f2d80c : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0xC]
        push ebx
        push eax
        call dword ptr ds : [public_6f5a03c]
        add esp, 8
        test al, al
        je public_6f2d849
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f2dc80
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f2d849 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f2d610)
    }
}

#undef public_6f2d628
#undef public_6f2d641
#undef public_6f2d644
#undef public_6f2d64d
#undef public_6f2d6b7
#undef public_6f2d6cf
#undef public_6f2d6d9
#undef public_6f2d6dd
#undef public_6f2d6f0
#undef public_6f2d72b
#undef public_6f2d73a
#undef public_6f2d75b
#undef public_6f2d77c
#undef public_6f2d78a
#undef public_6f2d7a9
#undef public_6f2d7b5
#undef public_6f2d7d1
#undef public_6f2d803
#undef public_6f2d80c
#undef public_6f2d849
