#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3d550);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ea30);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f120);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f180);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fc80);

#define public_6f3d570 _public_6f3d570
#define public_6f3d583 _public_6f3d583
#define public_6f3d586 _public_6f3d586
#define public_6f3d58a _public_6f3d58a
#define public_6f3d5e9 _public_6f3d5e9
#define public_6f3d601 _public_6f3d601
#define public_6f3d60b _public_6f3d60b
#define public_6f3d60f _public_6f3d60f
#define public_6f3d620 _public_6f3d620
#define public_6f3d65b _public_6f3d65b
#define public_6f3d66a _public_6f3d66a
#define public_6f3d68b _public_6f3d68b
#define public_6f3d6ac _public_6f3d6ac
#define public_6f3d6ba _public_6f3d6ba
#define public_6f3d6d9 _public_6f3d6d9
#define public_6f3d6e5 _public_6f3d6e5
#define public_6f3d701 _public_6f3d701
#define public_6f3d71c _public_6f3d71c
#define public_6f3d723 _public_6f3d723
#define public_6f3d746 _public_6f3d746

PROC_DECLARE(0x6f3d550, internal_6f3d550, public_6f3d550);
extern "C" NAKED register_t __cdecl internal_6f3d550()
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
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6f3d58a
        lea esp, ss:[esp]
        public_6f3d570 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f3d583
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3d586
        public_6f3d583 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3d586 : nop
        cmp ebp, edx
        jne public_6f3d570
        public_6f3d58a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3d701
        push 0
        push esi
        mov ecx, edi
        call public_6f3f180
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f3fc80
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3d5e9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3d5e9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3d5e9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3d60f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3d60f
        public_6f3d5e9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3d601
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3d60b
        public_6f3d601 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3d60b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3d60b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3d60f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3d6e5
        lea ecx, ds:[ecx]
        public_6f3d620 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        jne public_6f3d6e5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3d68b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6f3d65b
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3d6d9
        public_6f3d65b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3d66a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f3f0d0
        public_6f3d66a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x10], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f3f120
        jmp public_6f3d6d9
        public_6f3d68b : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6f3d6ac
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3d6d9
        public_6f3d6ac : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3d6ba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f3f120
        public_6f3d6ba : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f3f0d0
        public_6f3d6d9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3d620
        public_6f3d6e5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3d701 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3d71c
        cmp esi, dword ptr ds : [ecx]
        je public_6f3d723
        lea ecx, ss:[esp+0x10]
        call public_6f3f1a0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3d71c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f3d746
        public_6f3d723 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f3ea30
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6f3d746 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3d550)
    }
}

#undef public_6f3d570
#undef public_6f3d583
#undef public_6f3d586
#undef public_6f3d58a
#undef public_6f3d5e9
#undef public_6f3d601
#undef public_6f3d60b
#undef public_6f3d60f
#undef public_6f3d620
#undef public_6f3d65b
#undef public_6f3d66a
#undef public_6f3d68b
#undef public_6f3d6ac
#undef public_6f3d6ba
#undef public_6f3d6d9
#undef public_6f3d6e5
#undef public_6f3d701
#undef public_6f3d71c
#undef public_6f3d723
#undef public_6f3d746
