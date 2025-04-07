#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f29630);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eed814 _public_6eed814
#define public_6eed832 _public_6eed832
#define public_6eed83d _public_6eed83d
#define public_6eed846 _public_6eed846
#define public_6eed851 _public_6eed851
#define public_6eed86d _public_6eed86d
#define public_6eed884 _public_6eed884
#define public_6eed891 _public_6eed891
#define public_6eed89c _public_6eed89c
#define public_6eed89f _public_6eed89f
#define public_6eed8b7 _public_6eed8b7
#define public_6eed8c2 _public_6eed8c2
#define public_6eed8c5 _public_6eed8c5
#define public_6eed8da _public_6eed8da
#define public_6eed8e5 _public_6eed8e5
#define public_6eed8f0 _public_6eed8f0
#define public_6eed8f3 _public_6eed8f3
#define public_6eed907 _public_6eed907
#define public_6eed913 _public_6eed913
#define public_6eed91f _public_6eed91f
#define public_6eed922 _public_6eed922
#define public_6eed940 _public_6eed940
#define public_6eed97f _public_6eed97f
#define public_6eed992 _public_6eed992
#define public_6eed99d _public_6eed99d
#define public_6eed9a0 _public_6eed9a0
#define public_6eed9ab _public_6eed9ab
#define public_6eed9be _public_6eed9be
#define public_6eed9e5 _public_6eed9e5
#define public_6eed9ff _public_6eed9ff
#define public_6eeda25 _public_6eeda25
#define public_6eeda38 _public_6eeda38
#define public_6eeda45 _public_6eeda45
#define public_6eeda47 _public_6eeda47
#define public_6eeda52 _public_6eeda52
#define public_6eeda69 _public_6eeda69
#define public_6eeda81 _public_6eeda81
#define public_6eeda8e _public_6eeda8e
#define public_6eeda90 _public_6eeda90
#define public_6eeda9c _public_6eeda9c
#define public_6eedac6 _public_6eedac6
#define public_6eedade _public_6eedade
#define public_6eedaee _public_6eedaee
#define public_6eedaf8 _public_6eedaf8
#define public_6eedb1b _public_6eedb1b
#define public_6eedb2e _public_6eedb2e
#define public_6eedb39 _public_6eedb39
#define public_6eedb3c _public_6eedb3c
#define public_6eedb46 _public_6eedb46
#define public_6eedb6f _public_6eedb6f
#define public_6eedb82 _public_6eedb82
#define public_6eedb8f _public_6eedb8f
#define public_6eedb91 _public_6eedb91
#define public_6eedb94 _public_6eedb94
#define public_6eedb97 _public_6eedb97
#define public_6eedb9e _public_6eedb9e

PROC_DECLARE(0x6eed7f0, internal_6eed7f0, public_6eed7f0);
extern "C" NAKED register_t __cdecl internal_6eed7f0()
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
        call public_6f69d00
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6eed832
        mov eax, dword ptr ds : [esi+8]
        public_6eed814 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6eed8b7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6eed8c5
        public_6eed832 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6eed83d
        mov eax, edx
        jmp public_6eed814
        public_6eed83d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6eed851
        public_6eed846 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6eed846
        public_6eed851 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eed814
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eed86d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6eed884
        public_6eed86d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6eed884 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6eed891
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eed89f
        public_6eed891 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6eed89c
        mov dword ptr ds : [edx], ecx
        jmp public_6eed89f
        public_6eed89c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eed89f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6eed922
        public_6eed8b7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6eed8c2
        mov dword ptr ds : [ecx], eax
        jmp public_6eed8c5
        public_6eed8c2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6eed8c5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6eed8f3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eed8da
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eed8f0
        public_6eed8da : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6eed8f0
        public_6eed8e5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6eed8e5
        public_6eed8f0 : nop
        mov dword ptr ss : [ebp], edx
        public_6eed8f3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6eed922
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eed907
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eed91f
        public_6eed907 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6eed91f
        public_6eed913 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6eed913
        public_6eed91f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6eed922 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x1C]
        mov bl, 1
        cmp cl, bl
        jne public_6eedb9e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6eedb97
        nop 
        public_6eed940 : nop
        cmp byte ptr ds : [eax+0x1C], bl
        jne public_6eedb97
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eed9ff
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6eed9ab
        mov byte ptr ds : [ecx+0x1C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eed97f
        mov dword ptr ds : [esi+4], ecx
        public_6eed97f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eed992
        mov dword ptr ds : [esi+4], edx
        jmp public_6eed9a0
        public_6eed992 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eed99d
        mov dword ptr ds : [esi], edx
        jmp public_6eed9a0
        public_6eed99d : nop
        mov dword ptr ds : [esi+8], edx
        public_6eed9a0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eed9ab : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6eed9be
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        je public_6eeda69
        public_6eed9be : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6eeda9c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eed9e5
        mov dword ptr ds : [esi+4], ecx
        public_6eed9e5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eeda81
        mov dword ptr ds : [esi+4], edx
        jmp public_6eeda90
        public_6eed9ff : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6eeda52
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eeda25
        mov dword ptr ds : [esi+4], ecx
        public_6eeda25 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eeda38
        mov dword ptr ds : [esi+4], edx
        jmp public_6eeda47
        public_6eeda38 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eeda45
        mov dword ptr ds : [esi+8], edx
        jmp public_6eeda47
        public_6eeda45 : nop
        mov dword ptr ds : [esi], edx
        public_6eeda47 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6eeda52 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6eedaf8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6eedaf8
        public_6eeda69 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eed940
        jmp public_6eedb97
        public_6eeda81 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eeda8e
        mov dword ptr ds : [esi+8], edx
        jmp public_6eeda90
        public_6eeda8e : nop
        mov dword ptr ds : [esi], edx
        public_6eeda90 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eeda9c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eedac6
        mov dword ptr ds : [esi+4], ecx
        public_6eedac6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eedade
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eedb94
        public_6eedade : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eedaee
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eedb94
        public_6eedaee : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eedb94
        public_6eedaf8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6eedb46
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eedb1b
        mov dword ptr ds : [esi+4], ecx
        public_6eedb1b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eedb2e
        mov dword ptr ds : [esi+4], edx
        jmp public_6eedb3c
        public_6eedb2e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eedb39
        mov dword ptr ds : [esi], edx
        jmp public_6eedb3c
        public_6eedb39 : nop
        mov dword ptr ds : [esi+8], edx
        public_6eedb3c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6eedb46 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eedb6f
        mov dword ptr ds : [esi+4], ecx
        public_6eedb6f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eedb82
        mov dword ptr ds : [esi+4], edx
        jmp public_6eedb91
        public_6eedb82 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eedb8f
        mov dword ptr ds : [esi+8], edx
        jmp public_6eedb91
        public_6eedb8f : nop
        mov dword ptr ds : [esi], edx
        public_6eedb91 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eedb94 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eedb97 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x1C], bl
        public_6eedb9e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f29630
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
        UNREACHABLE_TRAP(0x6eed7f0)
    }
}

#undef public_6eed814
#undef public_6eed832
#undef public_6eed83d
#undef public_6eed846
#undef public_6eed851
#undef public_6eed86d
#undef public_6eed884
#undef public_6eed891
#undef public_6eed89c
#undef public_6eed89f
#undef public_6eed8b7
#undef public_6eed8c2
#undef public_6eed8c5
#undef public_6eed8da
#undef public_6eed8e5
#undef public_6eed8f0
#undef public_6eed8f3
#undef public_6eed907
#undef public_6eed913
#undef public_6eed91f
#undef public_6eed922
#undef public_6eed940
#undef public_6eed97f
#undef public_6eed992
#undef public_6eed99d
#undef public_6eed9a0
#undef public_6eed9ab
#undef public_6eed9be
#undef public_6eed9e5
#undef public_6eed9ff
#undef public_6eeda25
#undef public_6eeda38
#undef public_6eeda45
#undef public_6eeda47
#undef public_6eeda52
#undef public_6eeda69
#undef public_6eeda81
#undef public_6eeda8e
#undef public_6eeda90
#undef public_6eeda9c
#undef public_6eedac6
#undef public_6eedade
#undef public_6eedaee
#undef public_6eedaf8
#undef public_6eedb1b
#undef public_6eedb2e
#undef public_6eedb39
#undef public_6eedb3c
#undef public_6eedb46
#undef public_6eedb6f
#undef public_6eedb82
#undef public_6eedb8f
#undef public_6eedb91
#undef public_6eedb94
#undef public_6eedb97
#undef public_6eedb9e
