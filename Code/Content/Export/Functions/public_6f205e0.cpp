#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f205e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d030);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f20604 _public_6f20604
#define public_6f20622 _public_6f20622
#define public_6f2062d _public_6f2062d
#define public_6f20636 _public_6f20636
#define public_6f20641 _public_6f20641
#define public_6f2065d _public_6f2065d
#define public_6f20674 _public_6f20674
#define public_6f20681 _public_6f20681
#define public_6f2068c _public_6f2068c
#define public_6f2068f _public_6f2068f
#define public_6f206a7 _public_6f206a7
#define public_6f206b2 _public_6f206b2
#define public_6f206b5 _public_6f206b5
#define public_6f206ca _public_6f206ca
#define public_6f206d5 _public_6f206d5
#define public_6f206e0 _public_6f206e0
#define public_6f206e3 _public_6f206e3
#define public_6f206f7 _public_6f206f7
#define public_6f20703 _public_6f20703
#define public_6f2070f _public_6f2070f
#define public_6f20712 _public_6f20712
#define public_6f20730 _public_6f20730
#define public_6f2076f _public_6f2076f
#define public_6f20782 _public_6f20782
#define public_6f2078d _public_6f2078d
#define public_6f20790 _public_6f20790
#define public_6f2079b _public_6f2079b
#define public_6f207ae _public_6f207ae
#define public_6f207d5 _public_6f207d5
#define public_6f207ef _public_6f207ef
#define public_6f20815 _public_6f20815
#define public_6f20828 _public_6f20828
#define public_6f20835 _public_6f20835
#define public_6f20837 _public_6f20837
#define public_6f20842 _public_6f20842
#define public_6f20859 _public_6f20859
#define public_6f20871 _public_6f20871
#define public_6f2087e _public_6f2087e
#define public_6f20880 _public_6f20880
#define public_6f2088c _public_6f2088c
#define public_6f208b6 _public_6f208b6
#define public_6f208ce _public_6f208ce
#define public_6f208de _public_6f208de
#define public_6f208e8 _public_6f208e8
#define public_6f2090b _public_6f2090b
#define public_6f2091e _public_6f2091e
#define public_6f20929 _public_6f20929
#define public_6f2092c _public_6f2092c
#define public_6f20936 _public_6f20936
#define public_6f2095f _public_6f2095f
#define public_6f20972 _public_6f20972
#define public_6f2097f _public_6f2097f
#define public_6f20981 _public_6f20981
#define public_6f20984 _public_6f20984
#define public_6f20987 _public_6f20987
#define public_6f2098a _public_6f2098a

PROC_DECLARE(0x6f205e0, internal_6f205e0, public_6f205e0);
extern "C" NAKED register_t __cdecl internal_6f205e0()
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
        call public_6f7d030
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f20622
        mov eax, dword ptr ds : [esi+8]
        public_6f20604 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f206a7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f206b5
        public_6f20622 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f2062d
        mov eax, edx
        jmp public_6f20604
        public_6f2062d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x5D]
        test bl, bl
        jne public_6f20641
        public_6f20636 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x5D]
        test bl, bl
        je public_6f20636
        public_6f20641 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f20604
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2065d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f20674
        public_6f2065d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f20674 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f20681
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2068f
        public_6f20681 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f2068c
        mov dword ptr ds : [edx], ecx
        jmp public_6f2068f
        public_6f2068c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2068f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x5C]
        mov dl, byte ptr ds : [ecx+0x5C]
        mov byte ptr ds : [ecx+0x5C], bl
        mov byte ptr ds : [esi+0x5C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f20712
        public_6f206a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f206b2
        mov dword ptr ds : [ecx], eax
        jmp public_6f206b5
        public_6f206b2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f206b5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f206e3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f206ca
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f206e0
        public_6f206ca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x5D]
        test bl, bl
        mov edx, eax
        jne public_6f206e0
        public_6f206d5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x5D]
        test bl, bl
        je public_6f206d5
        public_6f206e0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f206e3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f20712
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f206f7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f2070f
        public_6f206f7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x5D]
        test bl, bl
        mov edx, eax
        jne public_6f2070f
        public_6f20703 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x5D]
        test bl, bl
        je public_6f20703
        public_6f2070f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f20712 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x5C]
        mov bl, 1
        cmp dl, bl
        jne public_6f2098a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f20987
        nop 
        public_6f20730 : nop
        cmp byte ptr ds : [eax+0x5C], bl
        jne public_6f20987
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f207ef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x5C]
        test dl, dl
        jne public_6f2079b
        mov byte ptr ds : [ecx+0x5C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2076f
        mov dword ptr ds : [esi+4], ecx
        public_6f2076f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f20782
        mov dword ptr ds : [esi+4], edx
        jmp public_6f20790
        public_6f20782 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2078d
        mov dword ptr ds : [esi], edx
        jmp public_6f20790
        public_6f2078d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f20790 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f2079b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x5C], bl
        jne public_6f207ae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x5C], bl
        je public_6f20859
        public_6f207ae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x5C], bl
        jne public_6f2088c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x5C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x5C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f207d5
        mov dword ptr ds : [esi+4], ecx
        public_6f207d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f20871
        mov dword ptr ds : [esi+4], edx
        jmp public_6f20880
        public_6f207ef : nop
        mov dl, byte ptr ds : [ecx+0x5C]
        test dl, dl
        jne public_6f20842
        mov byte ptr ds : [ecx+0x5C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f20815
        mov dword ptr ds : [esi+4], ecx
        public_6f20815 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f20828
        mov dword ptr ds : [esi+4], edx
        jmp public_6f20837
        public_6f20828 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f20835
        mov dword ptr ds : [esi+8], edx
        jmp public_6f20837
        public_6f20835 : nop
        mov dword ptr ds : [esi], edx
        public_6f20837 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f20842 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x5C], bl
        jne public_6f208e8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x5C], bl
        jne public_6f208e8
        public_6f20859 : nop
        mov byte ptr ds : [ecx+0x5C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f20730
        jmp public_6f20987
        public_6f20871 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2087e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f20880
        public_6f2087e : nop
        mov dword ptr ds : [esi], edx
        public_6f20880 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f2088c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x5C]
        mov byte ptr ds : [ecx+0x5C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x5C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x5C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f208b6
        mov dword ptr ds : [esi+4], ecx
        public_6f208b6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f208ce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f20984
        public_6f208ce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f208de
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f20984
        public_6f208de : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f20984
        public_6f208e8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x5C], bl
        jne public_6f20936
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x5C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x5C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2090b
        mov dword ptr ds : [esi+4], ecx
        public_6f2090b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2091e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2092c
        public_6f2091e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f20929
        mov dword ptr ds : [esi], edx
        jmp public_6f2092c
        public_6f20929 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2092c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f20936 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x5C]
        mov byte ptr ds : [ecx+0x5C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x5C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x5C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2095f
        mov dword ptr ds : [esi+4], ecx
        public_6f2095f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f20972
        mov dword ptr ds : [esi+4], edx
        jmp public_6f20981
        public_6f20972 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2097f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f20981
        public_6f2097f : nop
        mov dword ptr ds : [esi], edx
        public_6f20981 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f20984 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f20987 : nop
        mov byte ptr ds : [eax+0x5C], bl
        public_6f2098a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
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
        UNREACHABLE_TRAP(0x6f205e0)
    }
}

#undef public_6f20604
#undef public_6f20622
#undef public_6f2062d
#undef public_6f20636
#undef public_6f20641
#undef public_6f2065d
#undef public_6f20674
#undef public_6f20681
#undef public_6f2068c
#undef public_6f2068f
#undef public_6f206a7
#undef public_6f206b2
#undef public_6f206b5
#undef public_6f206ca
#undef public_6f206d5
#undef public_6f206e0
#undef public_6f206e3
#undef public_6f206f7
#undef public_6f20703
#undef public_6f2070f
#undef public_6f20712
#undef public_6f20730
#undef public_6f2076f
#undef public_6f20782
#undef public_6f2078d
#undef public_6f20790
#undef public_6f2079b
#undef public_6f207ae
#undef public_6f207d5
#undef public_6f207ef
#undef public_6f20815
#undef public_6f20828
#undef public_6f20835
#undef public_6f20837
#undef public_6f20842
#undef public_6f20859
#undef public_6f20871
#undef public_6f2087e
#undef public_6f20880
#undef public_6f2088c
#undef public_6f208b6
#undef public_6f208ce
#undef public_6f208de
#undef public_6f208e8
#undef public_6f2090b
#undef public_6f2091e
#undef public_6f20929
#undef public_6f2092c
#undef public_6f20936
#undef public_6f2095f
#undef public_6f20972
#undef public_6f2097f
#undef public_6f20981
#undef public_6f20984
#undef public_6f20987
#undef public_6f2098a
