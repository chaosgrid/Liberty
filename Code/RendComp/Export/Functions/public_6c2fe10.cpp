#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2fe10);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2fe34 _public_6c2fe34
#define public_6c2fe52 _public_6c2fe52
#define public_6c2fe5d _public_6c2fe5d
#define public_6c2fe66 _public_6c2fe66
#define public_6c2fe71 _public_6c2fe71
#define public_6c2fe8d _public_6c2fe8d
#define public_6c2fea4 _public_6c2fea4
#define public_6c2feb1 _public_6c2feb1
#define public_6c2febc _public_6c2febc
#define public_6c2febf _public_6c2febf
#define public_6c2fed7 _public_6c2fed7
#define public_6c2fee2 _public_6c2fee2
#define public_6c2fee5 _public_6c2fee5
#define public_6c2fefa _public_6c2fefa
#define public_6c2ff05 _public_6c2ff05
#define public_6c2ff10 _public_6c2ff10
#define public_6c2ff13 _public_6c2ff13
#define public_6c2ff27 _public_6c2ff27
#define public_6c2ff33 _public_6c2ff33
#define public_6c2ff3f _public_6c2ff3f
#define public_6c2ff42 _public_6c2ff42
#define public_6c2ff60 _public_6c2ff60
#define public_6c2ff9f _public_6c2ff9f
#define public_6c2ffb2 _public_6c2ffb2
#define public_6c2ffbd _public_6c2ffbd
#define public_6c2ffc0 _public_6c2ffc0
#define public_6c2ffcb _public_6c2ffcb
#define public_6c2ffde _public_6c2ffde
#define public_6c30005 _public_6c30005
#define public_6c3001f _public_6c3001f
#define public_6c30045 _public_6c30045
#define public_6c30058 _public_6c30058
#define public_6c30065 _public_6c30065
#define public_6c30067 _public_6c30067
#define public_6c30072 _public_6c30072
#define public_6c30089 _public_6c30089
#define public_6c300a1 _public_6c300a1
#define public_6c300ae _public_6c300ae
#define public_6c300b0 _public_6c300b0
#define public_6c300bc _public_6c300bc
#define public_6c300e6 _public_6c300e6
#define public_6c300fe _public_6c300fe
#define public_6c3010e _public_6c3010e
#define public_6c30118 _public_6c30118
#define public_6c3013b _public_6c3013b
#define public_6c3014e _public_6c3014e
#define public_6c30159 _public_6c30159
#define public_6c3015c _public_6c3015c
#define public_6c30166 _public_6c30166
#define public_6c3018f _public_6c3018f
#define public_6c301a2 _public_6c301a2
#define public_6c301af _public_6c301af
#define public_6c301b1 _public_6c301b1
#define public_6c301b4 _public_6c301b4
#define public_6c301bb _public_6c301bb
#define public_6c301be _public_6c301be
#define public_6c301d2 _public_6c301d2

PROC_DECLARE(0x6c2fe10, internal_6c2fe10, public_6c2fe10);
extern "C" NAKED register_t __cdecl internal_6c2fe10()
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
        call public_6c304a0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6c2fe52
        mov eax, dword ptr ds : [esi+8]
        public_6c2fe34 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6c2fed7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6c2fee5
        public_6c2fe52 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6c2fe5d
        mov eax, edx
        jmp public_6c2fe34
        public_6c2fe5d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6c2fe71
        public_6c2fe66 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6c2fe66
        public_6c2fe71 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6c2fe34
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c2fe8d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6c2fea4
        public_6c2fe8d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6c2fea4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6c2feb1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c2febf
        public_6c2feb1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6c2febc
        mov dword ptr ds : [edx], ecx
        jmp public_6c2febf
        public_6c2febc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c2febf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6c2ff42
        public_6c2fed7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6c2fee2
        mov dword ptr ds : [ecx], eax
        jmp public_6c2fee5
        public_6c2fee2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6c2fee5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6c2ff13
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c2fefa
        mov edx, dword ptr ds : [esi+4]
        jmp public_6c2ff10
        public_6c2fefa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6c2ff10
        public_6c2ff05 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6c2ff05
        public_6c2ff10 : nop
        mov dword ptr ss : [ebp], edx
        public_6c2ff13 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6c2ff42
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c2ff27
        mov edx, dword ptr ds : [esi+4]
        jmp public_6c2ff3f
        public_6c2ff27 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6c2ff3f
        public_6c2ff33 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6c2ff33
        public_6c2ff3f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6c2ff42 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ss : [ebp+0x14]
        mov bl, 1
        cmp cl, bl
        jne public_6c301be
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6c301bb
        nop 
        public_6c2ff60 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6c301bb
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6c3001f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c2ffcb
        mov byte ptr ds : [ecx+0x14], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c2ff9f
        mov dword ptr ds : [esi+4], ecx
        public_6c2ff9f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c2ffb2
        mov dword ptr ds : [esi+4], edx
        jmp public_6c2ffc0
        public_6c2ffb2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6c2ffbd
        mov dword ptr ds : [esi], edx
        jmp public_6c2ffc0
        public_6c2ffbd : nop
        mov dword ptr ds : [esi+8], edx
        public_6c2ffc0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6c2ffcb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c2ffde
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6c30089
        public_6c2ffde : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c300bc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c30005
        mov dword ptr ds : [esi+4], ecx
        public_6c30005 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c300a1
        mov dword ptr ds : [esi+4], edx
        jmp public_6c300b0
        public_6c3001f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c30072
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c30045
        mov dword ptr ds : [esi+4], ecx
        public_6c30045 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c30058
        mov dword ptr ds : [esi+4], edx
        jmp public_6c30067
        public_6c30058 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c30065
        mov dword ptr ds : [esi+8], edx
        jmp public_6c30067
        public_6c30065 : nop
        mov dword ptr ds : [esi], edx
        public_6c30067 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6c30072 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c30118
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c30118
        public_6c30089 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6c2ff60
        jmp public_6c301bb
        public_6c300a1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c300ae
        mov dword ptr ds : [esi+8], edx
        jmp public_6c300b0
        public_6c300ae : nop
        mov dword ptr ds : [esi], edx
        public_6c300b0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6c300bc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c300e6
        mov dword ptr ds : [esi+4], ecx
        public_6c300e6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c300fe
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6c301b4
        public_6c300fe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6c3010e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6c301b4
        public_6c3010e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6c301b4
        public_6c30118 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6c30166
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c3013b
        mov dword ptr ds : [esi+4], ecx
        public_6c3013b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c3014e
        mov dword ptr ds : [esi+4], edx
        jmp public_6c3015c
        public_6c3014e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6c30159
        mov dword ptr ds : [esi], edx
        jmp public_6c3015c
        public_6c30159 : nop
        mov dword ptr ds : [esi+8], edx
        public_6c3015c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6c30166 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c3018f
        mov dword ptr ds : [esi+4], ecx
        public_6c3018f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6c301a2
        mov dword ptr ds : [esi+4], edx
        jmp public_6c301b1
        public_6c301a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6c301af
        mov dword ptr ds : [esi+8], edx
        jmp public_6c301b1
        public_6c301af : nop
        mov dword ptr ds : [esi], edx
        public_6c301b1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c301b4 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        public_6c301bb : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6c301be : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6c301d2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp+0x10], 0
        public_6c301d2 : nop
        push ebp
        call public_6c34ea0
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
        UNREACHABLE_TRAP(0x6c2fe10)
    }
}

#undef public_6c2fe34
#undef public_6c2fe52
#undef public_6c2fe5d
#undef public_6c2fe66
#undef public_6c2fe71
#undef public_6c2fe8d
#undef public_6c2fea4
#undef public_6c2feb1
#undef public_6c2febc
#undef public_6c2febf
#undef public_6c2fed7
#undef public_6c2fee2
#undef public_6c2fee5
#undef public_6c2fefa
#undef public_6c2ff05
#undef public_6c2ff10
#undef public_6c2ff13
#undef public_6c2ff27
#undef public_6c2ff33
#undef public_6c2ff3f
#undef public_6c2ff42
#undef public_6c2ff60
#undef public_6c2ff9f
#undef public_6c2ffb2
#undef public_6c2ffbd
#undef public_6c2ffc0
#undef public_6c2ffcb
#undef public_6c2ffde
#undef public_6c30005
#undef public_6c3001f
#undef public_6c30045
#undef public_6c30058
#undef public_6c30065
#undef public_6c30067
#undef public_6c30072
#undef public_6c30089
#undef public_6c300a1
#undef public_6c300ae
#undef public_6c300b0
#undef public_6c300bc
#undef public_6c300e6
#undef public_6c300fe
#undef public_6c3010e
#undef public_6c30118
#undef public_6c3013b
#undef public_6c3014e
#undef public_6c30159
#undef public_6c3015c
#undef public_6c30166
#undef public_6c3018f
#undef public_6c301a2
#undef public_6c301af
#undef public_6c301b1
#undef public_6c301b4
#undef public_6c301bb
#undef public_6c301be
#undef public_6c301d2
