#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432740);
CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_432764 _public_432764
#define public_432782 _public_432782
#define public_43278d _public_43278d
#define public_432796 _public_432796
#define public_4327a1 _public_4327a1
#define public_4327bd _public_4327bd
#define public_4327d4 _public_4327d4
#define public_4327e1 _public_4327e1
#define public_4327ec _public_4327ec
#define public_4327ef _public_4327ef
#define public_432807 _public_432807
#define public_432812 _public_432812
#define public_432815 _public_432815
#define public_43282a _public_43282a
#define public_432835 _public_432835
#define public_432840 _public_432840
#define public_432843 _public_432843
#define public_432857 _public_432857
#define public_432863 _public_432863
#define public_43286f _public_43286f
#define public_432872 _public_432872
#define public_432890 _public_432890
#define public_4328cf _public_4328cf
#define public_4328e2 _public_4328e2
#define public_4328ed _public_4328ed
#define public_4328f0 _public_4328f0
#define public_4328fb _public_4328fb
#define public_43290e _public_43290e
#define public_432935 _public_432935
#define public_43294f _public_43294f
#define public_432975 _public_432975
#define public_432988 _public_432988
#define public_432995 _public_432995
#define public_432997 _public_432997
#define public_4329a2 _public_4329a2
#define public_4329b9 _public_4329b9
#define public_4329d1 _public_4329d1
#define public_4329de _public_4329de
#define public_4329e0 _public_4329e0
#define public_4329ec _public_4329ec
#define public_432a16 _public_432a16
#define public_432a2e _public_432a2e
#define public_432a3e _public_432a3e
#define public_432a48 _public_432a48
#define public_432a6b _public_432a6b
#define public_432a7e _public_432a7e
#define public_432a89 _public_432a89
#define public_432a8c _public_432a8c
#define public_432a96 _public_432a96
#define public_432abf _public_432abf
#define public_432ad2 _public_432ad2
#define public_432adf _public_432adf
#define public_432ae1 _public_432ae1
#define public_432ae4 _public_432ae4
#define public_432ae7 _public_432ae7
#define public_432aee _public_432aee

PROC_DECLARE(0x432740, internal_432740, public_432740);
extern "C" NAKED register_t __cdecl internal_432740()
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
        call public_5948b0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_432782
        mov eax, dword ptr ds : [esi+8]
        public_432764 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_432807
        mov dword ptr ds : [ecx+4], eax
        jmp public_432815
        public_432782 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_43278d
        mov eax, edx
        jmp public_432764
        public_43278d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_4327a1
        public_432796 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_432796
        public_4327a1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_432764
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4327bd
        mov dword ptr ds : [eax+4], ecx
        jmp public_4327d4
        public_4327bd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_4327d4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_4327e1
        mov dword ptr ds : [edx+4], ecx
        jmp public_4327ef
        public_4327e1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_4327ec
        mov dword ptr ds : [edx], ecx
        jmp public_4327ef
        public_4327ec : nop
        mov dword ptr ds : [edx+8], ecx
        public_4327ef : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_432872
        public_432807 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_432812
        mov dword ptr ds : [ecx], eax
        jmp public_432815
        public_432812 : nop
        mov dword ptr ds : [ecx+8], eax
        public_432815 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_432843
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_43282a
        mov edx, dword ptr ds : [esi+4]
        jmp public_432840
        public_43282a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_432840
        public_432835 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_432835
        public_432840 : nop
        mov dword ptr ss : [ebp], edx
        public_432843 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_432872
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_432857
        mov edx, dword ptr ds : [esi+4]
        jmp public_43286f
        public_432857 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_43286f
        public_432863 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_432863
        public_43286f : nop
        mov dword ptr ss : [ebp+8], edx
        public_432872 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_432aee
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_432ae7
        nop 
        public_432890 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_432ae7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_43294f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_4328fb
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4328cf
        mov dword ptr ds : [esi+4], ecx
        public_4328cf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4328e2
        mov dword ptr ds : [esi+4], edx
        jmp public_4328f0
        public_4328e2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4328ed
        mov dword ptr ds : [esi], edx
        jmp public_4328f0
        public_4328ed : nop
        mov dword ptr ds : [esi+8], edx
        public_4328f0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4328fb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_43290e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_4329b9
        public_43290e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_4329ec
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_432935
        mov dword ptr ds : [esi+4], ecx
        public_432935 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4329d1
        mov dword ptr ds : [esi+4], edx
        jmp public_4329e0
        public_43294f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_4329a2
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_432975
        mov dword ptr ds : [esi+4], ecx
        public_432975 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_432988
        mov dword ptr ds : [esi+4], edx
        jmp public_432997
        public_432988 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_432995
        mov dword ptr ds : [esi+8], edx
        jmp public_432997
        public_432995 : nop
        mov dword ptr ds : [esi], edx
        public_432997 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_4329a2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_432a48
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_432a48
        public_4329b9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_432890
        jmp public_432ae7
        public_4329d1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4329de
        mov dword ptr ds : [esi+8], edx
        jmp public_4329e0
        public_4329de : nop
        mov dword ptr ds : [esi], edx
        public_4329e0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4329ec : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_432a16
        mov dword ptr ds : [esi+4], ecx
        public_432a16 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_432a2e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_432ae4
        public_432a2e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_432a3e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_432ae4
        public_432a3e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_432ae4
        public_432a48 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_432a96
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_432a6b
        mov dword ptr ds : [esi+4], ecx
        public_432a6b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_432a7e
        mov dword ptr ds : [esi+4], edx
        jmp public_432a8c
        public_432a7e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_432a89
        mov dword ptr ds : [esi], edx
        jmp public_432a8c
        public_432a89 : nop
        mov dword ptr ds : [esi+8], edx
        public_432a8c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_432a96 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_432abf
        mov dword ptr ds : [esi+4], ecx
        public_432abf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_432ad2
        mov dword ptr ds : [esi+4], edx
        jmp public_432ae1
        public_432ad2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_432adf
        mov dword ptr ds : [esi+8], edx
        jmp public_432ae1
        public_432adf : nop
        mov dword ptr ds : [esi], edx
        public_432ae1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_432ae4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_432ae7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_432aee : nop
        lea ecx, ds:[esi+0xC]
        call public_455e90
        push esi
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x432740)
    }
}

#undef public_432764
#undef public_432782
#undef public_43278d
#undef public_432796
#undef public_4327a1
#undef public_4327bd
#undef public_4327d4
#undef public_4327e1
#undef public_4327ec
#undef public_4327ef
#undef public_432807
#undef public_432812
#undef public_432815
#undef public_43282a
#undef public_432835
#undef public_432840
#undef public_432843
#undef public_432857
#undef public_432863
#undef public_43286f
#undef public_432872
#undef public_432890
#undef public_4328cf
#undef public_4328e2
#undef public_4328ed
#undef public_4328f0
#undef public_4328fb
#undef public_43290e
#undef public_432935
#undef public_43294f
#undef public_432975
#undef public_432988
#undef public_432995
#undef public_432997
#undef public_4329a2
#undef public_4329b9
#undef public_4329d1
#undef public_4329de
#undef public_4329e0
#undef public_4329ec
#undef public_432a16
#undef public_432a2e
#undef public_432a3e
#undef public_432a48
#undef public_432a6b
#undef public_432a7e
#undef public_432a89
#undef public_432a8c
#undef public_432a96
#undef public_432abf
#undef public_432ad2
#undef public_432adf
#undef public_432ae1
#undef public_432ae4
#undef public_432ae7
#undef public_432aee
