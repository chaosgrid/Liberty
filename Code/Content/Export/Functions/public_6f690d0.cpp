#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f690d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f690f4 _public_6f690f4
#define public_6f69112 _public_6f69112
#define public_6f6911d _public_6f6911d
#define public_6f69126 _public_6f69126
#define public_6f69131 _public_6f69131
#define public_6f6914d _public_6f6914d
#define public_6f69164 _public_6f69164
#define public_6f69171 _public_6f69171
#define public_6f6917c _public_6f6917c
#define public_6f6917f _public_6f6917f
#define public_6f69197 _public_6f69197
#define public_6f691a2 _public_6f691a2
#define public_6f691a5 _public_6f691a5
#define public_6f691ba _public_6f691ba
#define public_6f691c5 _public_6f691c5
#define public_6f691d0 _public_6f691d0
#define public_6f691d3 _public_6f691d3
#define public_6f691e7 _public_6f691e7
#define public_6f691f3 _public_6f691f3
#define public_6f691ff _public_6f691ff
#define public_6f69202 _public_6f69202
#define public_6f69220 _public_6f69220
#define public_6f6925f _public_6f6925f
#define public_6f69272 _public_6f69272
#define public_6f6927d _public_6f6927d
#define public_6f69280 _public_6f69280
#define public_6f6928b _public_6f6928b
#define public_6f6929e _public_6f6929e
#define public_6f692c5 _public_6f692c5
#define public_6f692df _public_6f692df
#define public_6f69305 _public_6f69305
#define public_6f69318 _public_6f69318
#define public_6f69325 _public_6f69325
#define public_6f69327 _public_6f69327
#define public_6f69332 _public_6f69332
#define public_6f69349 _public_6f69349
#define public_6f69361 _public_6f69361
#define public_6f6936e _public_6f6936e
#define public_6f69370 _public_6f69370
#define public_6f6937c _public_6f6937c
#define public_6f693a6 _public_6f693a6
#define public_6f693be _public_6f693be
#define public_6f693ce _public_6f693ce
#define public_6f693d8 _public_6f693d8
#define public_6f693fb _public_6f693fb
#define public_6f6940e _public_6f6940e
#define public_6f69419 _public_6f69419
#define public_6f6941c _public_6f6941c
#define public_6f69426 _public_6f69426
#define public_6f6944f _public_6f6944f
#define public_6f69462 _public_6f69462
#define public_6f6946f _public_6f6946f
#define public_6f69471 _public_6f69471
#define public_6f69474 _public_6f69474
#define public_6f69477 _public_6f69477
#define public_6f6947e _public_6f6947e

PROC_DECLARE(0x6f690d0, internal_6f690d0, public_6f690d0);
extern "C" NAKED register_t __cdecl internal_6f690d0()
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
        jne public_6f69112
        mov eax, dword ptr ds : [esi+8]
        public_6f690f4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f69197
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f691a5
        public_6f69112 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f6911d
        mov eax, edx
        jmp public_6f690f4
        public_6f6911d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f69131
        public_6f69126 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f69126
        public_6f69131 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f690f4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f6914d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f69164
        public_6f6914d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f69164 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f69171
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f6917f
        public_6f69171 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f6917c
        mov dword ptr ds : [edx], ecx
        jmp public_6f6917f
        public_6f6917c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f6917f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f69202
        public_6f69197 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f691a2
        mov dword ptr ds : [ecx], eax
        jmp public_6f691a5
        public_6f691a2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f691a5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f691d3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f691ba
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f691d0
        public_6f691ba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6f691d0
        public_6f691c5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f691c5
        public_6f691d0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f691d3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f69202
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f691e7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f691ff
        public_6f691e7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6f691ff
        public_6f691f3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f691f3
        public_6f691ff : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f69202 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x1C]
        mov bl, 1
        cmp cl, bl
        jne public_6f6947e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f69477
        nop 
        public_6f69220 : nop
        cmp byte ptr ds : [eax+0x1C], bl
        jne public_6f69477
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f692df
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f6928b
        mov byte ptr ds : [ecx+0x1C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f6925f
        mov dword ptr ds : [esi+4], ecx
        public_6f6925f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f69272
        mov dword ptr ds : [esi+4], edx
        jmp public_6f69280
        public_6f69272 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f6927d
        mov dword ptr ds : [esi], edx
        jmp public_6f69280
        public_6f6927d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f69280 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f6928b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f6929e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        je public_6f69349
        public_6f6929e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f6937c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f692c5
        mov dword ptr ds : [esi+4], ecx
        public_6f692c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f69361
        mov dword ptr ds : [esi+4], edx
        jmp public_6f69370
        public_6f692df : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f69332
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f69305
        mov dword ptr ds : [esi+4], ecx
        public_6f69305 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f69318
        mov dword ptr ds : [esi+4], edx
        jmp public_6f69327
        public_6f69318 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f69325
        mov dword ptr ds : [esi+8], edx
        jmp public_6f69327
        public_6f69325 : nop
        mov dword ptr ds : [esi], edx
        public_6f69327 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f69332 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f693d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f693d8
        public_6f69349 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f69220
        jmp public_6f69477
        public_6f69361 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f6936e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f69370
        public_6f6936e : nop
        mov dword ptr ds : [esi], edx
        public_6f69370 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f6937c : nop
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
        je public_6f693a6
        mov dword ptr ds : [esi+4], ecx
        public_6f693a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f693be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f69474
        public_6f693be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f693ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f69474
        public_6f693ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f69474
        public_6f693d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f69426
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f693fb
        mov dword ptr ds : [esi+4], ecx
        public_6f693fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f6940e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f6941c
        public_6f6940e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f69419
        mov dword ptr ds : [esi], edx
        jmp public_6f6941c
        public_6f69419 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f6941c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f69426 : nop
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
        je public_6f6944f
        mov dword ptr ds : [esi+4], ecx
        public_6f6944f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f69462
        mov dword ptr ds : [esi+4], edx
        jmp public_6f69471
        public_6f69462 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f6946f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f69471
        public_6f6946f : nop
        mov dword ptr ds : [esi], edx
        public_6f69471 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f69474 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f69477 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x1C], bl
        public_6f6947e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f68ff0
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
        UNREACHABLE_TRAP(0x6f690d0)
    }
}

#undef public_6f690f4
#undef public_6f69112
#undef public_6f6911d
#undef public_6f69126
#undef public_6f69131
#undef public_6f6914d
#undef public_6f69164
#undef public_6f69171
#undef public_6f6917c
#undef public_6f6917f
#undef public_6f69197
#undef public_6f691a2
#undef public_6f691a5
#undef public_6f691ba
#undef public_6f691c5
#undef public_6f691d0
#undef public_6f691d3
#undef public_6f691e7
#undef public_6f691f3
#undef public_6f691ff
#undef public_6f69202
#undef public_6f69220
#undef public_6f6925f
#undef public_6f69272
#undef public_6f6927d
#undef public_6f69280
#undef public_6f6928b
#undef public_6f6929e
#undef public_6f692c5
#undef public_6f692df
#undef public_6f69305
#undef public_6f69318
#undef public_6f69325
#undef public_6f69327
#undef public_6f69332
#undef public_6f69349
#undef public_6f69361
#undef public_6f6936e
#undef public_6f69370
#undef public_6f6937c
#undef public_6f693a6
#undef public_6f693be
#undef public_6f693ce
#undef public_6f693d8
#undef public_6f693fb
#undef public_6f6940e
#undef public_6f69419
#undef public_6f6941c
#undef public_6f69426
#undef public_6f6944f
#undef public_6f69462
#undef public_6f6946f
#undef public_6f69471
#undef public_6f69474
#undef public_6f69477
#undef public_6f6947e
