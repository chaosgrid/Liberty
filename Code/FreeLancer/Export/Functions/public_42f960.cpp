#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42f960);
CLANG_FORWARD_PROC_SYMBOL(public_430450);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42f984 _public_42f984
#define public_42f9a2 _public_42f9a2
#define public_42f9ad _public_42f9ad
#define public_42f9c0 _public_42f9c0
#define public_42f9ce _public_42f9ce
#define public_42f9ea _public_42f9ea
#define public_42fa01 _public_42fa01
#define public_42fa0e _public_42fa0e
#define public_42fa19 _public_42fa19
#define public_42fa1c _public_42fa1c
#define public_42fa40 _public_42fa40
#define public_42fa4b _public_42fa4b
#define public_42fa4e _public_42fa4e
#define public_42fa63 _public_42fa63
#define public_42fa71 _public_42fa71
#define public_42fa7f _public_42fa7f
#define public_42fa82 _public_42fa82
#define public_42fa96 _public_42fa96
#define public_42faa5 _public_42faa5
#define public_42fab4 _public_42fab4
#define public_42fab7 _public_42fab7
#define public_42fad7 _public_42fad7
#define public_42fb22 _public_42fb22
#define public_42fb35 _public_42fb35
#define public_42fb40 _public_42fb40
#define public_42fb43 _public_42fb43
#define public_42fb4e _public_42fb4e
#define public_42fb67 _public_42fb67
#define public_42fb97 _public_42fb97
#define public_42fbb1 _public_42fbb1
#define public_42fbe0 _public_42fbe0
#define public_42fbf3 _public_42fbf3
#define public_42fc00 _public_42fc00
#define public_42fc02 _public_42fc02
#define public_42fc0d _public_42fc0d
#define public_42fc2a _public_42fc2a
#define public_42fc45 _public_42fc45
#define public_42fc52 _public_42fc52
#define public_42fc54 _public_42fc54
#define public_42fc60 _public_42fc60
#define public_42fc96 _public_42fc96
#define public_42fcae _public_42fcae
#define public_42fcbe _public_42fcbe
#define public_42fcc8 _public_42fcc8
#define public_42fcf4 _public_42fcf4
#define public_42fd07 _public_42fd07
#define public_42fd12 _public_42fd12
#define public_42fd15 _public_42fd15
#define public_42fd1f _public_42fd1f
#define public_42fd54 _public_42fd54
#define public_42fd67 _public_42fd67
#define public_42fd74 _public_42fd74
#define public_42fd76 _public_42fd76
#define public_42fd79 _public_42fd79
#define public_42fd7c _public_42fd7c
#define public_42fd82 _public_42fd82

PROC_DECLARE(0x42f960, internal_42f960, public_42f960);
extern "C" NAKED register_t __cdecl internal_42f960()
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
        call public_430450
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_42f9a2
        mov eax, dword ptr ds : [esi+8]
        public_42f984 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_42fa40
        mov dword ptr ds : [ecx+4], eax
        jmp public_42fa4e
        public_42f9a2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_42f9ad
        mov eax, edx
        jmp public_42f984
        public_42f9ad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x91]
        test bl, bl
        jne public_42f9ce
        lea esp, ss:[esp]
        public_42f9c0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x91]
        test bl, bl
        je public_42f9c0
        public_42f9ce : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_42f984
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42f9ea
        mov dword ptr ds : [eax+4], ecx
        jmp public_42fa01
        public_42f9ea : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_42fa01 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_42fa0e
        mov dword ptr ds : [edx+4], ecx
        jmp public_42fa1c
        public_42fa0e : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_42fa19
        mov dword ptr ds : [edx], ecx
        jmp public_42fa1c
        public_42fa19 : nop
        mov dword ptr ds : [edx+8], ecx
        public_42fa1c : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x90]
        mov dl, byte ptr ds : [ecx+0x90]
        mov byte ptr ds : [ecx+0x90], bl
        mov byte ptr ds : [esi+0x90], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_42fab7
        public_42fa40 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_42fa4b
        mov dword ptr ds : [ecx], eax
        jmp public_42fa4e
        public_42fa4b : nop
        mov dword ptr ds : [ecx+8], eax
        public_42fa4e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_42fa82
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_42fa63
        mov edx, dword ptr ds : [esi+4]
        jmp public_42fa7f
        public_42fa63 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x91]
        test bl, bl
        mov edx, eax
        jne public_42fa7f
        public_42fa71 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x91]
        test bl, bl
        je public_42fa71
        public_42fa7f : nop
        mov dword ptr ss : [ebp], edx
        public_42fa82 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_42fab7
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_42fa96
        mov edx, dword ptr ds : [esi+4]
        jmp public_42fab4
        public_42fa96 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x91]
        test bl, bl
        mov edx, eax
        jne public_42fab4
        public_42faa5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x91]
        test bl, bl
        je public_42faa5
        public_42fab4 : nop
        mov dword ptr ss : [ebp+8], edx
        public_42fab7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x90]
        mov bl, 1
        cmp dl, bl
        jne public_42fd82
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_42fd7c
        public_42fad7 : nop
        cmp byte ptr ds : [eax+0x90], bl
        jne public_42fd7c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_42fbb1
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x90]
        test dl, dl
        jne public_42fb4e
        mov byte ptr ds : [ecx+0x90], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x90], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42fb22
        mov dword ptr ds : [esi+4], ecx
        public_42fb22 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42fb35
        mov dword ptr ds : [esi+4], edx
        jmp public_42fb43
        public_42fb35 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_42fb40
        mov dword ptr ds : [esi], edx
        jmp public_42fb43
        public_42fb40 : nop
        mov dword ptr ds : [esi+8], edx
        public_42fb43 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_42fb4e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x90], bl
        jne public_42fb67
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x90], bl
        je public_42fc2a
        public_42fb67 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x90], bl
        jne public_42fc60
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x90], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x90], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_42fb97
        mov dword ptr ds : [esi+4], ecx
        public_42fb97 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42fc45
        mov dword ptr ds : [esi+4], edx
        jmp public_42fc54
        public_42fbb1 : nop
        mov dl, byte ptr ds : [ecx+0x90]
        test dl, dl
        jne public_42fc0d
        mov byte ptr ds : [ecx+0x90], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x90], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_42fbe0
        mov dword ptr ds : [esi+4], ecx
        public_42fbe0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42fbf3
        mov dword ptr ds : [esi+4], edx
        jmp public_42fc02
        public_42fbf3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42fc00
        mov dword ptr ds : [esi+8], edx
        jmp public_42fc02
        public_42fc00 : nop
        mov dword ptr ds : [esi], edx
        public_42fc02 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_42fc0d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x90], bl
        jne public_42fcc8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x90], bl
        jne public_42fcc8
        public_42fc2a : nop
        mov byte ptr ds : [ecx+0x90], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_42fad7
        jmp public_42fd7c
        public_42fc45 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42fc52
        mov dword ptr ds : [esi+8], edx
        jmp public_42fc54
        public_42fc52 : nop
        mov dword ptr ds : [esi], edx
        public_42fc54 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_42fc60 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x90]
        mov byte ptr ds : [ecx+0x90], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x90], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x90], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42fc96
        mov dword ptr ds : [esi+4], ecx
        public_42fc96 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42fcae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_42fd79
        public_42fcae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_42fcbe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_42fd79
        public_42fcbe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_42fd79
        public_42fcc8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x90], bl
        jne public_42fd1f
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x90], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x90], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42fcf4
        mov dword ptr ds : [esi+4], ecx
        public_42fcf4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42fd07
        mov dword ptr ds : [esi+4], edx
        jmp public_42fd15
        public_42fd07 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_42fd12
        mov dword ptr ds : [esi], edx
        jmp public_42fd15
        public_42fd12 : nop
        mov dword ptr ds : [esi+8], edx
        public_42fd15 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_42fd1f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x90]
        mov byte ptr ds : [ecx+0x90], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x90], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x90], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_42fd54
        mov dword ptr ds : [esi+4], ecx
        public_42fd54 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42fd67
        mov dword ptr ds : [esi+4], edx
        jmp public_42fd76
        public_42fd67 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42fd74
        mov dword ptr ds : [esi+8], edx
        jmp public_42fd76
        public_42fd74 : nop
        mov dword ptr ds : [esi], edx
        public_42fd76 : nop
        mov dword ptr ds : [edx+8], ecx
        public_42fd79 : nop
        mov dword ptr ds : [ecx+4], edx
        public_42fd7c : nop
        mov byte ptr ds : [eax+0x90], bl
        public_42fd82 : nop
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
        UNREACHABLE_TRAP(0x42f960)
    }
}

#undef public_42f984
#undef public_42f9a2
#undef public_42f9ad
#undef public_42f9c0
#undef public_42f9ce
#undef public_42f9ea
#undef public_42fa01
#undef public_42fa0e
#undef public_42fa19
#undef public_42fa1c
#undef public_42fa40
#undef public_42fa4b
#undef public_42fa4e
#undef public_42fa63
#undef public_42fa71
#undef public_42fa7f
#undef public_42fa82
#undef public_42fa96
#undef public_42faa5
#undef public_42fab4
#undef public_42fab7
#undef public_42fad7
#undef public_42fb22
#undef public_42fb35
#undef public_42fb40
#undef public_42fb43
#undef public_42fb4e
#undef public_42fb67
#undef public_42fb97
#undef public_42fbb1
#undef public_42fbe0
#undef public_42fbf3
#undef public_42fc00
#undef public_42fc02
#undef public_42fc0d
#undef public_42fc2a
#undef public_42fc45
#undef public_42fc52
#undef public_42fc54
#undef public_42fc60
#undef public_42fc96
#undef public_42fcae
#undef public_42fcbe
#undef public_42fcc8
#undef public_42fcf4
#undef public_42fd07
#undef public_42fd12
#undef public_42fd15
#undef public_42fd1f
#undef public_42fd54
#undef public_42fd67
#undef public_42fd74
#undef public_42fd76
#undef public_42fd79
#undef public_42fd7c
#undef public_42fd82
