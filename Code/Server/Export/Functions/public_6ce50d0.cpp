#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce50d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5d70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f120);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce50f4 _public_6ce50f4
#define public_6ce5112 _public_6ce5112
#define public_6ce511d _public_6ce511d
#define public_6ce5126 _public_6ce5126
#define public_6ce5131 _public_6ce5131
#define public_6ce514d _public_6ce514d
#define public_6ce5164 _public_6ce5164
#define public_6ce5171 _public_6ce5171
#define public_6ce517c _public_6ce517c
#define public_6ce517f _public_6ce517f
#define public_6ce5197 _public_6ce5197
#define public_6ce51a2 _public_6ce51a2
#define public_6ce51a5 _public_6ce51a5
#define public_6ce51ba _public_6ce51ba
#define public_6ce51c5 _public_6ce51c5
#define public_6ce51d0 _public_6ce51d0
#define public_6ce51d3 _public_6ce51d3
#define public_6ce51e7 _public_6ce51e7
#define public_6ce51f3 _public_6ce51f3
#define public_6ce51ff _public_6ce51ff
#define public_6ce5202 _public_6ce5202
#define public_6ce5220 _public_6ce5220
#define public_6ce525f _public_6ce525f
#define public_6ce5272 _public_6ce5272
#define public_6ce527d _public_6ce527d
#define public_6ce5280 _public_6ce5280
#define public_6ce528b _public_6ce528b
#define public_6ce529e _public_6ce529e
#define public_6ce52c5 _public_6ce52c5
#define public_6ce52df _public_6ce52df
#define public_6ce5305 _public_6ce5305
#define public_6ce5318 _public_6ce5318
#define public_6ce5325 _public_6ce5325
#define public_6ce5327 _public_6ce5327
#define public_6ce5332 _public_6ce5332
#define public_6ce5349 _public_6ce5349
#define public_6ce5361 _public_6ce5361
#define public_6ce536e _public_6ce536e
#define public_6ce5370 _public_6ce5370
#define public_6ce537c _public_6ce537c
#define public_6ce53a6 _public_6ce53a6
#define public_6ce53be _public_6ce53be
#define public_6ce53ce _public_6ce53ce
#define public_6ce53d8 _public_6ce53d8
#define public_6ce53fb _public_6ce53fb
#define public_6ce540e _public_6ce540e
#define public_6ce5419 _public_6ce5419
#define public_6ce541c _public_6ce541c
#define public_6ce5426 _public_6ce5426
#define public_6ce544f _public_6ce544f
#define public_6ce5462 _public_6ce5462
#define public_6ce546f _public_6ce546f
#define public_6ce5471 _public_6ce5471
#define public_6ce5474 _public_6ce5474
#define public_6ce5477 _public_6ce5477
#define public_6ce547e _public_6ce547e

PROC_DECLARE(0x6ce50d0, internal_6ce50d0, public_6ce50d0);
extern "C" NAKED register_t __cdecl internal_6ce50d0()
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
        call public_6d3f120
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ce5112
        mov eax, dword ptr ds : [esi+8]
        public_6ce50f4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ce5197
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ce51a5
        public_6ce5112 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ce511d
        mov eax, edx
        jmp public_6ce50f4
        public_6ce511d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6ce5131
        public_6ce5126 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6ce5126
        public_6ce5131 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ce50f4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce514d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ce5164
        public_6ce514d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ce5164 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ce5171
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ce517f
        public_6ce5171 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ce517c
        mov dword ptr ds : [edx], ecx
        jmp public_6ce517f
        public_6ce517c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ce517f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x28]
        mov dl, byte ptr ds : [ecx+0x28]
        mov byte ptr ds : [ecx+0x28], bl
        mov byte ptr ds : [esi+0x28], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ce5202
        public_6ce5197 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ce51a2
        mov dword ptr ds : [ecx], eax
        jmp public_6ce51a5
        public_6ce51a2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ce51a5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ce51d3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ce51ba
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ce51d0
        public_6ce51ba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6ce51d0
        public_6ce51c5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6ce51c5
        public_6ce51d0 : nop
        mov dword ptr ss : [ebp], edx
        public_6ce51d3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ce5202
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ce51e7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ce51ff
        public_6ce51e7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6ce51ff
        public_6ce51f3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6ce51f3
        public_6ce51ff : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ce5202 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x28]
        mov bl, 1
        cmp cl, bl
        jne public_6ce547e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ce5477
        nop 
        public_6ce5220 : nop
        cmp byte ptr ds : [eax+0x28], bl
        jne public_6ce5477
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ce52df
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6ce528b
        mov byte ptr ds : [ecx+0x28], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce525f
        mov dword ptr ds : [esi+4], ecx
        public_6ce525f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce5272
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce5280
        public_6ce5272 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce527d
        mov dword ptr ds : [esi], edx
        jmp public_6ce5280
        public_6ce527d : nop
        mov dword ptr ds : [esi+8], edx
        public_6ce5280 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ce528b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6ce529e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        je public_6ce5349
        public_6ce529e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6ce537c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce52c5
        mov dword ptr ds : [esi+4], ecx
        public_6ce52c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce5361
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce5370
        public_6ce52df : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6ce5332
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce5305
        mov dword ptr ds : [esi+4], ecx
        public_6ce5305 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce5318
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce5327
        public_6ce5318 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce5325
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce5327
        public_6ce5325 : nop
        mov dword ptr ds : [esi], edx
        public_6ce5327 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ce5332 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6ce53d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6ce53d8
        public_6ce5349 : nop
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ce5220
        jmp public_6ce5477
        public_6ce5361 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce536e
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce5370
        public_6ce536e : nop
        mov dword ptr ds : [esi], edx
        public_6ce5370 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ce537c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce53a6
        mov dword ptr ds : [esi+4], ecx
        public_6ce53a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce53be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce5474
        public_6ce53be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce53ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce5474
        public_6ce53ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce5474
        public_6ce53d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6ce5426
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce53fb
        mov dword ptr ds : [esi+4], ecx
        public_6ce53fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce540e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce541c
        public_6ce540e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce5419
        mov dword ptr ds : [esi], edx
        jmp public_6ce541c
        public_6ce5419 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ce541c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ce5426 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce544f
        mov dword ptr ds : [esi+4], ecx
        public_6ce544f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce5462
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce5471
        public_6ce5462 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce546f
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce5471
        public_6ce546f : nop
        mov dword ptr ds : [esi], edx
        public_6ce5471 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ce5474 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ce5477 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x28], bl
        public_6ce547e : nop
        lea ecx, ds:[esi+0xC]
        call public_6ce5d70
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
        UNREACHABLE_TRAP(0x6ce50d0)
    }
}

#undef public_6ce50f4
#undef public_6ce5112
#undef public_6ce511d
#undef public_6ce5126
#undef public_6ce5131
#undef public_6ce514d
#undef public_6ce5164
#undef public_6ce5171
#undef public_6ce517c
#undef public_6ce517f
#undef public_6ce5197
#undef public_6ce51a2
#undef public_6ce51a5
#undef public_6ce51ba
#undef public_6ce51c5
#undef public_6ce51d0
#undef public_6ce51d3
#undef public_6ce51e7
#undef public_6ce51f3
#undef public_6ce51ff
#undef public_6ce5202
#undef public_6ce5220
#undef public_6ce525f
#undef public_6ce5272
#undef public_6ce527d
#undef public_6ce5280
#undef public_6ce528b
#undef public_6ce529e
#undef public_6ce52c5
#undef public_6ce52df
#undef public_6ce5305
#undef public_6ce5318
#undef public_6ce5325
#undef public_6ce5327
#undef public_6ce5332
#undef public_6ce5349
#undef public_6ce5361
#undef public_6ce536e
#undef public_6ce5370
#undef public_6ce537c
#undef public_6ce53a6
#undef public_6ce53be
#undef public_6ce53ce
#undef public_6ce53d8
#undef public_6ce53fb
#undef public_6ce540e
#undef public_6ce5419
#undef public_6ce541c
#undef public_6ce5426
#undef public_6ce544f
#undef public_6ce5462
#undef public_6ce546f
#undef public_6ce5471
#undef public_6ce5474
#undef public_6ce5477
#undef public_6ce547e
