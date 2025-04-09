#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b640);
CLANG_FORWARD_PROC_SYMBOL(public_433a00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_41b664 _public_41b664
#define public_41b682 _public_41b682
#define public_41b68d _public_41b68d
#define public_41b696 _public_41b696
#define public_41b6a1 _public_41b6a1
#define public_41b6bd _public_41b6bd
#define public_41b6d4 _public_41b6d4
#define public_41b6e1 _public_41b6e1
#define public_41b6ec _public_41b6ec
#define public_41b6ef _public_41b6ef
#define public_41b707 _public_41b707
#define public_41b712 _public_41b712
#define public_41b715 _public_41b715
#define public_41b72a _public_41b72a
#define public_41b735 _public_41b735
#define public_41b740 _public_41b740
#define public_41b743 _public_41b743
#define public_41b757 _public_41b757
#define public_41b763 _public_41b763
#define public_41b76f _public_41b76f
#define public_41b772 _public_41b772
#define public_41b790 _public_41b790
#define public_41b7cf _public_41b7cf
#define public_41b7e2 _public_41b7e2
#define public_41b7ed _public_41b7ed
#define public_41b7f0 _public_41b7f0
#define public_41b7fb _public_41b7fb
#define public_41b80e _public_41b80e
#define public_41b835 _public_41b835
#define public_41b84f _public_41b84f
#define public_41b875 _public_41b875
#define public_41b888 _public_41b888
#define public_41b895 _public_41b895
#define public_41b897 _public_41b897
#define public_41b8a2 _public_41b8a2
#define public_41b8b9 _public_41b8b9
#define public_41b8d1 _public_41b8d1
#define public_41b8de _public_41b8de
#define public_41b8e0 _public_41b8e0
#define public_41b8ec _public_41b8ec
#define public_41b916 _public_41b916
#define public_41b92e _public_41b92e
#define public_41b93e _public_41b93e
#define public_41b948 _public_41b948
#define public_41b96b _public_41b96b
#define public_41b97e _public_41b97e
#define public_41b989 _public_41b989
#define public_41b98c _public_41b98c
#define public_41b996 _public_41b996
#define public_41b9bf _public_41b9bf
#define public_41b9d2 _public_41b9d2
#define public_41b9df _public_41b9df
#define public_41b9e1 _public_41b9e1
#define public_41b9e4 _public_41b9e4
#define public_41b9e7 _public_41b9e7
#define public_41b9ea _public_41b9ea

PROC_DECLARE(0x41b640, internal_41b640, public_41b640);
extern "C" NAKED register_t __cdecl internal_41b640()
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
        call public_433a00
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_41b682
        mov eax, dword ptr ds : [esi+8]
        public_41b664 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_41b707
        mov dword ptr ds : [ecx+4], eax
        jmp public_41b715
        public_41b682 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_41b68d
        mov eax, edx
        jmp public_41b664
        public_41b68d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_41b6a1
        public_41b696 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_41b696
        public_41b6a1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_41b664
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_41b6bd
        mov dword ptr ds : [eax+4], ecx
        jmp public_41b6d4
        public_41b6bd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_41b6d4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_41b6e1
        mov dword ptr ds : [edx+4], ecx
        jmp public_41b6ef
        public_41b6e1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_41b6ec
        mov dword ptr ds : [edx], ecx
        jmp public_41b6ef
        public_41b6ec : nop
        mov dword ptr ds : [edx+8], ecx
        public_41b6ef : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_41b772
        public_41b707 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_41b712
        mov dword ptr ds : [ecx], eax
        jmp public_41b715
        public_41b712 : nop
        mov dword ptr ds : [ecx+8], eax
        public_41b715 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_41b743
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_41b72a
        mov edx, dword ptr ds : [esi+4]
        jmp public_41b740
        public_41b72a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_41b740
        public_41b735 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_41b735
        public_41b740 : nop
        mov dword ptr ss : [ebp], edx
        public_41b743 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_41b772
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_41b757
        mov edx, dword ptr ds : [esi+4]
        jmp public_41b76f
        public_41b757 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_41b76f
        public_41b763 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_41b763
        public_41b76f : nop
        mov dword ptr ss : [ebp+8], edx
        public_41b772 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x24]
        mov bl, 1
        cmp dl, bl
        jne public_41b9ea
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_41b9e7
        nop 
        public_41b790 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_41b9e7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_41b84f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_41b7fb
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_41b7cf
        mov dword ptr ds : [esi+4], ecx
        public_41b7cf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_41b7e2
        mov dword ptr ds : [esi+4], edx
        jmp public_41b7f0
        public_41b7e2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_41b7ed
        mov dword ptr ds : [esi], edx
        jmp public_41b7f0
        public_41b7ed : nop
        mov dword ptr ds : [esi+8], edx
        public_41b7f0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_41b7fb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_41b80e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_41b8b9
        public_41b80e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_41b8ec
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_41b835
        mov dword ptr ds : [esi+4], ecx
        public_41b835 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_41b8d1
        mov dword ptr ds : [esi+4], edx
        jmp public_41b8e0
        public_41b84f : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_41b8a2
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_41b875
        mov dword ptr ds : [esi+4], ecx
        public_41b875 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_41b888
        mov dword ptr ds : [esi+4], edx
        jmp public_41b897
        public_41b888 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_41b895
        mov dword ptr ds : [esi+8], edx
        jmp public_41b897
        public_41b895 : nop
        mov dword ptr ds : [esi], edx
        public_41b897 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_41b8a2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_41b948
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_41b948
        public_41b8b9 : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_41b790
        jmp public_41b9e7
        public_41b8d1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_41b8de
        mov dword ptr ds : [esi+8], edx
        jmp public_41b8e0
        public_41b8de : nop
        mov dword ptr ds : [esi], edx
        public_41b8e0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_41b8ec : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_41b916
        mov dword ptr ds : [esi+4], ecx
        public_41b916 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_41b92e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_41b9e4
        public_41b92e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_41b93e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_41b9e4
        public_41b93e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_41b9e4
        public_41b948 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_41b996
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_41b96b
        mov dword ptr ds : [esi+4], ecx
        public_41b96b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_41b97e
        mov dword ptr ds : [esi+4], edx
        jmp public_41b98c
        public_41b97e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_41b989
        mov dword ptr ds : [esi], edx
        jmp public_41b98c
        public_41b989 : nop
        mov dword ptr ds : [esi+8], edx
        public_41b98c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_41b996 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_41b9bf
        mov dword ptr ds : [esi+4], ecx
        public_41b9bf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_41b9d2
        mov dword ptr ds : [esi+4], edx
        jmp public_41b9e1
        public_41b9d2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_41b9df
        mov dword ptr ds : [esi+8], edx
        jmp public_41b9e1
        public_41b9df : nop
        mov dword ptr ds : [esi], edx
        public_41b9e1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_41b9e4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_41b9e7 : nop
        mov byte ptr ds : [eax+0x24], bl
        public_41b9ea : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x41b640)
    }
}

#undef public_41b664
#undef public_41b682
#undef public_41b68d
#undef public_41b696
#undef public_41b6a1
#undef public_41b6bd
#undef public_41b6d4
#undef public_41b6e1
#undef public_41b6ec
#undef public_41b6ef
#undef public_41b707
#undef public_41b712
#undef public_41b715
#undef public_41b72a
#undef public_41b735
#undef public_41b740
#undef public_41b743
#undef public_41b757
#undef public_41b763
#undef public_41b76f
#undef public_41b772
#undef public_41b790
#undef public_41b7cf
#undef public_41b7e2
#undef public_41b7ed
#undef public_41b7f0
#undef public_41b7fb
#undef public_41b80e
#undef public_41b835
#undef public_41b84f
#undef public_41b875
#undef public_41b888
#undef public_41b895
#undef public_41b897
#undef public_41b8a2
#undef public_41b8b9
#undef public_41b8d1
#undef public_41b8de
#undef public_41b8e0
#undef public_41b8ec
#undef public_41b916
#undef public_41b92e
#undef public_41b93e
#undef public_41b948
#undef public_41b96b
#undef public_41b97e
#undef public_41b989
#undef public_41b98c
#undef public_41b996
#undef public_41b9bf
#undef public_41b9d2
#undef public_41b9df
#undef public_41b9e1
#undef public_41b9e4
#undef public_41b9e7
#undef public_41b9ea
