#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b6014 _public_62b6014
#define public_62b6032 _public_62b6032
#define public_62b603d _public_62b603d
#define public_62b6046 _public_62b6046
#define public_62b6051 _public_62b6051
#define public_62b606d _public_62b606d
#define public_62b6084 _public_62b6084
#define public_62b6091 _public_62b6091
#define public_62b609c _public_62b609c
#define public_62b609f _public_62b609f
#define public_62b60b7 _public_62b60b7
#define public_62b60c2 _public_62b60c2
#define public_62b60c5 _public_62b60c5
#define public_62b60da _public_62b60da
#define public_62b60e5 _public_62b60e5
#define public_62b60f0 _public_62b60f0
#define public_62b60f3 _public_62b60f3
#define public_62b6107 _public_62b6107
#define public_62b6113 _public_62b6113
#define public_62b611f _public_62b611f
#define public_62b6122 _public_62b6122
#define public_62b6140 _public_62b6140
#define public_62b617f _public_62b617f
#define public_62b6192 _public_62b6192
#define public_62b619d _public_62b619d
#define public_62b61a0 _public_62b61a0
#define public_62b61ab _public_62b61ab
#define public_62b61be _public_62b61be
#define public_62b61e5 _public_62b61e5
#define public_62b61ff _public_62b61ff
#define public_62b6225 _public_62b6225
#define public_62b6238 _public_62b6238
#define public_62b6245 _public_62b6245
#define public_62b6247 _public_62b6247
#define public_62b6252 _public_62b6252
#define public_62b6269 _public_62b6269
#define public_62b6281 _public_62b6281
#define public_62b628e _public_62b628e
#define public_62b6290 _public_62b6290
#define public_62b629c _public_62b629c
#define public_62b62c6 _public_62b62c6
#define public_62b62de _public_62b62de
#define public_62b62ee _public_62b62ee
#define public_62b62f8 _public_62b62f8
#define public_62b631b _public_62b631b
#define public_62b632e _public_62b632e
#define public_62b6339 _public_62b6339
#define public_62b633c _public_62b633c
#define public_62b6346 _public_62b6346
#define public_62b636f _public_62b636f
#define public_62b6382 _public_62b6382
#define public_62b638f _public_62b638f
#define public_62b6391 _public_62b6391
#define public_62b6394 _public_62b6394
#define public_62b6397 _public_62b6397
#define public_62b639a _public_62b639a

PROC_DECLARE(0x62b5ff0, internal_62b5ff0, public_62b5ff0);
extern "C" NAKED register_t __cdecl internal_62b5ff0()
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
        call public_628ffd0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_62b6032
        mov eax, dword ptr ds : [esi+8]
        public_62b6014 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_62b60b7
        mov dword ptr ds : [ecx+4], eax
        jmp public_62b60c5
        public_62b6032 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_62b603d
        mov eax, edx
        jmp public_62b6014
        public_62b603d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_62b6051
        public_62b6046 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_62b6046
        public_62b6051 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62b6014
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62b606d
        mov dword ptr ds : [eax+4], ecx
        jmp public_62b6084
        public_62b606d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_62b6084 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_62b6091
        mov dword ptr ds : [edx+4], ecx
        jmp public_62b609f
        public_62b6091 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_62b609c
        mov dword ptr ds : [edx], ecx
        jmp public_62b609f
        public_62b609c : nop
        mov dword ptr ds : [edx+8], ecx
        public_62b609f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [ecx+0x10], bl
        mov byte ptr ds : [esi+0x10], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62b6122
        public_62b60b7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_62b60c2
        mov dword ptr ds : [ecx], eax
        jmp public_62b60c5
        public_62b60c2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_62b60c5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_62b60f3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62b60da
        mov edx, dword ptr ds : [esi+4]
        jmp public_62b60f0
        public_62b60da : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_62b60f0
        public_62b60e5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_62b60e5
        public_62b60f0 : nop
        mov dword ptr ss : [ebp], edx
        public_62b60f3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_62b6122
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62b6107
        mov edx, dword ptr ds : [esi+4]
        jmp public_62b611f
        public_62b6107 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_62b611f
        public_62b6113 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_62b6113
        public_62b611f : nop
        mov dword ptr ss : [ebp+8], edx
        public_62b6122 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov bl, 1
        cmp dl, bl
        jne public_62b639a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_62b6397
        nop 
        public_62b6140 : nop
        cmp byte ptr ds : [eax+0x10], bl
        jne public_62b6397
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62b61ff
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_62b61ab
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62b617f
        mov dword ptr ds : [esi+4], ecx
        public_62b617f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62b6192
        mov dword ptr ds : [esi+4], edx
        jmp public_62b61a0
        public_62b6192 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62b619d
        mov dword ptr ds : [esi], edx
        jmp public_62b61a0
        public_62b619d : nop
        mov dword ptr ds : [esi+8], edx
        public_62b61a0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_62b61ab : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_62b61be
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        je public_62b6269
        public_62b61be : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_62b629c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62b61e5
        mov dword ptr ds : [esi+4], ecx
        public_62b61e5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62b6281
        mov dword ptr ds : [esi+4], edx
        jmp public_62b6290
        public_62b61ff : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_62b6252
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62b6225
        mov dword ptr ds : [esi+4], ecx
        public_62b6225 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62b6238
        mov dword ptr ds : [esi+4], edx
        jmp public_62b6247
        public_62b6238 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62b6245
        mov dword ptr ds : [esi+8], edx
        jmp public_62b6247
        public_62b6245 : nop
        mov dword ptr ds : [esi], edx
        public_62b6247 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_62b6252 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_62b62f8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_62b62f8
        public_62b6269 : nop
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62b6140
        jmp public_62b6397
        public_62b6281 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62b628e
        mov dword ptr ds : [esi+8], edx
        jmp public_62b6290
        public_62b628e : nop
        mov dword ptr ds : [esi], edx
        public_62b6290 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62b629c : nop
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
        je public_62b62c6
        mov dword ptr ds : [esi+4], ecx
        public_62b62c6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62b62de
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62b6394
        public_62b62de : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62b62ee
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62b6394
        public_62b62ee : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62b6394
        public_62b62f8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_62b6346
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62b631b
        mov dword ptr ds : [esi+4], ecx
        public_62b631b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62b632e
        mov dword ptr ds : [esi+4], edx
        jmp public_62b633c
        public_62b632e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62b6339
        mov dword ptr ds : [esi], edx
        jmp public_62b633c
        public_62b6339 : nop
        mov dword ptr ds : [esi+8], edx
        public_62b633c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_62b6346 : nop
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
        je public_62b636f
        mov dword ptr ds : [esi+4], ecx
        public_62b636f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62b6382
        mov dword ptr ds : [esi+4], edx
        jmp public_62b6391
        public_62b6382 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62b638f
        mov dword ptr ds : [esi+8], edx
        jmp public_62b6391
        public_62b638f : nop
        mov dword ptr ds : [esi], edx
        public_62b6391 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62b6394 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62b6397 : nop
        mov byte ptr ds : [eax+0x10], bl
        public_62b639a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x62b5ff0)
    }
}

#undef public_62b6014
#undef public_62b6032
#undef public_62b603d
#undef public_62b6046
#undef public_62b6051
#undef public_62b606d
#undef public_62b6084
#undef public_62b6091
#undef public_62b609c
#undef public_62b609f
#undef public_62b60b7
#undef public_62b60c2
#undef public_62b60c5
#undef public_62b60da
#undef public_62b60e5
#undef public_62b60f0
#undef public_62b60f3
#undef public_62b6107
#undef public_62b6113
#undef public_62b611f
#undef public_62b6122
#undef public_62b6140
#undef public_62b617f
#undef public_62b6192
#undef public_62b619d
#undef public_62b61a0
#undef public_62b61ab
#undef public_62b61be
#undef public_62b61e5
#undef public_62b61ff
#undef public_62b6225
#undef public_62b6238
#undef public_62b6245
#undef public_62b6247
#undef public_62b6252
#undef public_62b6269
#undef public_62b6281
#undef public_62b628e
#undef public_62b6290
#undef public_62b629c
#undef public_62b62c6
#undef public_62b62de
#undef public_62b62ee
#undef public_62b62f8
#undef public_62b631b
#undef public_62b632e
#undef public_62b6339
#undef public_62b633c
#undef public_62b6346
#undef public_62b636f
#undef public_62b6382
#undef public_62b638f
#undef public_62b6391
#undef public_62b6394
#undef public_62b6397
#undef public_62b639a
