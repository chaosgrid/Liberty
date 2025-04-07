#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba750);
CLANG_FORWARD_PROC_SYMBOL(public_62baeb0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62ba774 _public_62ba774
#define public_62ba792 _public_62ba792
#define public_62ba79d _public_62ba79d
#define public_62ba7a6 _public_62ba7a6
#define public_62ba7b1 _public_62ba7b1
#define public_62ba7cd _public_62ba7cd
#define public_62ba7e4 _public_62ba7e4
#define public_62ba7f1 _public_62ba7f1
#define public_62ba7fc _public_62ba7fc
#define public_62ba7ff _public_62ba7ff
#define public_62ba817 _public_62ba817
#define public_62ba822 _public_62ba822
#define public_62ba825 _public_62ba825
#define public_62ba83a _public_62ba83a
#define public_62ba845 _public_62ba845
#define public_62ba850 _public_62ba850
#define public_62ba853 _public_62ba853
#define public_62ba867 _public_62ba867
#define public_62ba873 _public_62ba873
#define public_62ba87f _public_62ba87f
#define public_62ba882 _public_62ba882
#define public_62ba8a0 _public_62ba8a0
#define public_62ba8df _public_62ba8df
#define public_62ba8f2 _public_62ba8f2
#define public_62ba8fd _public_62ba8fd
#define public_62ba900 _public_62ba900
#define public_62ba90b _public_62ba90b
#define public_62ba91e _public_62ba91e
#define public_62ba945 _public_62ba945
#define public_62ba95f _public_62ba95f
#define public_62ba985 _public_62ba985
#define public_62ba998 _public_62ba998
#define public_62ba9a5 _public_62ba9a5
#define public_62ba9a7 _public_62ba9a7
#define public_62ba9b2 _public_62ba9b2
#define public_62ba9c9 _public_62ba9c9
#define public_62ba9e1 _public_62ba9e1
#define public_62ba9ee _public_62ba9ee
#define public_62ba9f0 _public_62ba9f0
#define public_62ba9fc _public_62ba9fc
#define public_62baa26 _public_62baa26
#define public_62baa3e _public_62baa3e
#define public_62baa4e _public_62baa4e
#define public_62baa58 _public_62baa58
#define public_62baa7b _public_62baa7b
#define public_62baa8e _public_62baa8e
#define public_62baa99 _public_62baa99
#define public_62baa9c _public_62baa9c
#define public_62baaa6 _public_62baaa6
#define public_62baacf _public_62baacf
#define public_62baae2 _public_62baae2
#define public_62baaef _public_62baaef
#define public_62baaf1 _public_62baaf1
#define public_62baaf4 _public_62baaf4
#define public_62baaf7 _public_62baaf7
#define public_62baafe _public_62baafe

PROC_DECLARE(0x62ba750, internal_62ba750, public_62ba750);
extern "C" NAKED register_t __cdecl internal_62ba750()
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
        call public_62baeb0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_62ba792
        mov eax, dword ptr ds : [esi+8]
        public_62ba774 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_62ba817
        mov dword ptr ds : [ecx+4], eax
        jmp public_62ba825
        public_62ba792 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_62ba79d
        mov eax, edx
        jmp public_62ba774
        public_62ba79d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        jne public_62ba7b1
        public_62ba7a6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        je public_62ba7a6
        public_62ba7b1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62ba774
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba7cd
        mov dword ptr ds : [eax+4], ecx
        jmp public_62ba7e4
        public_62ba7cd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_62ba7e4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_62ba7f1
        mov dword ptr ds : [edx+4], ecx
        jmp public_62ba7ff
        public_62ba7f1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_62ba7fc
        mov dword ptr ds : [edx], ecx
        jmp public_62ba7ff
        public_62ba7fc : nop
        mov dword ptr ds : [edx+8], ecx
        public_62ba7ff : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x4C]
        mov dl, byte ptr ds : [ecx+0x4C]
        mov byte ptr ds : [ecx+0x4C], bl
        mov byte ptr ds : [esi+0x4C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62ba882
        public_62ba817 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_62ba822
        mov dword ptr ds : [ecx], eax
        jmp public_62ba825
        public_62ba822 : nop
        mov dword ptr ds : [ecx+8], eax
        public_62ba825 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_62ba853
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62ba83a
        mov edx, dword ptr ds : [esi+4]
        jmp public_62ba850
        public_62ba83a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        mov edx, eax
        jne public_62ba850
        public_62ba845 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        je public_62ba845
        public_62ba850 : nop
        mov dword ptr ss : [ebp], edx
        public_62ba853 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_62ba882
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62ba867
        mov edx, dword ptr ds : [esi+4]
        jmp public_62ba87f
        public_62ba867 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        mov edx, eax
        jne public_62ba87f
        public_62ba873 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        je public_62ba873
        public_62ba87f : nop
        mov dword ptr ss : [ebp+8], edx
        public_62ba882 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x4C]
        mov bl, 1
        cmp cl, bl
        jne public_62baafe
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_62baaf7
        nop 
        public_62ba8a0 : nop
        cmp byte ptr ds : [eax+0x4C], bl
        jne public_62baaf7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62ba95f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_62ba90b
        mov byte ptr ds : [ecx+0x4C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x4C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba8df
        mov dword ptr ds : [esi+4], ecx
        public_62ba8df : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba8f2
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba900
        public_62ba8f2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62ba8fd
        mov dword ptr ds : [esi], edx
        jmp public_62ba900
        public_62ba8fd : nop
        mov dword ptr ds : [esi+8], edx
        public_62ba900 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62ba90b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_62ba91e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x4C], bl
        je public_62ba9c9
        public_62ba91e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_62ba9fc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x4C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x4C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba945
        mov dword ptr ds : [esi+4], ecx
        public_62ba945 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba9e1
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba9f0
        public_62ba95f : nop
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_62ba9b2
        mov byte ptr ds : [ecx+0x4C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba985
        mov dword ptr ds : [esi+4], ecx
        public_62ba985 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba998
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba9a7
        public_62ba998 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba9a5
        mov dword ptr ds : [esi+8], edx
        jmp public_62ba9a7
        public_62ba9a5 : nop
        mov dword ptr ds : [esi], edx
        public_62ba9a7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_62ba9b2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_62baa58
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_62baa58
        public_62ba9c9 : nop
        mov byte ptr ds : [ecx+0x4C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62ba8a0
        jmp public_62baaf7
        public_62ba9e1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba9ee
        mov dword ptr ds : [esi+8], edx
        jmp public_62ba9f0
        public_62ba9ee : nop
        mov dword ptr ds : [esi], edx
        public_62ba9f0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62ba9fc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x4C]
        mov byte ptr ds : [ecx+0x4C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x4C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x4C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62baa26
        mov dword ptr ds : [esi+4], ecx
        public_62baa26 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62baa3e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62baaf4
        public_62baa3e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62baa4e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62baaf4
        public_62baa4e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62baaf4
        public_62baa58 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x4C], bl
        jne public_62baaa6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x4C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x4C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62baa7b
        mov dword ptr ds : [esi+4], ecx
        public_62baa7b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62baa8e
        mov dword ptr ds : [esi+4], edx
        jmp public_62baa9c
        public_62baa8e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62baa99
        mov dword ptr ds : [esi], edx
        jmp public_62baa9c
        public_62baa99 : nop
        mov dword ptr ds : [esi+8], edx
        public_62baa9c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_62baaa6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x4C]
        mov byte ptr ds : [ecx+0x4C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x4C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x4C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62baacf
        mov dword ptr ds : [esi+4], ecx
        public_62baacf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62baae2
        mov dword ptr ds : [esi+4], edx
        jmp public_62baaf1
        public_62baae2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62baaef
        mov dword ptr ds : [esi+8], edx
        jmp public_62baaf1
        public_62baaef : nop
        mov dword ptr ds : [esi], edx
        public_62baaf1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62baaf4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62baaf7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x4C], bl
        public_62baafe : nop
        lea ecx, ds:[esi+0xC]
        call public_62bb5a0
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x62ba750)
    }
}

#undef public_62ba774
#undef public_62ba792
#undef public_62ba79d
#undef public_62ba7a6
#undef public_62ba7b1
#undef public_62ba7cd
#undef public_62ba7e4
#undef public_62ba7f1
#undef public_62ba7fc
#undef public_62ba7ff
#undef public_62ba817
#undef public_62ba822
#undef public_62ba825
#undef public_62ba83a
#undef public_62ba845
#undef public_62ba850
#undef public_62ba853
#undef public_62ba867
#undef public_62ba873
#undef public_62ba87f
#undef public_62ba882
#undef public_62ba8a0
#undef public_62ba8df
#undef public_62ba8f2
#undef public_62ba8fd
#undef public_62ba900
#undef public_62ba90b
#undef public_62ba91e
#undef public_62ba945
#undef public_62ba95f
#undef public_62ba985
#undef public_62ba998
#undef public_62ba9a5
#undef public_62ba9a7
#undef public_62ba9b2
#undef public_62ba9c9
#undef public_62ba9e1
#undef public_62ba9ee
#undef public_62ba9f0
#undef public_62ba9fc
#undef public_62baa26
#undef public_62baa3e
#undef public_62baa4e
#undef public_62baa58
#undef public_62baa7b
#undef public_62baa8e
#undef public_62baa99
#undef public_62baa9c
#undef public_62baaa6
#undef public_62baacf
#undef public_62baae2
#undef public_62baaef
#undef public_62baaf1
#undef public_62baaf4
#undef public_62baaf7
#undef public_62baafe
