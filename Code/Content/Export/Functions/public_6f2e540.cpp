#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24610);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e540);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2e564 _public_6f2e564
#define public_6f2e582 _public_6f2e582
#define public_6f2e58d _public_6f2e58d
#define public_6f2e5a0 _public_6f2e5a0
#define public_6f2e5ae _public_6f2e5ae
#define public_6f2e5ca _public_6f2e5ca
#define public_6f2e5e1 _public_6f2e5e1
#define public_6f2e5ee _public_6f2e5ee
#define public_6f2e5f9 _public_6f2e5f9
#define public_6f2e5fc _public_6f2e5fc
#define public_6f2e620 _public_6f2e620
#define public_6f2e62b _public_6f2e62b
#define public_6f2e62e _public_6f2e62e
#define public_6f2e643 _public_6f2e643
#define public_6f2e651 _public_6f2e651
#define public_6f2e65f _public_6f2e65f
#define public_6f2e662 _public_6f2e662
#define public_6f2e676 _public_6f2e676
#define public_6f2e685 _public_6f2e685
#define public_6f2e694 _public_6f2e694
#define public_6f2e697 _public_6f2e697
#define public_6f2e6b7 _public_6f2e6b7
#define public_6f2e702 _public_6f2e702
#define public_6f2e715 _public_6f2e715
#define public_6f2e720 _public_6f2e720
#define public_6f2e723 _public_6f2e723
#define public_6f2e72e _public_6f2e72e
#define public_6f2e747 _public_6f2e747
#define public_6f2e777 _public_6f2e777
#define public_6f2e791 _public_6f2e791
#define public_6f2e7c0 _public_6f2e7c0
#define public_6f2e7d3 _public_6f2e7d3
#define public_6f2e7e0 _public_6f2e7e0
#define public_6f2e7e2 _public_6f2e7e2
#define public_6f2e7ed _public_6f2e7ed
#define public_6f2e80a _public_6f2e80a
#define public_6f2e825 _public_6f2e825
#define public_6f2e832 _public_6f2e832
#define public_6f2e834 _public_6f2e834
#define public_6f2e840 _public_6f2e840
#define public_6f2e876 _public_6f2e876
#define public_6f2e88e _public_6f2e88e
#define public_6f2e89e _public_6f2e89e
#define public_6f2e8a8 _public_6f2e8a8
#define public_6f2e8d4 _public_6f2e8d4
#define public_6f2e8e7 _public_6f2e8e7
#define public_6f2e8f2 _public_6f2e8f2
#define public_6f2e8f5 _public_6f2e8f5
#define public_6f2e8ff _public_6f2e8ff
#define public_6f2e934 _public_6f2e934
#define public_6f2e947 _public_6f2e947
#define public_6f2e954 _public_6f2e954
#define public_6f2e956 _public_6f2e956
#define public_6f2e959 _public_6f2e959
#define public_6f2e95c _public_6f2e95c
#define public_6f2e966 _public_6f2e966

PROC_DECLARE(0x6f2e540, internal_6f2e540, public_6f2e540);
extern "C" NAKED register_t __cdecl internal_6f2e540()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f24610
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f2e582
        mov eax, dword ptr ds : [esi+8]
        public_6f2e564 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f2e620
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f2e62e
        public_6f2e582 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f2e58d
        mov eax, edx
        jmp public_6f2e564
        public_6f2e58d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        jne public_6f2e5ae
        lea esp, ss:[esp]
        public_6f2e5a0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        je public_6f2e5a0
        public_6f2e5ae : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f2e564
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2e5ca
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f2e5e1
        public_6f2e5ca : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f2e5e1 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f2e5ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2e5fc
        public_6f2e5ee : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f2e5f9
        mov dword ptr ds : [edx], ecx
        jmp public_6f2e5fc
        public_6f2e5f9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2e5fc : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x134]
        mov dl, byte ptr ds : [ecx+0x134]
        mov byte ptr ds : [ecx+0x134], bl
        mov byte ptr ds : [esi+0x134], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f2e697
        public_6f2e620 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f2e62b
        mov dword ptr ds : [ecx], eax
        jmp public_6f2e62e
        public_6f2e62b : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f2e62e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f2e662
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2e643
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f2e65f
        public_6f2e643 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x135]
        test bl, bl
        mov edx, eax
        jne public_6f2e65f
        public_6f2e651 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x135]
        test bl, bl
        je public_6f2e651
        public_6f2e65f : nop
        mov dword ptr ss : [ebp], edx
        public_6f2e662 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f2e697
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2e676
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f2e694
        public_6f2e676 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x135]
        test bl, bl
        mov edx, eax
        jne public_6f2e694
        public_6f2e685 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x135]
        test bl, bl
        je public_6f2e685
        public_6f2e694 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f2e697 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x134]
        mov bl, 1
        cmp cl, bl
        jne public_6f2e966
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f2e95c
        public_6f2e6b7 : nop
        cmp byte ptr ds : [eax+0x134], bl
        jne public_6f2e95c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f2e791
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x134]
        test dl, dl
        jne public_6f2e72e
        mov byte ptr ds : [ecx+0x134], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x134], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2e702
        mov dword ptr ds : [esi+4], ecx
        public_6f2e702 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2e715
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2e723
        public_6f2e715 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2e720
        mov dword ptr ds : [esi], edx
        jmp public_6f2e723
        public_6f2e720 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2e723 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f2e72e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x134], bl
        jne public_6f2e747
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x134], bl
        je public_6f2e80a
        public_6f2e747 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x134], bl
        jne public_6f2e840
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x134], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x134], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2e777
        mov dword ptr ds : [esi+4], ecx
        public_6f2e777 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2e825
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2e834
        public_6f2e791 : nop
        mov dl, byte ptr ds : [ecx+0x134]
        test dl, dl
        jne public_6f2e7ed
        mov byte ptr ds : [ecx+0x134], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x134], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2e7c0
        mov dword ptr ds : [esi+4], ecx
        public_6f2e7c0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2e7d3
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2e7e2
        public_6f2e7d3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2e7e0
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2e7e2
        public_6f2e7e0 : nop
        mov dword ptr ds : [esi], edx
        public_6f2e7e2 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f2e7ed : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x134], bl
        jne public_6f2e8a8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x134], bl
        jne public_6f2e8a8
        public_6f2e80a : nop
        mov byte ptr ds : [ecx+0x134], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f2e6b7
        jmp public_6f2e95c
        public_6f2e825 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2e832
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2e834
        public_6f2e832 : nop
        mov dword ptr ds : [esi], edx
        public_6f2e834 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f2e840 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x134]
        mov byte ptr ds : [ecx+0x134], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x134], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x134], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2e876
        mov dword ptr ds : [esi+4], ecx
        public_6f2e876 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2e88e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2e959
        public_6f2e88e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2e89e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2e959
        public_6f2e89e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2e959
        public_6f2e8a8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x134], bl
        jne public_6f2e8ff
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x134], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x134], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2e8d4
        mov dword ptr ds : [esi+4], ecx
        public_6f2e8d4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2e8e7
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2e8f5
        public_6f2e8e7 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2e8f2
        mov dword ptr ds : [esi], edx
        jmp public_6f2e8f5
        public_6f2e8f2 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2e8f5 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f2e8ff : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x134]
        mov byte ptr ds : [ecx+0x134], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x134], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x134], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2e934
        mov dword ptr ds : [esi+4], ecx
        public_6f2e934 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2e947
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2e956
        public_6f2e947 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2e954
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2e956
        public_6f2e954 : nop
        mov dword ptr ds : [esi], edx
        public_6f2e956 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2e959 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f2e95c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x134], bl
        public_6f2e966 : nop
        lea ecx, ds:[esi+0xC]
        call public_6f2f5c0
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f2e540)
    }
}

#undef public_6f2e564
#undef public_6f2e582
#undef public_6f2e58d
#undef public_6f2e5a0
#undef public_6f2e5ae
#undef public_6f2e5ca
#undef public_6f2e5e1
#undef public_6f2e5ee
#undef public_6f2e5f9
#undef public_6f2e5fc
#undef public_6f2e620
#undef public_6f2e62b
#undef public_6f2e62e
#undef public_6f2e643
#undef public_6f2e651
#undef public_6f2e65f
#undef public_6f2e662
#undef public_6f2e676
#undef public_6f2e685
#undef public_6f2e694
#undef public_6f2e697
#undef public_6f2e6b7
#undef public_6f2e702
#undef public_6f2e715
#undef public_6f2e720
#undef public_6f2e723
#undef public_6f2e72e
#undef public_6f2e747
#undef public_6f2e777
#undef public_6f2e791
#undef public_6f2e7c0
#undef public_6f2e7d3
#undef public_6f2e7e0
#undef public_6f2e7e2
#undef public_6f2e7ed
#undef public_6f2e80a
#undef public_6f2e825
#undef public_6f2e832
#undef public_6f2e834
#undef public_6f2e840
#undef public_6f2e876
#undef public_6f2e88e
#undef public_6f2e89e
#undef public_6f2e8a8
#undef public_6f2e8d4
#undef public_6f2e8e7
#undef public_6f2e8f2
#undef public_6f2e8f5
#undef public_6f2e8ff
#undef public_6f2e934
#undef public_6f2e947
#undef public_6f2e954
#undef public_6f2e956
#undef public_6f2e959
#undef public_6f2e95c
#undef public_6f2e966
