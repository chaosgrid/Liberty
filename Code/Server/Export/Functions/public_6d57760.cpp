#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57760);
CLANG_FORWARD_PROC_SYMBOL(public_6d59620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d57784 _public_6d57784
#define public_6d577a2 _public_6d577a2
#define public_6d577ad _public_6d577ad
#define public_6d577c0 _public_6d577c0
#define public_6d577ce _public_6d577ce
#define public_6d577ea _public_6d577ea
#define public_6d57801 _public_6d57801
#define public_6d5780e _public_6d5780e
#define public_6d57819 _public_6d57819
#define public_6d5781c _public_6d5781c
#define public_6d57840 _public_6d57840
#define public_6d5784b _public_6d5784b
#define public_6d5784e _public_6d5784e
#define public_6d57863 _public_6d57863
#define public_6d57871 _public_6d57871
#define public_6d5787f _public_6d5787f
#define public_6d57882 _public_6d57882
#define public_6d57896 _public_6d57896
#define public_6d578a5 _public_6d578a5
#define public_6d578b4 _public_6d578b4
#define public_6d578b7 _public_6d578b7
#define public_6d578d7 _public_6d578d7
#define public_6d57922 _public_6d57922
#define public_6d57935 _public_6d57935
#define public_6d57940 _public_6d57940
#define public_6d57943 _public_6d57943
#define public_6d5794e _public_6d5794e
#define public_6d57967 _public_6d57967
#define public_6d57997 _public_6d57997
#define public_6d579b1 _public_6d579b1
#define public_6d579e0 _public_6d579e0
#define public_6d579f3 _public_6d579f3
#define public_6d57a00 _public_6d57a00
#define public_6d57a02 _public_6d57a02
#define public_6d57a0d _public_6d57a0d
#define public_6d57a2a _public_6d57a2a
#define public_6d57a45 _public_6d57a45
#define public_6d57a52 _public_6d57a52
#define public_6d57a54 _public_6d57a54
#define public_6d57a60 _public_6d57a60
#define public_6d57a96 _public_6d57a96
#define public_6d57aae _public_6d57aae
#define public_6d57abe _public_6d57abe
#define public_6d57ac8 _public_6d57ac8
#define public_6d57af4 _public_6d57af4
#define public_6d57b07 _public_6d57b07
#define public_6d57b12 _public_6d57b12
#define public_6d57b15 _public_6d57b15
#define public_6d57b1f _public_6d57b1f
#define public_6d57b54 _public_6d57b54
#define public_6d57b67 _public_6d57b67
#define public_6d57b74 _public_6d57b74
#define public_6d57b76 _public_6d57b76
#define public_6d57b79 _public_6d57b79
#define public_6d57b7c _public_6d57b7c
#define public_6d57b86 _public_6d57b86

PROC_DECLARE(0x6d57760, internal_6d57760, public_6d57760);
extern "C" NAKED register_t __cdecl internal_6d57760()
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
        call public_6d59620
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6d577a2
        mov eax, dword ptr ds : [esi+8]
        public_6d57784 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6d57840
        mov dword ptr ds : [ecx+4], eax
        jmp public_6d5784e
        public_6d577a2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6d577ad
        mov eax, edx
        jmp public_6d57784
        public_6d577ad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x5A5]
        test bl, bl
        jne public_6d577ce
        lea esp, ss:[esp]
        public_6d577c0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x5A5]
        test bl, bl
        je public_6d577c0
        public_6d577ce : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d57784
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d577ea
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d57801
        public_6d577ea : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6d57801 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6d5780e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d5781c
        public_6d5780e : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6d57819
        mov dword ptr ds : [edx], ecx
        jmp public_6d5781c
        public_6d57819 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d5781c : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x5A4]
        mov dl, byte ptr ds : [ecx+0x5A4]
        mov byte ptr ds : [ecx+0x5A4], bl
        mov byte ptr ds : [esi+0x5A4], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d578b7
        public_6d57840 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6d5784b
        mov dword ptr ds : [ecx], eax
        jmp public_6d5784e
        public_6d5784b : nop
        mov dword ptr ds : [ecx+8], eax
        public_6d5784e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6d57882
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d57863
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d5787f
        public_6d57863 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x5A5]
        test bl, bl
        mov edx, eax
        jne public_6d5787f
        public_6d57871 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x5A5]
        test bl, bl
        je public_6d57871
        public_6d5787f : nop
        mov dword ptr ss : [ebp], edx
        public_6d57882 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d578b7
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d57896
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d578b4
        public_6d57896 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x5A5]
        test bl, bl
        mov edx, eax
        jne public_6d578b4
        public_6d578a5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x5A5]
        test bl, bl
        je public_6d578a5
        public_6d578b4 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6d578b7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x5A4]
        mov bl, 1
        cmp cl, bl
        jne public_6d57b86
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6d57b7c
        public_6d578d7 : nop
        cmp byte ptr ds : [eax+0x5A4], bl
        jne public_6d57b7c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d579b1
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x5A4]
        test dl, dl
        jne public_6d5794e
        mov byte ptr ds : [ecx+0x5A4], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x5A4], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d57922
        mov dword ptr ds : [esi+4], ecx
        public_6d57922 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d57935
        mov dword ptr ds : [esi+4], edx
        jmp public_6d57943
        public_6d57935 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d57940
        mov dword ptr ds : [esi], edx
        jmp public_6d57943
        public_6d57940 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d57943 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d5794e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x5A4], bl
        jne public_6d57967
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x5A4], bl
        je public_6d57a2a
        public_6d57967 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x5A4], bl
        jne public_6d57a60
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x5A4], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x5A4], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d57997
        mov dword ptr ds : [esi+4], ecx
        public_6d57997 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d57a45
        mov dword ptr ds : [esi+4], edx
        jmp public_6d57a54
        public_6d579b1 : nop
        mov dl, byte ptr ds : [ecx+0x5A4]
        test dl, dl
        jne public_6d57a0d
        mov byte ptr ds : [ecx+0x5A4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5A4], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d579e0
        mov dword ptr ds : [esi+4], ecx
        public_6d579e0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d579f3
        mov dword ptr ds : [esi+4], edx
        jmp public_6d57a02
        public_6d579f3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d57a00
        mov dword ptr ds : [esi+8], edx
        jmp public_6d57a02
        public_6d57a00 : nop
        mov dword ptr ds : [esi], edx
        public_6d57a02 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6d57a0d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x5A4], bl
        jne public_6d57ac8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x5A4], bl
        jne public_6d57ac8
        public_6d57a2a : nop
        mov byte ptr ds : [ecx+0x5A4], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d578d7
        jmp public_6d57b7c
        public_6d57a45 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d57a52
        mov dword ptr ds : [esi+8], edx
        jmp public_6d57a54
        public_6d57a52 : nop
        mov dword ptr ds : [esi], edx
        public_6d57a54 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d57a60 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x5A4]
        mov byte ptr ds : [ecx+0x5A4], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x5A4], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x5A4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d57a96
        mov dword ptr ds : [esi+4], ecx
        public_6d57a96 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d57aae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d57b79
        public_6d57aae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d57abe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d57b79
        public_6d57abe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d57b79
        public_6d57ac8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x5A4], bl
        jne public_6d57b1f
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x5A4], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x5A4], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d57af4
        mov dword ptr ds : [esi+4], ecx
        public_6d57af4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d57b07
        mov dword ptr ds : [esi+4], edx
        jmp public_6d57b15
        public_6d57b07 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d57b12
        mov dword ptr ds : [esi], edx
        jmp public_6d57b15
        public_6d57b12 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d57b15 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6d57b1f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x5A4]
        mov byte ptr ds : [ecx+0x5A4], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x5A4], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x5A4], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d57b54
        mov dword ptr ds : [esi+4], ecx
        public_6d57b54 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d57b67
        mov dword ptr ds : [esi+4], edx
        jmp public_6d57b76
        public_6d57b67 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d57b74
        mov dword ptr ds : [esi+8], edx
        jmp public_6d57b76
        public_6d57b74 : nop
        mov dword ptr ds : [esi], edx
        public_6d57b76 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d57b79 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d57b7c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x5A4], bl
        public_6d57b86 : nop
        lea ecx, ds:[esi+0xC]
        call public_6d572e0
        push esi
        call public_6d5ffb0
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
        UNREACHABLE_TRAP(0x6d57760)
    }
}

#undef public_6d57784
#undef public_6d577a2
#undef public_6d577ad
#undef public_6d577c0
#undef public_6d577ce
#undef public_6d577ea
#undef public_6d57801
#undef public_6d5780e
#undef public_6d57819
#undef public_6d5781c
#undef public_6d57840
#undef public_6d5784b
#undef public_6d5784e
#undef public_6d57863
#undef public_6d57871
#undef public_6d5787f
#undef public_6d57882
#undef public_6d57896
#undef public_6d578a5
#undef public_6d578b4
#undef public_6d578b7
#undef public_6d578d7
#undef public_6d57922
#undef public_6d57935
#undef public_6d57940
#undef public_6d57943
#undef public_6d5794e
#undef public_6d57967
#undef public_6d57997
#undef public_6d579b1
#undef public_6d579e0
#undef public_6d579f3
#undef public_6d57a00
#undef public_6d57a02
#undef public_6d57a0d
#undef public_6d57a2a
#undef public_6d57a45
#undef public_6d57a52
#undef public_6d57a54
#undef public_6d57a60
#undef public_6d57a96
#undef public_6d57aae
#undef public_6d57abe
#undef public_6d57ac8
#undef public_6d57af4
#undef public_6d57b07
#undef public_6d57b12
#undef public_6d57b15
#undef public_6d57b1f
#undef public_6d57b54
#undef public_6d57b67
#undef public_6d57b74
#undef public_6d57b76
#undef public_6d57b79
#undef public_6d57b7c
#undef public_6d57b86
