#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eaf604 _public_6eaf604
#define public_6eaf622 _public_6eaf622
#define public_6eaf62d _public_6eaf62d
#define public_6eaf636 _public_6eaf636
#define public_6eaf641 _public_6eaf641
#define public_6eaf65d _public_6eaf65d
#define public_6eaf674 _public_6eaf674
#define public_6eaf681 _public_6eaf681
#define public_6eaf68c _public_6eaf68c
#define public_6eaf68f _public_6eaf68f
#define public_6eaf6a7 _public_6eaf6a7
#define public_6eaf6b2 _public_6eaf6b2
#define public_6eaf6b5 _public_6eaf6b5
#define public_6eaf6ca _public_6eaf6ca
#define public_6eaf6d5 _public_6eaf6d5
#define public_6eaf6e0 _public_6eaf6e0
#define public_6eaf6e3 _public_6eaf6e3
#define public_6eaf6f7 _public_6eaf6f7
#define public_6eaf703 _public_6eaf703
#define public_6eaf70f _public_6eaf70f
#define public_6eaf712 _public_6eaf712
#define public_6eaf730 _public_6eaf730
#define public_6eaf76f _public_6eaf76f
#define public_6eaf782 _public_6eaf782
#define public_6eaf78d _public_6eaf78d
#define public_6eaf790 _public_6eaf790
#define public_6eaf79b _public_6eaf79b
#define public_6eaf7ae _public_6eaf7ae
#define public_6eaf7d5 _public_6eaf7d5
#define public_6eaf7ef _public_6eaf7ef
#define public_6eaf815 _public_6eaf815
#define public_6eaf828 _public_6eaf828
#define public_6eaf835 _public_6eaf835
#define public_6eaf837 _public_6eaf837
#define public_6eaf842 _public_6eaf842
#define public_6eaf859 _public_6eaf859
#define public_6eaf871 _public_6eaf871
#define public_6eaf87e _public_6eaf87e
#define public_6eaf880 _public_6eaf880
#define public_6eaf88c _public_6eaf88c
#define public_6eaf8b6 _public_6eaf8b6
#define public_6eaf8ce _public_6eaf8ce
#define public_6eaf8de _public_6eaf8de
#define public_6eaf8e8 _public_6eaf8e8
#define public_6eaf90b _public_6eaf90b
#define public_6eaf91e _public_6eaf91e
#define public_6eaf929 _public_6eaf929
#define public_6eaf92c _public_6eaf92c
#define public_6eaf936 _public_6eaf936
#define public_6eaf95f _public_6eaf95f
#define public_6eaf972 _public_6eaf972
#define public_6eaf97f _public_6eaf97f
#define public_6eaf981 _public_6eaf981
#define public_6eaf984 _public_6eaf984
#define public_6eaf987 _public_6eaf987
#define public_6eaf98e _public_6eaf98e

PROC_DECLARE(0x6eaf5e0, internal_6eaf5e0, public_6eaf5e0);
extern "C" NAKED register_t __cdecl internal_6eaf5e0()
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
        call public_6f46730
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6eaf622
        mov eax, dword ptr ds : [esi+8]
        public_6eaf604 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6eaf6a7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6eaf6b5
        public_6eaf622 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6eaf62d
        mov eax, edx
        jmp public_6eaf604
        public_6eaf62d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6eaf641
        public_6eaf636 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6eaf636
        public_6eaf641 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eaf604
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eaf65d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6eaf674
        public_6eaf65d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6eaf674 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6eaf681
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eaf68f
        public_6eaf681 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6eaf68c
        mov dword ptr ds : [edx], ecx
        jmp public_6eaf68f
        public_6eaf68c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eaf68f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x34]
        mov dl, byte ptr ds : [ecx+0x34]
        mov byte ptr ds : [ecx+0x34], bl
        mov byte ptr ds : [esi+0x34], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6eaf712
        public_6eaf6a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6eaf6b2
        mov dword ptr ds : [ecx], eax
        jmp public_6eaf6b5
        public_6eaf6b2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6eaf6b5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6eaf6e3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eaf6ca
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eaf6e0
        public_6eaf6ca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_6eaf6e0
        public_6eaf6d5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6eaf6d5
        public_6eaf6e0 : nop
        mov dword ptr ss : [ebp], edx
        public_6eaf6e3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6eaf712
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eaf6f7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eaf70f
        public_6eaf6f7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_6eaf70f
        public_6eaf703 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6eaf703
        public_6eaf70f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6eaf712 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x34]
        mov bl, 1
        cmp cl, bl
        jne public_6eaf98e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6eaf987
        nop 
        public_6eaf730 : nop
        cmp byte ptr ds : [eax+0x34], bl
        jne public_6eaf987
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eaf7ef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6eaf79b
        mov byte ptr ds : [ecx+0x34], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eaf76f
        mov dword ptr ds : [esi+4], ecx
        public_6eaf76f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eaf782
        mov dword ptr ds : [esi+4], edx
        jmp public_6eaf790
        public_6eaf782 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eaf78d
        mov dword ptr ds : [esi], edx
        jmp public_6eaf790
        public_6eaf78d : nop
        mov dword ptr ds : [esi+8], edx
        public_6eaf790 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eaf79b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6eaf7ae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        je public_6eaf859
        public_6eaf7ae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6eaf88c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eaf7d5
        mov dword ptr ds : [esi+4], ecx
        public_6eaf7d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eaf871
        mov dword ptr ds : [esi+4], edx
        jmp public_6eaf880
        public_6eaf7ef : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6eaf842
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eaf815
        mov dword ptr ds : [esi+4], ecx
        public_6eaf815 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eaf828
        mov dword ptr ds : [esi+4], edx
        jmp public_6eaf837
        public_6eaf828 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eaf835
        mov dword ptr ds : [esi+8], edx
        jmp public_6eaf837
        public_6eaf835 : nop
        mov dword ptr ds : [esi], edx
        public_6eaf837 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6eaf842 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6eaf8e8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6eaf8e8
        public_6eaf859 : nop
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eaf730
        jmp public_6eaf987
        public_6eaf871 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eaf87e
        mov dword ptr ds : [esi+8], edx
        jmp public_6eaf880
        public_6eaf87e : nop
        mov dword ptr ds : [esi], edx
        public_6eaf880 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eaf88c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eaf8b6
        mov dword ptr ds : [esi+4], ecx
        public_6eaf8b6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eaf8ce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eaf984
        public_6eaf8ce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eaf8de
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eaf984
        public_6eaf8de : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eaf984
        public_6eaf8e8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_6eaf936
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eaf90b
        mov dword ptr ds : [esi+4], ecx
        public_6eaf90b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eaf91e
        mov dword ptr ds : [esi+4], edx
        jmp public_6eaf92c
        public_6eaf91e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eaf929
        mov dword ptr ds : [esi], edx
        jmp public_6eaf92c
        public_6eaf929 : nop
        mov dword ptr ds : [esi+8], edx
        public_6eaf92c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6eaf936 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eaf95f
        mov dword ptr ds : [esi+4], ecx
        public_6eaf95f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eaf972
        mov dword ptr ds : [esi+4], edx
        jmp public_6eaf981
        public_6eaf972 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eaf97f
        mov dword ptr ds : [esi+8], edx
        jmp public_6eaf981
        public_6eaf97f : nop
        mov dword ptr ds : [esi], edx
        public_6eaf981 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eaf984 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eaf987 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x34], bl
        public_6eaf98e : nop
        lea ecx, ds:[esi+0xC]
        call public_6ead0b0
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
        UNREACHABLE_TRAP(0x6eaf5e0)
    }
}

#undef public_6eaf604
#undef public_6eaf622
#undef public_6eaf62d
#undef public_6eaf636
#undef public_6eaf641
#undef public_6eaf65d
#undef public_6eaf674
#undef public_6eaf681
#undef public_6eaf68c
#undef public_6eaf68f
#undef public_6eaf6a7
#undef public_6eaf6b2
#undef public_6eaf6b5
#undef public_6eaf6ca
#undef public_6eaf6d5
#undef public_6eaf6e0
#undef public_6eaf6e3
#undef public_6eaf6f7
#undef public_6eaf703
#undef public_6eaf70f
#undef public_6eaf712
#undef public_6eaf730
#undef public_6eaf76f
#undef public_6eaf782
#undef public_6eaf78d
#undef public_6eaf790
#undef public_6eaf79b
#undef public_6eaf7ae
#undef public_6eaf7d5
#undef public_6eaf7ef
#undef public_6eaf815
#undef public_6eaf828
#undef public_6eaf835
#undef public_6eaf837
#undef public_6eaf842
#undef public_6eaf859
#undef public_6eaf871
#undef public_6eaf87e
#undef public_6eaf880
#undef public_6eaf88c
#undef public_6eaf8b6
#undef public_6eaf8ce
#undef public_6eaf8de
#undef public_6eaf8e8
#undef public_6eaf90b
#undef public_6eaf91e
#undef public_6eaf929
#undef public_6eaf92c
#undef public_6eaf936
#undef public_6eaf95f
#undef public_6eaf972
#undef public_6eaf97f
#undef public_6eaf981
#undef public_6eaf984
#undef public_6eaf987
#undef public_6eaf98e
