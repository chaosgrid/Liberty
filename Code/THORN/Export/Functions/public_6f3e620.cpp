#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3e620);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3e644 _public_6f3e644
#define public_6f3e662 _public_6f3e662
#define public_6f3e66d _public_6f3e66d
#define public_6f3e676 _public_6f3e676
#define public_6f3e681 _public_6f3e681
#define public_6f3e69d _public_6f3e69d
#define public_6f3e6b4 _public_6f3e6b4
#define public_6f3e6c1 _public_6f3e6c1
#define public_6f3e6cc _public_6f3e6cc
#define public_6f3e6cf _public_6f3e6cf
#define public_6f3e6e7 _public_6f3e6e7
#define public_6f3e6f2 _public_6f3e6f2
#define public_6f3e6f5 _public_6f3e6f5
#define public_6f3e70a _public_6f3e70a
#define public_6f3e715 _public_6f3e715
#define public_6f3e720 _public_6f3e720
#define public_6f3e723 _public_6f3e723
#define public_6f3e737 _public_6f3e737
#define public_6f3e743 _public_6f3e743
#define public_6f3e74f _public_6f3e74f
#define public_6f3e752 _public_6f3e752
#define public_6f3e770 _public_6f3e770
#define public_6f3e7af _public_6f3e7af
#define public_6f3e7c2 _public_6f3e7c2
#define public_6f3e7cd _public_6f3e7cd
#define public_6f3e7d0 _public_6f3e7d0
#define public_6f3e7db _public_6f3e7db
#define public_6f3e7ee _public_6f3e7ee
#define public_6f3e815 _public_6f3e815
#define public_6f3e82f _public_6f3e82f
#define public_6f3e855 _public_6f3e855
#define public_6f3e868 _public_6f3e868
#define public_6f3e875 _public_6f3e875
#define public_6f3e877 _public_6f3e877
#define public_6f3e882 _public_6f3e882
#define public_6f3e899 _public_6f3e899
#define public_6f3e8b1 _public_6f3e8b1
#define public_6f3e8be _public_6f3e8be
#define public_6f3e8c0 _public_6f3e8c0
#define public_6f3e8cc _public_6f3e8cc
#define public_6f3e8f6 _public_6f3e8f6
#define public_6f3e90e _public_6f3e90e
#define public_6f3e91e _public_6f3e91e
#define public_6f3e928 _public_6f3e928
#define public_6f3e94b _public_6f3e94b
#define public_6f3e95e _public_6f3e95e
#define public_6f3e969 _public_6f3e969
#define public_6f3e96c _public_6f3e96c
#define public_6f3e976 _public_6f3e976
#define public_6f3e99f _public_6f3e99f
#define public_6f3e9b2 _public_6f3e9b2
#define public_6f3e9bf _public_6f3e9bf
#define public_6f3e9c1 _public_6f3e9c1
#define public_6f3e9c4 _public_6f3e9c4
#define public_6f3e9c7 _public_6f3e9c7
#define public_6f3e9ca _public_6f3e9ca

PROC_DECLARE(0x6f3e620, internal_6f3e620, public_6f3e620);
extern "C" NAKED register_t __cdecl internal_6f3e620()
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
        call public_6f3f3f0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f3e662
        mov eax, dword ptr ds : [esi+8]
        public_6f3e644 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f3e6e7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f3e6f5
        public_6f3e662 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f3e66d
        mov eax, edx
        jmp public_6f3e644
        public_6f3e66d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6f3e681
        public_6f3e676 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6f3e676
        public_6f3e681 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f3e644
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3e69d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f3e6b4
        public_6f3e69d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f3e6b4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f3e6c1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3e6cf
        public_6f3e6c1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f3e6cc
        mov dword ptr ds : [edx], ecx
        jmp public_6f3e6cf
        public_6f3e6cc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3e6cf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [ecx+0x10], bl
        mov byte ptr ds : [esi+0x10], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f3e752
        public_6f3e6e7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f3e6f2
        mov dword ptr ds : [ecx], eax
        jmp public_6f3e6f5
        public_6f3e6f2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f3e6f5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f3e723
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3e70a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f3e720
        public_6f3e70a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_6f3e720
        public_6f3e715 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_6f3e715
        public_6f3e720 : nop
        mov dword ptr ss : [ebp], edx
        public_6f3e723 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f3e752
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3e737
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f3e74f
        public_6f3e737 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_6f3e74f
        public_6f3e743 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_6f3e743
        public_6f3e74f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f3e752 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov bl, 1
        cmp dl, bl
        jne public_6f3e9ca
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f3e9c7
        nop 
        public_6f3e770 : nop
        cmp byte ptr ds : [eax+0x10], bl
        jne public_6f3e9c7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3e82f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6f3e7db
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e7af
        mov dword ptr ds : [esi+4], ecx
        public_6f3e7af : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e7c2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e7d0
        public_6f3e7c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3e7cd
        mov dword ptr ds : [esi], edx
        jmp public_6f3e7d0
        public_6f3e7cd : nop
        mov dword ptr ds : [esi+8], edx
        public_6f3e7d0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f3e7db : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6f3e7ee
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        je public_6f3e899
        public_6f3e7ee : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6f3e8cc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e815
        mov dword ptr ds : [esi+4], ecx
        public_6f3e815 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e8b1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e8c0
        public_6f3e82f : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6f3e882
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e855
        mov dword ptr ds : [esi+4], ecx
        public_6f3e855 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e868
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e877
        public_6f3e868 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3e875
        mov dword ptr ds : [esi+8], edx
        jmp public_6f3e877
        public_6f3e875 : nop
        mov dword ptr ds : [esi], edx
        public_6f3e877 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f3e882 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6f3e928
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6f3e928
        public_6f3e899 : nop
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f3e770
        jmp public_6f3e9c7
        public_6f3e8b1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3e8be
        mov dword ptr ds : [esi+8], edx
        jmp public_6f3e8c0
        public_6f3e8be : nop
        mov dword ptr ds : [esi], edx
        public_6f3e8c0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f3e8cc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x10]
        mov byte ptr ds : [ecx+0x10], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x10], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e8f6
        mov dword ptr ds : [esi+4], ecx
        public_6f3e8f6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e90e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f3e9c4
        public_6f3e90e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3e91e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f3e9c4
        public_6f3e91e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f3e9c4
        public_6f3e928 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6f3e976
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e94b
        mov dword ptr ds : [esi+4], ecx
        public_6f3e94b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e95e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e96c
        public_6f3e95e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3e969
        mov dword ptr ds : [esi], edx
        jmp public_6f3e96c
        public_6f3e969 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f3e96c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f3e976 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x10]
        mov byte ptr ds : [ecx+0x10], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x10], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e99f
        mov dword ptr ds : [esi+4], ecx
        public_6f3e99f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e9b2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e9c1
        public_6f3e9b2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3e9bf
        mov dword ptr ds : [esi+8], edx
        jmp public_6f3e9c1
        public_6f3e9bf : nop
        mov dword ptr ds : [esi], edx
        public_6f3e9c1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3e9c4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f3e9c7 : nop
        mov byte ptr ds : [eax+0x10], bl
        public_6f3e9ca : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6f57e26
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3e620)
    }
}

#undef public_6f3e644
#undef public_6f3e662
#undef public_6f3e66d
#undef public_6f3e676
#undef public_6f3e681
#undef public_6f3e69d
#undef public_6f3e6b4
#undef public_6f3e6c1
#undef public_6f3e6cc
#undef public_6f3e6cf
#undef public_6f3e6e7
#undef public_6f3e6f2
#undef public_6f3e6f5
#undef public_6f3e70a
#undef public_6f3e715
#undef public_6f3e720
#undef public_6f3e723
#undef public_6f3e737
#undef public_6f3e743
#undef public_6f3e74f
#undef public_6f3e752
#undef public_6f3e770
#undef public_6f3e7af
#undef public_6f3e7c2
#undef public_6f3e7cd
#undef public_6f3e7d0
#undef public_6f3e7db
#undef public_6f3e7ee
#undef public_6f3e815
#undef public_6f3e82f
#undef public_6f3e855
#undef public_6f3e868
#undef public_6f3e875
#undef public_6f3e877
#undef public_6f3e882
#undef public_6f3e899
#undef public_6f3e8b1
#undef public_6f3e8be
#undef public_6f3e8c0
#undef public_6f3e8cc
#undef public_6f3e8f6
#undef public_6f3e90e
#undef public_6f3e91e
#undef public_6f3e928
#undef public_6f3e94b
#undef public_6f3e95e
#undef public_6f3e969
#undef public_6f3e96c
#undef public_6f3e976
#undef public_6f3e99f
#undef public_6f3e9b2
#undef public_6f3e9bf
#undef public_6f3e9c1
#undef public_6f3e9c4
#undef public_6f3e9c7
#undef public_6f3e9ca
