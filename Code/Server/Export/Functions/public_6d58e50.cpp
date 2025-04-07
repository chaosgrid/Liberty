#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d58e74 _public_6d58e74
#define public_6d58e92 _public_6d58e92
#define public_6d58e9d _public_6d58e9d
#define public_6d58ea6 _public_6d58ea6
#define public_6d58eb1 _public_6d58eb1
#define public_6d58ecd _public_6d58ecd
#define public_6d58ee4 _public_6d58ee4
#define public_6d58ef1 _public_6d58ef1
#define public_6d58efc _public_6d58efc
#define public_6d58eff _public_6d58eff
#define public_6d58f17 _public_6d58f17
#define public_6d58f22 _public_6d58f22
#define public_6d58f25 _public_6d58f25
#define public_6d58f3a _public_6d58f3a
#define public_6d58f45 _public_6d58f45
#define public_6d58f50 _public_6d58f50
#define public_6d58f53 _public_6d58f53
#define public_6d58f67 _public_6d58f67
#define public_6d58f73 _public_6d58f73
#define public_6d58f7f _public_6d58f7f
#define public_6d58f82 _public_6d58f82
#define public_6d58fa0 _public_6d58fa0
#define public_6d58fdf _public_6d58fdf
#define public_6d58ff2 _public_6d58ff2
#define public_6d58ffd _public_6d58ffd
#define public_6d59000 _public_6d59000
#define public_6d5900b _public_6d5900b
#define public_6d5901e _public_6d5901e
#define public_6d59045 _public_6d59045
#define public_6d5905f _public_6d5905f
#define public_6d59085 _public_6d59085
#define public_6d59098 _public_6d59098
#define public_6d590a5 _public_6d590a5
#define public_6d590a7 _public_6d590a7
#define public_6d590b2 _public_6d590b2
#define public_6d590c9 _public_6d590c9
#define public_6d590e1 _public_6d590e1
#define public_6d590ee _public_6d590ee
#define public_6d590f0 _public_6d590f0
#define public_6d590fc _public_6d590fc
#define public_6d59126 _public_6d59126
#define public_6d5913e _public_6d5913e
#define public_6d5914e _public_6d5914e
#define public_6d59158 _public_6d59158
#define public_6d5917b _public_6d5917b
#define public_6d5918e _public_6d5918e
#define public_6d59199 _public_6d59199
#define public_6d5919c _public_6d5919c
#define public_6d591a6 _public_6d591a6
#define public_6d591cf _public_6d591cf
#define public_6d591e2 _public_6d591e2
#define public_6d591ef _public_6d591ef
#define public_6d591f1 _public_6d591f1
#define public_6d591f4 _public_6d591f4
#define public_6d591f7 _public_6d591f7
#define public_6d591fa _public_6d591fa

PROC_DECLARE(0x6d58e50, internal_6d58e50, public_6d58e50);
extern "C" NAKED register_t __cdecl internal_6d58e50()
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
        call public_6d160d0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6d58e92
        mov eax, dword ptr ds : [esi+8]
        public_6d58e74 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6d58f17
        mov dword ptr ds : [ecx+4], eax
        jmp public_6d58f25
        public_6d58e92 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6d58e9d
        mov eax, edx
        jmp public_6d58e74
        public_6d58e9d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6d58eb1
        public_6d58ea6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6d58ea6
        public_6d58eb1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d58e74
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d58ecd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d58ee4
        public_6d58ecd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6d58ee4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6d58ef1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d58eff
        public_6d58ef1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6d58efc
        mov dword ptr ds : [edx], ecx
        jmp public_6d58eff
        public_6d58efc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d58eff : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d58f82
        public_6d58f17 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6d58f22
        mov dword ptr ds : [ecx], eax
        jmp public_6d58f25
        public_6d58f22 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6d58f25 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6d58f53
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d58f3a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d58f50
        public_6d58f3a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6d58f50
        public_6d58f45 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6d58f45
        public_6d58f50 : nop
        mov dword ptr ss : [ebp], edx
        public_6d58f53 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d58f82
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d58f67
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d58f7f
        public_6d58f67 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6d58f7f
        public_6d58f73 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6d58f73
        public_6d58f7f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6d58f82 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_6d591fa
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6d591f7
        nop 
        public_6d58fa0 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6d591f7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d5905f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6d5900b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d58fdf
        mov dword ptr ds : [esi+4], ecx
        public_6d58fdf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d58ff2
        mov dword ptr ds : [esi+4], edx
        jmp public_6d59000
        public_6d58ff2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d58ffd
        mov dword ptr ds : [esi], edx
        jmp public_6d59000
        public_6d58ffd : nop
        mov dword ptr ds : [esi+8], edx
        public_6d59000 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6d5900b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d5901e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6d590c9
        public_6d5901e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d590fc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d59045
        mov dword ptr ds : [esi+4], ecx
        public_6d59045 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d590e1
        mov dword ptr ds : [esi+4], edx
        jmp public_6d590f0
        public_6d5905f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6d590b2
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d59085
        mov dword ptr ds : [esi+4], ecx
        public_6d59085 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d59098
        mov dword ptr ds : [esi+4], edx
        jmp public_6d590a7
        public_6d59098 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d590a5
        mov dword ptr ds : [esi+8], edx
        jmp public_6d590a7
        public_6d590a5 : nop
        mov dword ptr ds : [esi], edx
        public_6d590a7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6d590b2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d59158
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d59158
        public_6d590c9 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d58fa0
        jmp public_6d591f7
        public_6d590e1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d590ee
        mov dword ptr ds : [esi+8], edx
        jmp public_6d590f0
        public_6d590ee : nop
        mov dword ptr ds : [esi], edx
        public_6d590f0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d590fc : nop
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
        je public_6d59126
        mov dword ptr ds : [esi+4], ecx
        public_6d59126 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d5913e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d591f4
        public_6d5913e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d5914e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d591f4
        public_6d5914e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d591f4
        public_6d59158 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d591a6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d5917b
        mov dword ptr ds : [esi+4], ecx
        public_6d5917b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d5918e
        mov dword ptr ds : [esi+4], edx
        jmp public_6d5919c
        public_6d5918e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d59199
        mov dword ptr ds : [esi], edx
        jmp public_6d5919c
        public_6d59199 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d5919c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6d591a6 : nop
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
        je public_6d591cf
        mov dword ptr ds : [esi+4], ecx
        public_6d591cf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d591e2
        mov dword ptr ds : [esi+4], edx
        jmp public_6d591f1
        public_6d591e2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d591ef
        mov dword ptr ds : [esi+8], edx
        jmp public_6d591f1
        public_6d591ef : nop
        mov dword ptr ds : [esi], edx
        public_6d591f1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d591f4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d591f7 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6d591fa : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6d5ffb0
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
        UNREACHABLE_TRAP(0x6d58e50)
    }
}

#undef public_6d58e74
#undef public_6d58e92
#undef public_6d58e9d
#undef public_6d58ea6
#undef public_6d58eb1
#undef public_6d58ecd
#undef public_6d58ee4
#undef public_6d58ef1
#undef public_6d58efc
#undef public_6d58eff
#undef public_6d58f17
#undef public_6d58f22
#undef public_6d58f25
#undef public_6d58f3a
#undef public_6d58f45
#undef public_6d58f50
#undef public_6d58f53
#undef public_6d58f67
#undef public_6d58f73
#undef public_6d58f7f
#undef public_6d58f82
#undef public_6d58fa0
#undef public_6d58fdf
#undef public_6d58ff2
#undef public_6d58ffd
#undef public_6d59000
#undef public_6d5900b
#undef public_6d5901e
#undef public_6d59045
#undef public_6d5905f
#undef public_6d59085
#undef public_6d59098
#undef public_6d590a5
#undef public_6d590a7
#undef public_6d590b2
#undef public_6d590c9
#undef public_6d590e1
#undef public_6d590ee
#undef public_6d590f0
#undef public_6d590fc
#undef public_6d59126
#undef public_6d5913e
#undef public_6d5914e
#undef public_6d59158
#undef public_6d5917b
#undef public_6d5918e
#undef public_6d59199
#undef public_6d5919c
#undef public_6d591a6
#undef public_6d591cf
#undef public_6d591e2
#undef public_6d591ef
#undef public_6d591f1
#undef public_6d591f4
#undef public_6d591f7
#undef public_6d591fa
