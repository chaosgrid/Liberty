#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407cd0);
CLANG_FORWARD_PROC_SYMBOL(public_408550);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_407cf4 _public_407cf4
#define public_407d12 _public_407d12
#define public_407d1d _public_407d1d
#define public_407d26 _public_407d26
#define public_407d31 _public_407d31
#define public_407d4d _public_407d4d
#define public_407d64 _public_407d64
#define public_407d71 _public_407d71
#define public_407d7c _public_407d7c
#define public_407d7f _public_407d7f
#define public_407d97 _public_407d97
#define public_407da2 _public_407da2
#define public_407da5 _public_407da5
#define public_407dba _public_407dba
#define public_407dc5 _public_407dc5
#define public_407dd0 _public_407dd0
#define public_407dd3 _public_407dd3
#define public_407de7 _public_407de7
#define public_407df3 _public_407df3
#define public_407dff _public_407dff
#define public_407e02 _public_407e02
#define public_407e20 _public_407e20
#define public_407e5f _public_407e5f
#define public_407e72 _public_407e72
#define public_407e7d _public_407e7d
#define public_407e80 _public_407e80
#define public_407e8b _public_407e8b
#define public_407e9e _public_407e9e
#define public_407ec5 _public_407ec5
#define public_407edf _public_407edf
#define public_407f05 _public_407f05
#define public_407f18 _public_407f18
#define public_407f25 _public_407f25
#define public_407f27 _public_407f27
#define public_407f32 _public_407f32
#define public_407f49 _public_407f49
#define public_407f61 _public_407f61
#define public_407f6e _public_407f6e
#define public_407f70 _public_407f70
#define public_407f7c _public_407f7c
#define public_407fa6 _public_407fa6
#define public_407fbe _public_407fbe
#define public_407fce _public_407fce
#define public_407fd8 _public_407fd8
#define public_407ffb _public_407ffb
#define public_40800e _public_40800e
#define public_408019 _public_408019
#define public_40801c _public_40801c
#define public_408026 _public_408026
#define public_40804f _public_40804f
#define public_408062 _public_408062
#define public_40806f _public_40806f
#define public_408071 _public_408071
#define public_408074 _public_408074
#define public_408077 _public_408077
#define public_40807a _public_40807a

PROC_DECLARE(0x407cd0, internal_407cd0, public_407cd0);
extern "C" NAKED register_t __cdecl internal_407cd0()
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
        call public_408550
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_407d12
        mov eax, dword ptr ds : [esi+8]
        public_407cf4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_407d97
        mov dword ptr ds : [ecx+4], eax
        jmp public_407da5
        public_407d12 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_407d1d
        mov eax, edx
        jmp public_407cf4
        public_407d1d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_407d31
        public_407d26 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_407d26
        public_407d31 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_407cf4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_407d4d
        mov dword ptr ds : [eax+4], ecx
        jmp public_407d64
        public_407d4d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_407d64 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_407d71
        mov dword ptr ds : [edx+4], ecx
        jmp public_407d7f
        public_407d71 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_407d7c
        mov dword ptr ds : [edx], ecx
        jmp public_407d7f
        public_407d7c : nop
        mov dword ptr ds : [edx+8], ecx
        public_407d7f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [ecx+0x10], bl
        mov byte ptr ds : [esi+0x10], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_407e02
        public_407d97 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_407da2
        mov dword ptr ds : [ecx], eax
        jmp public_407da5
        public_407da2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_407da5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_407dd3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_407dba
        mov edx, dword ptr ds : [esi+4]
        jmp public_407dd0
        public_407dba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_407dd0
        public_407dc5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_407dc5
        public_407dd0 : nop
        mov dword ptr ss : [ebp], edx
        public_407dd3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_407e02
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_407de7
        mov edx, dword ptr ds : [esi+4]
        jmp public_407dff
        public_407de7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_407dff
        public_407df3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_407df3
        public_407dff : nop
        mov dword ptr ss : [ebp+8], edx
        public_407e02 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov bl, 1
        cmp dl, bl
        jne public_40807a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_408077
        nop 
        public_407e20 : nop
        cmp byte ptr ds : [eax+0x10], bl
        jne public_408077
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_407edf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_407e8b
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_407e5f
        mov dword ptr ds : [esi+4], ecx
        public_407e5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_407e72
        mov dword ptr ds : [esi+4], edx
        jmp public_407e80
        public_407e72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_407e7d
        mov dword ptr ds : [esi], edx
        jmp public_407e80
        public_407e7d : nop
        mov dword ptr ds : [esi+8], edx
        public_407e80 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_407e8b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_407e9e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        je public_407f49
        public_407e9e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_407f7c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_407ec5
        mov dword ptr ds : [esi+4], ecx
        public_407ec5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_407f61
        mov dword ptr ds : [esi+4], edx
        jmp public_407f70
        public_407edf : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_407f32
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_407f05
        mov dword ptr ds : [esi+4], ecx
        public_407f05 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_407f18
        mov dword ptr ds : [esi+4], edx
        jmp public_407f27
        public_407f18 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_407f25
        mov dword ptr ds : [esi+8], edx
        jmp public_407f27
        public_407f25 : nop
        mov dword ptr ds : [esi], edx
        public_407f27 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_407f32 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_407fd8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_407fd8
        public_407f49 : nop
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_407e20
        jmp public_408077
        public_407f61 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_407f6e
        mov dword ptr ds : [esi+8], edx
        jmp public_407f70
        public_407f6e : nop
        mov dword ptr ds : [esi], edx
        public_407f70 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_407f7c : nop
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
        je public_407fa6
        mov dword ptr ds : [esi+4], ecx
        public_407fa6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_407fbe
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_408074
        public_407fbe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_407fce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_408074
        public_407fce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_408074
        public_407fd8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_408026
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_407ffb
        mov dword ptr ds : [esi+4], ecx
        public_407ffb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_40800e
        mov dword ptr ds : [esi+4], edx
        jmp public_40801c
        public_40800e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_408019
        mov dword ptr ds : [esi], edx
        jmp public_40801c
        public_408019 : nop
        mov dword ptr ds : [esi+8], edx
        public_40801c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_408026 : nop
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
        je public_40804f
        mov dword ptr ds : [esi+4], ecx
        public_40804f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_408062
        mov dword ptr ds : [esi+4], edx
        jmp public_408071
        public_408062 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_40806f
        mov dword ptr ds : [esi+8], edx
        jmp public_408071
        public_40806f : nop
        mov dword ptr ds : [esi], edx
        public_408071 : nop
        mov dword ptr ds : [edx+8], ecx
        public_408074 : nop
        mov dword ptr ds : [ecx+4], edx
        public_408077 : nop
        mov byte ptr ds : [eax+0x10], bl
        public_40807a : nop
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
        UNREACHABLE_TRAP(0x407cd0)
    }
}

#undef public_407cf4
#undef public_407d12
#undef public_407d1d
#undef public_407d26
#undef public_407d31
#undef public_407d4d
#undef public_407d64
#undef public_407d71
#undef public_407d7c
#undef public_407d7f
#undef public_407d97
#undef public_407da2
#undef public_407da5
#undef public_407dba
#undef public_407dc5
#undef public_407dd0
#undef public_407dd3
#undef public_407de7
#undef public_407df3
#undef public_407dff
#undef public_407e02
#undef public_407e20
#undef public_407e5f
#undef public_407e72
#undef public_407e7d
#undef public_407e80
#undef public_407e8b
#undef public_407e9e
#undef public_407ec5
#undef public_407edf
#undef public_407f05
#undef public_407f18
#undef public_407f25
#undef public_407f27
#undef public_407f32
#undef public_407f49
#undef public_407f61
#undef public_407f6e
#undef public_407f70
#undef public_407f7c
#undef public_407fa6
#undef public_407fbe
#undef public_407fce
#undef public_407fd8
#undef public_407ffb
#undef public_40800e
#undef public_408019
#undef public_40801c
#undef public_408026
#undef public_40804f
#undef public_408062
#undef public_40806f
#undef public_408071
#undef public_408074
#undef public_408077
#undef public_40807a
