#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b501d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b50470);
CLANG_FORWARD_PROC_SYMBOL(public_6b50c70);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b50494 _public_6b50494
#define public_6b504b2 _public_6b504b2
#define public_6b504bd _public_6b504bd
#define public_6b504c6 _public_6b504c6
#define public_6b504d1 _public_6b504d1
#define public_6b504ed _public_6b504ed
#define public_6b50504 _public_6b50504
#define public_6b50511 _public_6b50511
#define public_6b5051c _public_6b5051c
#define public_6b5051f _public_6b5051f
#define public_6b50537 _public_6b50537
#define public_6b50542 _public_6b50542
#define public_6b50545 _public_6b50545
#define public_6b5055a _public_6b5055a
#define public_6b50565 _public_6b50565
#define public_6b50570 _public_6b50570
#define public_6b50573 _public_6b50573
#define public_6b50587 _public_6b50587
#define public_6b50593 _public_6b50593
#define public_6b5059f _public_6b5059f
#define public_6b505a2 _public_6b505a2
#define public_6b505c0 _public_6b505c0
#define public_6b505ff _public_6b505ff
#define public_6b50612 _public_6b50612
#define public_6b5061d _public_6b5061d
#define public_6b50620 _public_6b50620
#define public_6b5062b _public_6b5062b
#define public_6b5063e _public_6b5063e
#define public_6b50665 _public_6b50665
#define public_6b5067f _public_6b5067f
#define public_6b506a5 _public_6b506a5
#define public_6b506b8 _public_6b506b8
#define public_6b506c5 _public_6b506c5
#define public_6b506c7 _public_6b506c7
#define public_6b506d2 _public_6b506d2
#define public_6b506e9 _public_6b506e9
#define public_6b50701 _public_6b50701
#define public_6b5070e _public_6b5070e
#define public_6b50710 _public_6b50710
#define public_6b5071c _public_6b5071c
#define public_6b50746 _public_6b50746
#define public_6b5075e _public_6b5075e
#define public_6b5076e _public_6b5076e
#define public_6b50778 _public_6b50778
#define public_6b5079b _public_6b5079b
#define public_6b507ae _public_6b507ae
#define public_6b507b9 _public_6b507b9
#define public_6b507bc _public_6b507bc
#define public_6b507c6 _public_6b507c6
#define public_6b507ef _public_6b507ef
#define public_6b50802 _public_6b50802
#define public_6b5080f _public_6b5080f
#define public_6b50811 _public_6b50811
#define public_6b50814 _public_6b50814
#define public_6b50817 _public_6b50817
#define public_6b5081e _public_6b5081e

PROC_DECLARE(0x6b50470, internal_6b50470, public_6b50470);
extern "C" NAKED register_t __cdecl internal_6b50470()
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
        call public_6b50c70
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6b504b2
        mov eax, dword ptr ds : [esi+8]
        public_6b50494 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6b50537
        mov dword ptr ds : [ecx+4], eax
        jmp public_6b50545
        public_6b504b2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6b504bd
        mov eax, edx
        jmp public_6b50494
        public_6b504bd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6b504d1
        public_6b504c6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6b504c6
        public_6b504d1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b50494
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b504ed
        mov dword ptr ds : [eax+4], ecx
        jmp public_6b50504
        public_6b504ed : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6b50504 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6b50511
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b5051f
        public_6b50511 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6b5051c
        mov dword ptr ds : [edx], ecx
        jmp public_6b5051f
        public_6b5051c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b5051f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6b505a2
        public_6b50537 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6b50542
        mov dword ptr ds : [ecx], eax
        jmp public_6b50545
        public_6b50542 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6b50545 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6b50573
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b5055a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6b50570
        public_6b5055a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6b50570
        public_6b50565 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6b50565
        public_6b50570 : nop
        mov dword ptr ss : [ebp], edx
        public_6b50573 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6b505a2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b50587
        mov edx, dword ptr ds : [esi+4]
        jmp public_6b5059f
        public_6b50587 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6b5059f
        public_6b50593 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6b50593
        public_6b5059f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6b505a2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_6b5081e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6b50817
        nop 
        public_6b505c0 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6b50817
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6b5067f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6b5062b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b505ff
        mov dword ptr ds : [esi+4], ecx
        public_6b505ff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b50612
        mov dword ptr ds : [esi+4], edx
        jmp public_6b50620
        public_6b50612 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b5061d
        mov dword ptr ds : [esi], edx
        jmp public_6b50620
        public_6b5061d : nop
        mov dword ptr ds : [esi+8], edx
        public_6b50620 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6b5062b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6b5063e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6b506e9
        public_6b5063e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6b5071c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b50665
        mov dword ptr ds : [esi+4], ecx
        public_6b50665 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b50701
        mov dword ptr ds : [esi+4], edx
        jmp public_6b50710
        public_6b5067f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6b506d2
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b506a5
        mov dword ptr ds : [esi+4], ecx
        public_6b506a5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b506b8
        mov dword ptr ds : [esi+4], edx
        jmp public_6b506c7
        public_6b506b8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b506c5
        mov dword ptr ds : [esi+8], edx
        jmp public_6b506c7
        public_6b506c5 : nop
        mov dword ptr ds : [esi], edx
        public_6b506c7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6b506d2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6b50778
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6b50778
        public_6b506e9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6b505c0
        jmp public_6b50817
        public_6b50701 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b5070e
        mov dword ptr ds : [esi+8], edx
        jmp public_6b50710
        public_6b5070e : nop
        mov dword ptr ds : [esi], edx
        public_6b50710 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6b5071c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b50746
        mov dword ptr ds : [esi+4], ecx
        public_6b50746 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b5075e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b50814
        public_6b5075e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b5076e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b50814
        public_6b5076e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b50814
        public_6b50778 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6b507c6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b5079b
        mov dword ptr ds : [esi+4], ecx
        public_6b5079b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b507ae
        mov dword ptr ds : [esi+4], edx
        jmp public_6b507bc
        public_6b507ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b507b9
        mov dword ptr ds : [esi], edx
        jmp public_6b507bc
        public_6b507b9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6b507bc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6b507c6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b507ef
        mov dword ptr ds : [esi+4], ecx
        public_6b507ef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b50802
        mov dword ptr ds : [esi+4], edx
        jmp public_6b50811
        public_6b50802 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b5080f
        mov dword ptr ds : [esi+8], edx
        jmp public_6b50811
        public_6b5080f : nop
        mov dword ptr ds : [esi], edx
        public_6b50811 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b50814 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6b50817 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_6b5081e : nop
        lea ecx, ds:[esi+0xC]
        call public_6b501d0
        push esi
        call public_6b6a092
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
        UNREACHABLE_TRAP(0x6b50470)
    }
}

#undef public_6b50494
#undef public_6b504b2
#undef public_6b504bd
#undef public_6b504c6
#undef public_6b504d1
#undef public_6b504ed
#undef public_6b50504
#undef public_6b50511
#undef public_6b5051c
#undef public_6b5051f
#undef public_6b50537
#undef public_6b50542
#undef public_6b50545
#undef public_6b5055a
#undef public_6b50565
#undef public_6b50570
#undef public_6b50573
#undef public_6b50587
#undef public_6b50593
#undef public_6b5059f
#undef public_6b505a2
#undef public_6b505c0
#undef public_6b505ff
#undef public_6b50612
#undef public_6b5061d
#undef public_6b50620
#undef public_6b5062b
#undef public_6b5063e
#undef public_6b50665
#undef public_6b5067f
#undef public_6b506a5
#undef public_6b506b8
#undef public_6b506c5
#undef public_6b506c7
#undef public_6b506d2
#undef public_6b506e9
#undef public_6b50701
#undef public_6b5070e
#undef public_6b50710
#undef public_6b5071c
#undef public_6b50746
#undef public_6b5075e
#undef public_6b5076e
#undef public_6b50778
#undef public_6b5079b
#undef public_6b507ae
#undef public_6b507b9
#undef public_6b507bc
#undef public_6b507c6
#undef public_6b507ef
#undef public_6b50802
#undef public_6b5080f
#undef public_6b50811
#undef public_6b50814
#undef public_6b50817
#undef public_6b5081e
