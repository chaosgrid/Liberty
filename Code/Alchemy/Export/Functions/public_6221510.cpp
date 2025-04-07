#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6221510);
CLANG_FORWARD_PROC_SYMBOL(public_62220b0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6221534 _public_6221534
#define public_6221552 _public_6221552
#define public_622155d _public_622155d
#define public_6221566 _public_6221566
#define public_6221571 _public_6221571
#define public_622158f _public_622158f
#define public_62215a6 _public_62215a6
#define public_62215b3 _public_62215b3
#define public_62215be _public_62215be
#define public_62215c1 _public_62215c1
#define public_62215d9 _public_62215d9
#define public_62215e4 _public_62215e4
#define public_62215e7 _public_62215e7
#define public_62215fe _public_62215fe
#define public_6221609 _public_6221609
#define public_6221614 _public_6221614
#define public_6221617 _public_6221617
#define public_622162d _public_622162d
#define public_6221639 _public_6221639
#define public_6221645 _public_6221645
#define public_6221648 _public_6221648
#define public_6221663 _public_6221663
#define public_62216a2 _public_62216a2
#define public_62216b5 _public_62216b5
#define public_62216c0 _public_62216c0
#define public_62216c3 _public_62216c3
#define public_62216ce _public_62216ce
#define public_62216e1 _public_62216e1
#define public_6221708 _public_6221708
#define public_6221722 _public_6221722
#define public_6221748 _public_6221748
#define public_622175b _public_622175b
#define public_6221768 _public_6221768
#define public_622176a _public_622176a
#define public_6221775 _public_6221775
#define public_622178c _public_622178c
#define public_62217a4 _public_62217a4
#define public_62217b1 _public_62217b1
#define public_62217b3 _public_62217b3
#define public_62217bf _public_62217bf
#define public_62217e9 _public_62217e9
#define public_6221801 _public_6221801
#define public_6221811 _public_6221811
#define public_622181b _public_622181b
#define public_622183e _public_622183e
#define public_6221851 _public_6221851
#define public_622185c _public_622185c
#define public_622185f _public_622185f
#define public_6221869 _public_6221869
#define public_6221892 _public_6221892
#define public_62218a5 _public_62218a5
#define public_62218b2 _public_62218b2
#define public_62218b4 _public_62218b4
#define public_62218b7 _public_62218b7
#define public_62218ba _public_62218ba
#define public_62218c1 _public_62218c1

PROC_DECLARE(0x6221510, internal_6221510, public_6221510);
extern "C" NAKED register_t __cdecl internal_6221510()
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
        call public_62220b0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6221552
        mov eax, dword ptr ds : [esi+8]
        public_6221534 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_62215d9
        mov dword ptr ds : [ecx+4], eax
        jmp public_62215e7
        public_6221552 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_622155d
        mov eax, edx
        jmp public_6221534
        public_622155d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6221571
        public_6221566 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6221566
        public_6221571 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6221534
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_622158f
        mov dword ptr ds : [eax+4], ecx
        jmp public_62215a6
        public_622158f : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_62215a6 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_62215b3
        mov dword ptr ds : [edx+4], ecx
        jmp public_62215c1
        public_62215b3 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_62215be
        mov dword ptr ds : [edx], ecx
        jmp public_62215c1
        public_62215be : nop
        mov dword ptr ds : [edx+8], ecx
        public_62215c1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        jmp public_6221648
        public_62215d9 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_62215e4
        mov dword ptr ds : [ecx], eax
        jmp public_62215e7
        public_62215e4 : nop
        mov dword ptr ds : [ecx+8], eax
        public_62215e7 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6221617
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_62215fe
        mov edx, dword ptr ds : [esi+4]
        jmp public_6221614
        public_62215fe : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        jne public_6221614
        public_6221609 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6221609
        public_6221614 : nop
        mov dword ptr ss : [ebp], edx
        public_6221617 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6221648
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_622162d
        mov edx, dword ptr ds : [esi+4]
        jmp public_6221645
        public_622162d : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        jne public_6221645
        public_6221639 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6221639
        public_6221645 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6221648 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ds : [esi+0x1C], bl
        jne public_62218c1
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_62218ba
        public_6221663 : nop
        cmp byte ptr ds : [eax+0x1C], bl
        jne public_62218ba
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6221722
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_62216ce
        mov byte ptr ds : [ecx+0x1C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62216a2
        mov dword ptr ds : [esi+4], ecx
        public_62216a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62216b5
        mov dword ptr ds : [esi+4], edx
        jmp public_62216c3
        public_62216b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62216c0
        mov dword ptr ds : [esi], edx
        jmp public_62216c3
        public_62216c0 : nop
        mov dword ptr ds : [esi+8], edx
        public_62216c3 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62216ce : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_62216e1
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        je public_622178c
        public_62216e1 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_62217bf
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6221708
        mov dword ptr ds : [esi+4], ecx
        public_6221708 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62217a4
        mov dword ptr ds : [esi+4], edx
        jmp public_62217b3
        public_6221722 : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6221775
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6221748
        mov dword ptr ds : [esi+4], ecx
        public_6221748 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_622175b
        mov dword ptr ds : [esi+4], edx
        jmp public_622176a
        public_622175b : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6221768
        mov dword ptr ds : [esi+8], edx
        jmp public_622176a
        public_6221768 : nop
        mov dword ptr ds : [esi], edx
        public_622176a : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6221775 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_622181b
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_622181b
        public_622178c : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6221663
        jmp public_62218ba
        public_62217a4 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62217b1
        mov dword ptr ds : [esi+8], edx
        jmp public_62217b3
        public_62217b1 : nop
        mov dword ptr ds : [esi], edx
        public_62217b3 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62217bf : nop
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
        je public_62217e9
        mov dword ptr ds : [esi+4], ecx
        public_62217e9 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6221801
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62218b7
        public_6221801 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6221811
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62218b7
        public_6221811 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62218b7
        public_622181b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6221869
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_622183e
        mov dword ptr ds : [esi+4], ecx
        public_622183e : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6221851
        mov dword ptr ds : [esi+4], edx
        jmp public_622185f
        public_6221851 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_622185c
        mov dword ptr ds : [esi], edx
        jmp public_622185f
        public_622185c : nop
        mov dword ptr ds : [esi+8], edx
        public_622185f : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6221869 : nop
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
        je public_6221892
        mov dword ptr ds : [esi+4], ecx
        public_6221892 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62218a5
        mov dword ptr ds : [esi+4], edx
        jmp public_62218b4
        public_62218a5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62218b2
        mov dword ptr ds : [esi+8], edx
        jmp public_62218b4
        public_62218b2 : nop
        mov dword ptr ds : [esi], edx
        public_62218b4 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62218b7 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62218ba : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x1C], bl
        public_62218c1 : nop
        lea ecx, ds:[esi+0xC]
        call public_621ff70
        push esi
        call public_62460e0
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
        UNREACHABLE_TRAP(0x6221510)
    }
}

#undef public_6221534
#undef public_6221552
#undef public_622155d
#undef public_6221566
#undef public_6221571
#undef public_622158f
#undef public_62215a6
#undef public_62215b3
#undef public_62215be
#undef public_62215c1
#undef public_62215d9
#undef public_62215e4
#undef public_62215e7
#undef public_62215fe
#undef public_6221609
#undef public_6221614
#undef public_6221617
#undef public_622162d
#undef public_6221639
#undef public_6221645
#undef public_6221648
#undef public_6221663
#undef public_62216a2
#undef public_62216b5
#undef public_62216c0
#undef public_62216c3
#undef public_62216ce
#undef public_62216e1
#undef public_6221708
#undef public_6221722
#undef public_6221748
#undef public_622175b
#undef public_6221768
#undef public_622176a
#undef public_6221775
#undef public_622178c
#undef public_62217a4
#undef public_62217b1
#undef public_62217b3
#undef public_62217bf
#undef public_62217e9
#undef public_6221801
#undef public_6221811
#undef public_622181b
#undef public_622183e
#undef public_6221851
#undef public_622185c
#undef public_622185f
#undef public_6221869
#undef public_6221892
#undef public_62218a5
#undef public_62218b2
#undef public_62218b4
#undef public_62218b7
#undef public_62218ba
#undef public_62218c1
