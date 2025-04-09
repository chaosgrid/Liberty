#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44c730);
CLANG_FORWARD_PROC_SYMBOL(public_44cd90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_44c754 _public_44c754
#define public_44c772 _public_44c772
#define public_44c77d _public_44c77d
#define public_44c786 _public_44c786
#define public_44c791 _public_44c791
#define public_44c7ad _public_44c7ad
#define public_44c7c4 _public_44c7c4
#define public_44c7d1 _public_44c7d1
#define public_44c7dc _public_44c7dc
#define public_44c7df _public_44c7df
#define public_44c7f7 _public_44c7f7
#define public_44c802 _public_44c802
#define public_44c805 _public_44c805
#define public_44c81a _public_44c81a
#define public_44c825 _public_44c825
#define public_44c830 _public_44c830
#define public_44c833 _public_44c833
#define public_44c847 _public_44c847
#define public_44c853 _public_44c853
#define public_44c85f _public_44c85f
#define public_44c862 _public_44c862
#define public_44c880 _public_44c880
#define public_44c8bf _public_44c8bf
#define public_44c8d2 _public_44c8d2
#define public_44c8dd _public_44c8dd
#define public_44c8e0 _public_44c8e0
#define public_44c8eb _public_44c8eb
#define public_44c8fe _public_44c8fe
#define public_44c925 _public_44c925
#define public_44c93f _public_44c93f
#define public_44c965 _public_44c965
#define public_44c978 _public_44c978
#define public_44c985 _public_44c985
#define public_44c987 _public_44c987
#define public_44c992 _public_44c992
#define public_44c9a9 _public_44c9a9
#define public_44c9c1 _public_44c9c1
#define public_44c9ce _public_44c9ce
#define public_44c9d0 _public_44c9d0
#define public_44c9dc _public_44c9dc
#define public_44ca06 _public_44ca06
#define public_44ca1e _public_44ca1e
#define public_44ca2e _public_44ca2e
#define public_44ca38 _public_44ca38
#define public_44ca5b _public_44ca5b
#define public_44ca6e _public_44ca6e
#define public_44ca79 _public_44ca79
#define public_44ca7c _public_44ca7c
#define public_44ca86 _public_44ca86
#define public_44caaf _public_44caaf
#define public_44cac2 _public_44cac2
#define public_44cacf _public_44cacf
#define public_44cad1 _public_44cad1
#define public_44cad4 _public_44cad4
#define public_44cad7 _public_44cad7
#define public_44cada _public_44cada

PROC_DECLARE(0x44c730, internal_44c730, public_44c730);
extern "C" NAKED register_t __cdecl internal_44c730()
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
        call public_44cd90
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_44c772
        mov eax, dword ptr ds : [esi+8]
        public_44c754 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_44c7f7
        mov dword ptr ds : [ecx+4], eax
        jmp public_44c805
        public_44c772 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_44c77d
        mov eax, edx
        jmp public_44c754
        public_44c77d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xE]
        test bl, bl
        jne public_44c791
        public_44c786 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xE]
        test bl, bl
        je public_44c786
        public_44c791 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_44c754
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_44c7ad
        mov dword ptr ds : [eax+4], ecx
        jmp public_44c7c4
        public_44c7ad : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_44c7c4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_44c7d1
        mov dword ptr ds : [edx+4], ecx
        jmp public_44c7df
        public_44c7d1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_44c7dc
        mov dword ptr ds : [edx], ecx
        jmp public_44c7df
        public_44c7dc : nop
        mov dword ptr ds : [edx+8], ecx
        public_44c7df : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0xD]
        mov dl, byte ptr ds : [ecx+0xD]
        mov byte ptr ds : [ecx+0xD], bl
        mov byte ptr ds : [esi+0xD], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_44c862
        public_44c7f7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_44c802
        mov dword ptr ds : [ecx], eax
        jmp public_44c805
        public_44c802 : nop
        mov dword ptr ds : [ecx+8], eax
        public_44c805 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_44c833
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_44c81a
        mov edx, dword ptr ds : [esi+4]
        jmp public_44c830
        public_44c81a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0xE]
        test bl, bl
        mov edx, eax
        jne public_44c830
        public_44c825 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xE]
        test bl, bl
        je public_44c825
        public_44c830 : nop
        mov dword ptr ss : [ebp], edx
        public_44c833 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_44c862
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_44c847
        mov edx, dword ptr ds : [esi+4]
        jmp public_44c85f
        public_44c847 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0xE]
        test bl, bl
        mov edx, eax
        jne public_44c85f
        public_44c853 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0xE]
        test bl, bl
        je public_44c853
        public_44c85f : nop
        mov dword ptr ss : [ebp+8], edx
        public_44c862 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0xD]
        mov bl, 1
        cmp dl, bl
        jne public_44cada
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_44cad7
        nop 
        public_44c880 : nop
        cmp byte ptr ds : [eax+0xD], bl
        jne public_44cad7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_44c93f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xD]
        test dl, dl
        jne public_44c8eb
        mov byte ptr ds : [ecx+0xD], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xD], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_44c8bf
        mov dword ptr ds : [esi+4], ecx
        public_44c8bf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_44c8d2
        mov dword ptr ds : [esi+4], edx
        jmp public_44c8e0
        public_44c8d2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_44c8dd
        mov dword ptr ds : [esi], edx
        jmp public_44c8e0
        public_44c8dd : nop
        mov dword ptr ds : [esi+8], edx
        public_44c8e0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_44c8eb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xD], bl
        jne public_44c8fe
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xD], bl
        je public_44c9a9
        public_44c8fe : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xD], bl
        jne public_44c9dc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0xD], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xD], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_44c925
        mov dword ptr ds : [esi+4], ecx
        public_44c925 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_44c9c1
        mov dword ptr ds : [esi+4], edx
        jmp public_44c9d0
        public_44c93f : nop
        mov dl, byte ptr ds : [ecx+0xD]
        test dl, dl
        jne public_44c992
        mov byte ptr ds : [ecx+0xD], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xD], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_44c965
        mov dword ptr ds : [esi+4], ecx
        public_44c965 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_44c978
        mov dword ptr ds : [esi+4], edx
        jmp public_44c987
        public_44c978 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_44c985
        mov dword ptr ds : [esi+8], edx
        jmp public_44c987
        public_44c985 : nop
        mov dword ptr ds : [esi], edx
        public_44c987 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_44c992 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xD], bl
        jne public_44ca38
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xD], bl
        jne public_44ca38
        public_44c9a9 : nop
        mov byte ptr ds : [ecx+0xD], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_44c880
        jmp public_44cad7
        public_44c9c1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_44c9ce
        mov dword ptr ds : [esi+8], edx
        jmp public_44c9d0
        public_44c9ce : nop
        mov dword ptr ds : [esi], edx
        public_44c9d0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_44c9dc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xD]
        mov byte ptr ds : [ecx+0xD], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xD], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xD], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_44ca06
        mov dword ptr ds : [esi+4], ecx
        public_44ca06 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_44ca1e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_44cad4
        public_44ca1e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_44ca2e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_44cad4
        public_44ca2e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_44cad4
        public_44ca38 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xD], bl
        jne public_44ca86
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0xD], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xD], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_44ca5b
        mov dword ptr ds : [esi+4], ecx
        public_44ca5b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_44ca6e
        mov dword ptr ds : [esi+4], edx
        jmp public_44ca7c
        public_44ca6e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_44ca79
        mov dword ptr ds : [esi], edx
        jmp public_44ca7c
        public_44ca79 : nop
        mov dword ptr ds : [esi+8], edx
        public_44ca7c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_44ca86 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xD]
        mov byte ptr ds : [ecx+0xD], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xD], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xD], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_44caaf
        mov dword ptr ds : [esi+4], ecx
        public_44caaf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_44cac2
        mov dword ptr ds : [esi+4], edx
        jmp public_44cad1
        public_44cac2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_44cacf
        mov dword ptr ds : [esi+8], edx
        jmp public_44cad1
        public_44cacf : nop
        mov dword ptr ds : [esi], edx
        public_44cad1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_44cad4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_44cad7 : nop
        mov byte ptr ds : [eax+0xD], bl
        public_44cada : nop
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
        UNREACHABLE_TRAP(0x44c730)
    }
}

#undef public_44c754
#undef public_44c772
#undef public_44c77d
#undef public_44c786
#undef public_44c791
#undef public_44c7ad
#undef public_44c7c4
#undef public_44c7d1
#undef public_44c7dc
#undef public_44c7df
#undef public_44c7f7
#undef public_44c802
#undef public_44c805
#undef public_44c81a
#undef public_44c825
#undef public_44c830
#undef public_44c833
#undef public_44c847
#undef public_44c853
#undef public_44c85f
#undef public_44c862
#undef public_44c880
#undef public_44c8bf
#undef public_44c8d2
#undef public_44c8dd
#undef public_44c8e0
#undef public_44c8eb
#undef public_44c8fe
#undef public_44c925
#undef public_44c93f
#undef public_44c965
#undef public_44c978
#undef public_44c985
#undef public_44c987
#undef public_44c992
#undef public_44c9a9
#undef public_44c9c1
#undef public_44c9ce
#undef public_44c9d0
#undef public_44c9dc
#undef public_44ca06
#undef public_44ca1e
#undef public_44ca2e
#undef public_44ca38
#undef public_44ca5b
#undef public_44ca6e
#undef public_44ca79
#undef public_44ca7c
#undef public_44ca86
#undef public_44caaf
#undef public_44cac2
#undef public_44cacf
#undef public_44cad1
#undef public_44cad4
#undef public_44cad7
#undef public_44cada
