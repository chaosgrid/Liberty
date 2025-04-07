#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4045e0);
CLANG_FORWARD_PROC_SYMBOL(public_4057b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_404604 _public_404604
#define public_404622 _public_404622
#define public_40462d _public_40462d
#define public_404636 _public_404636
#define public_404641 _public_404641
#define public_40465d _public_40465d
#define public_404674 _public_404674
#define public_404681 _public_404681
#define public_40468c _public_40468c
#define public_40468f _public_40468f
#define public_4046a7 _public_4046a7
#define public_4046b2 _public_4046b2
#define public_4046b5 _public_4046b5
#define public_4046ca _public_4046ca
#define public_4046d5 _public_4046d5
#define public_4046e0 _public_4046e0
#define public_4046e3 _public_4046e3
#define public_4046f7 _public_4046f7
#define public_404703 _public_404703
#define public_40470f _public_40470f
#define public_404712 _public_404712
#define public_404730 _public_404730
#define public_40476f _public_40476f
#define public_404782 _public_404782
#define public_40478d _public_40478d
#define public_404790 _public_404790
#define public_40479b _public_40479b
#define public_4047ae _public_4047ae
#define public_4047d5 _public_4047d5
#define public_4047ef _public_4047ef
#define public_404815 _public_404815
#define public_404828 _public_404828
#define public_404835 _public_404835
#define public_404837 _public_404837
#define public_404842 _public_404842
#define public_404859 _public_404859
#define public_404871 _public_404871
#define public_40487e _public_40487e
#define public_404880 _public_404880
#define public_40488c _public_40488c
#define public_4048b6 _public_4048b6
#define public_4048ce _public_4048ce
#define public_4048de _public_4048de
#define public_4048e8 _public_4048e8
#define public_40490b _public_40490b
#define public_40491e _public_40491e
#define public_404929 _public_404929
#define public_40492c _public_40492c
#define public_404936 _public_404936
#define public_40495f _public_40495f
#define public_404972 _public_404972
#define public_40497f _public_40497f
#define public_404981 _public_404981
#define public_404984 _public_404984
#define public_404987 _public_404987
#define public_40498a _public_40498a

PROC_DECLARE(0x4045e0, internal_4045e0, public_4045e0);
extern "C" NAKED register_t __cdecl internal_4045e0()
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
        call public_4057b0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_404622
        mov eax, dword ptr ds : [esi+8]
        public_404604 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_4046a7
        mov dword ptr ds : [ecx+4], eax
        jmp public_4046b5
        public_404622 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_40462d
        mov eax, edx
        jmp public_404604
        public_40462d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_404641
        public_404636 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_404636
        public_404641 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_404604
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_40465d
        mov dword ptr ds : [eax+4], ecx
        jmp public_404674
        public_40465d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_404674 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_404681
        mov dword ptr ds : [edx+4], ecx
        jmp public_40468f
        public_404681 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_40468c
        mov dword ptr ds : [edx], ecx
        jmp public_40468f
        public_40468c : nop
        mov dword ptr ds : [edx+8], ecx
        public_40468f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [ecx+0x10], bl
        mov byte ptr ds : [esi+0x10], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_404712
        public_4046a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_4046b2
        mov dword ptr ds : [ecx], eax
        jmp public_4046b5
        public_4046b2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4046b5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_4046e3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4046ca
        mov edx, dword ptr ds : [esi+4]
        jmp public_4046e0
        public_4046ca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_4046e0
        public_4046d5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_4046d5
        public_4046e0 : nop
        mov dword ptr ss : [ebp], edx
        public_4046e3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_404712
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4046f7
        mov edx, dword ptr ds : [esi+4]
        jmp public_40470f
        public_4046f7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_40470f
        public_404703 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_404703
        public_40470f : nop
        mov dword ptr ss : [ebp+8], edx
        public_404712 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov bl, 1
        cmp dl, bl
        jne public_40498a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_404987
        nop 
        public_404730 : nop
        cmp byte ptr ds : [eax+0x10], bl
        jne public_404987
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4047ef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_40479b
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_40476f
        mov dword ptr ds : [esi+4], ecx
        public_40476f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404782
        mov dword ptr ds : [esi+4], edx
        jmp public_404790
        public_404782 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_40478d
        mov dword ptr ds : [esi], edx
        jmp public_404790
        public_40478d : nop
        mov dword ptr ds : [esi+8], edx
        public_404790 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_40479b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_4047ae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        je public_404859
        public_4047ae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_40488c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4047d5
        mov dword ptr ds : [esi+4], ecx
        public_4047d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404871
        mov dword ptr ds : [esi+4], edx
        jmp public_404880
        public_4047ef : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_404842
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_404815
        mov dword ptr ds : [esi+4], ecx
        public_404815 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404828
        mov dword ptr ds : [esi+4], edx
        jmp public_404837
        public_404828 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_404835
        mov dword ptr ds : [esi+8], edx
        jmp public_404837
        public_404835 : nop
        mov dword ptr ds : [esi], edx
        public_404837 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_404842 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_4048e8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_4048e8
        public_404859 : nop
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_404730
        jmp public_404987
        public_404871 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_40487e
        mov dword ptr ds : [esi+8], edx
        jmp public_404880
        public_40487e : nop
        mov dword ptr ds : [esi], edx
        public_404880 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_40488c : nop
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
        je public_4048b6
        mov dword ptr ds : [esi+4], ecx
        public_4048b6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4048ce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_404984
        public_4048ce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4048de
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_404984
        public_4048de : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_404984
        public_4048e8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_404936
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_40490b
        mov dword ptr ds : [esi+4], ecx
        public_40490b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_40491e
        mov dword ptr ds : [esi+4], edx
        jmp public_40492c
        public_40491e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_404929
        mov dword ptr ds : [esi], edx
        jmp public_40492c
        public_404929 : nop
        mov dword ptr ds : [esi+8], edx
        public_40492c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_404936 : nop
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
        je public_40495f
        mov dword ptr ds : [esi+4], ecx
        public_40495f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_404972
        mov dword ptr ds : [esi+4], edx
        jmp public_404981
        public_404972 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_40497f
        mov dword ptr ds : [esi+8], edx
        jmp public_404981
        public_40497f : nop
        mov dword ptr ds : [esi], edx
        public_404981 : nop
        mov dword ptr ds : [edx+8], ecx
        public_404984 : nop
        mov dword ptr ds : [ecx+4], edx
        public_404987 : nop
        mov byte ptr ds : [eax+0x10], bl
        public_40498a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_418978
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
        UNREACHABLE_TRAP(0x4045e0)
    }
}

#undef public_404604
#undef public_404622
#undef public_40462d
#undef public_404636
#undef public_404641
#undef public_40465d
#undef public_404674
#undef public_404681
#undef public_40468c
#undef public_40468f
#undef public_4046a7
#undef public_4046b2
#undef public_4046b5
#undef public_4046ca
#undef public_4046d5
#undef public_4046e0
#undef public_4046e3
#undef public_4046f7
#undef public_404703
#undef public_40470f
#undef public_404712
#undef public_404730
#undef public_40476f
#undef public_404782
#undef public_40478d
#undef public_404790
#undef public_40479b
#undef public_4047ae
#undef public_4047d5
#undef public_4047ef
#undef public_404815
#undef public_404828
#undef public_404835
#undef public_404837
#undef public_404842
#undef public_404859
#undef public_404871
#undef public_40487e
#undef public_404880
#undef public_40488c
#undef public_4048b6
#undef public_4048ce
#undef public_4048de
#undef public_4048e8
#undef public_40490b
#undef public_40491e
#undef public_404929
#undef public_40492c
#undef public_404936
#undef public_40495f
#undef public_404972
#undef public_40497f
#undef public_404981
#undef public_404984
#undef public_404987
#undef public_40498a
