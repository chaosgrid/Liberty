#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f99890);
CLANG_FORWARD_PROC_SYMBOL(public_6fa21d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa21f4 _public_6fa21f4
#define public_6fa2212 _public_6fa2212
#define public_6fa221d _public_6fa221d
#define public_6fa2226 _public_6fa2226
#define public_6fa2231 _public_6fa2231
#define public_6fa224d _public_6fa224d
#define public_6fa2264 _public_6fa2264
#define public_6fa2271 _public_6fa2271
#define public_6fa227c _public_6fa227c
#define public_6fa227f _public_6fa227f
#define public_6fa2297 _public_6fa2297
#define public_6fa22a2 _public_6fa22a2
#define public_6fa22a5 _public_6fa22a5
#define public_6fa22ba _public_6fa22ba
#define public_6fa22c5 _public_6fa22c5
#define public_6fa22d0 _public_6fa22d0
#define public_6fa22d3 _public_6fa22d3
#define public_6fa22e7 _public_6fa22e7
#define public_6fa22f3 _public_6fa22f3
#define public_6fa22ff _public_6fa22ff
#define public_6fa2302 _public_6fa2302
#define public_6fa2320 _public_6fa2320
#define public_6fa235f _public_6fa235f
#define public_6fa2372 _public_6fa2372
#define public_6fa237d _public_6fa237d
#define public_6fa2380 _public_6fa2380
#define public_6fa238b _public_6fa238b
#define public_6fa239e _public_6fa239e
#define public_6fa23c5 _public_6fa23c5
#define public_6fa23df _public_6fa23df
#define public_6fa2405 _public_6fa2405
#define public_6fa2418 _public_6fa2418
#define public_6fa2425 _public_6fa2425
#define public_6fa2427 _public_6fa2427
#define public_6fa2432 _public_6fa2432
#define public_6fa2449 _public_6fa2449
#define public_6fa2461 _public_6fa2461
#define public_6fa246e _public_6fa246e
#define public_6fa2470 _public_6fa2470
#define public_6fa247c _public_6fa247c
#define public_6fa24a6 _public_6fa24a6
#define public_6fa24be _public_6fa24be
#define public_6fa24ce _public_6fa24ce
#define public_6fa24d8 _public_6fa24d8
#define public_6fa24fb _public_6fa24fb
#define public_6fa250e _public_6fa250e
#define public_6fa2519 _public_6fa2519
#define public_6fa251c _public_6fa251c
#define public_6fa2526 _public_6fa2526
#define public_6fa254f _public_6fa254f
#define public_6fa2562 _public_6fa2562
#define public_6fa256f _public_6fa256f
#define public_6fa2571 _public_6fa2571
#define public_6fa2574 _public_6fa2574
#define public_6fa2577 _public_6fa2577
#define public_6fa257e _public_6fa257e

PROC_DECLARE(0x6fa21d0, internal_6fa21d0, public_6fa21d0);
extern "C" NAKED register_t __cdecl internal_6fa21d0()
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
        call public_6ed1c80
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6fa2212
        mov eax, dword ptr ds : [esi+8]
        public_6fa21f4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6fa2297
        mov dword ptr ds : [ecx+4], eax
        jmp public_6fa22a5
        public_6fa2212 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6fa221d
        mov eax, edx
        jmp public_6fa21f4
        public_6fa221d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_6fa2231
        public_6fa2226 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_6fa2226
        public_6fa2231 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6fa21f4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6fa224d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6fa2264
        public_6fa224d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6fa2264 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6fa2271
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa227f
        public_6fa2271 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6fa227c
        mov dword ptr ds : [edx], ecx
        jmp public_6fa227f
        public_6fa227c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6fa227f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x40]
        mov dl, byte ptr ds : [ecx+0x40]
        mov byte ptr ds : [ecx+0x40], bl
        mov byte ptr ds : [esi+0x40], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6fa2302
        public_6fa2297 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6fa22a2
        mov dword ptr ds : [ecx], eax
        jmp public_6fa22a5
        public_6fa22a2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6fa22a5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6fa22d3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6fa22ba
        mov edx, dword ptr ds : [esi+4]
        jmp public_6fa22d0
        public_6fa22ba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        mov edx, eax
        jne public_6fa22d0
        public_6fa22c5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        je public_6fa22c5
        public_6fa22d0 : nop
        mov dword ptr ss : [ebp], edx
        public_6fa22d3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6fa2302
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6fa22e7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6fa22ff
        public_6fa22e7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        mov edx, eax
        jne public_6fa22ff
        public_6fa22f3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        je public_6fa22f3
        public_6fa22ff : nop
        mov dword ptr ss : [ebp+8], edx
        public_6fa2302 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x40]
        mov bl, 1
        cmp cl, bl
        jne public_6fa257e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6fa2577
        nop 
        public_6fa2320 : nop
        cmp byte ptr ds : [eax+0x40], bl
        jne public_6fa2577
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6fa23df
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6fa238b
        mov byte ptr ds : [ecx+0x40], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa235f
        mov dword ptr ds : [esi+4], ecx
        public_6fa235f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa2372
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa2380
        public_6fa2372 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6fa237d
        mov dword ptr ds : [esi], edx
        jmp public_6fa2380
        public_6fa237d : nop
        mov dword ptr ds : [esi+8], edx
        public_6fa2380 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6fa238b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6fa239e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        je public_6fa2449
        public_6fa239e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6fa247c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x40], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x40], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa23c5
        mov dword ptr ds : [esi+4], ecx
        public_6fa23c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa2461
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa2470
        public_6fa23df : nop
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6fa2432
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa2405
        mov dword ptr ds : [esi+4], ecx
        public_6fa2405 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa2418
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa2427
        public_6fa2418 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6fa2425
        mov dword ptr ds : [esi+8], edx
        jmp public_6fa2427
        public_6fa2425 : nop
        mov dword ptr ds : [esi], edx
        public_6fa2427 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6fa2432 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6fa24d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6fa24d8
        public_6fa2449 : nop
        mov byte ptr ds : [ecx+0x40], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6fa2320
        jmp public_6fa2577
        public_6fa2461 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6fa246e
        mov dword ptr ds : [esi+8], edx
        jmp public_6fa2470
        public_6fa246e : nop
        mov dword ptr ds : [esi], edx
        public_6fa2470 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6fa247c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x40]
        mov byte ptr ds : [ecx+0x40], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa24a6
        mov dword ptr ds : [esi+4], ecx
        public_6fa24a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa24be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6fa2574
        public_6fa24be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6fa24ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6fa2574
        public_6fa24ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6fa2574
        public_6fa24d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_6fa2526
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x40], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x40], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa24fb
        mov dword ptr ds : [esi+4], ecx
        public_6fa24fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa250e
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa251c
        public_6fa250e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6fa2519
        mov dword ptr ds : [esi], edx
        jmp public_6fa251c
        public_6fa2519 : nop
        mov dword ptr ds : [esi+8], edx
        public_6fa251c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6fa2526 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x40]
        mov byte ptr ds : [ecx+0x40], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6fa254f
        mov dword ptr ds : [esi+4], ecx
        public_6fa254f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6fa2562
        mov dword ptr ds : [esi+4], edx
        jmp public_6fa2571
        public_6fa2562 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6fa256f
        mov dword ptr ds : [esi+8], edx
        jmp public_6fa2571
        public_6fa256f : nop
        mov dword ptr ds : [esi], edx
        public_6fa2571 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6fa2574 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6fa2577 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x40], bl
        public_6fa257e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f99890
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
        UNREACHABLE_TRAP(0x6fa21d0)
    }
}

#undef public_6fa21f4
#undef public_6fa2212
#undef public_6fa221d
#undef public_6fa2226
#undef public_6fa2231
#undef public_6fa224d
#undef public_6fa2264
#undef public_6fa2271
#undef public_6fa227c
#undef public_6fa227f
#undef public_6fa2297
#undef public_6fa22a2
#undef public_6fa22a5
#undef public_6fa22ba
#undef public_6fa22c5
#undef public_6fa22d0
#undef public_6fa22d3
#undef public_6fa22e7
#undef public_6fa22f3
#undef public_6fa22ff
#undef public_6fa2302
#undef public_6fa2320
#undef public_6fa235f
#undef public_6fa2372
#undef public_6fa237d
#undef public_6fa2380
#undef public_6fa238b
#undef public_6fa239e
#undef public_6fa23c5
#undef public_6fa23df
#undef public_6fa2405
#undef public_6fa2418
#undef public_6fa2425
#undef public_6fa2427
#undef public_6fa2432
#undef public_6fa2449
#undef public_6fa2461
#undef public_6fa246e
#undef public_6fa2470
#undef public_6fa247c
#undef public_6fa24a6
#undef public_6fa24be
#undef public_6fa24ce
#undef public_6fa24d8
#undef public_6fa24fb
#undef public_6fa250e
#undef public_6fa2519
#undef public_6fa251c
#undef public_6fa2526
#undef public_6fa254f
#undef public_6fa2562
#undef public_6fa256f
#undef public_6fa2571
#undef public_6fa2574
#undef public_6fa2577
#undef public_6fa257e
