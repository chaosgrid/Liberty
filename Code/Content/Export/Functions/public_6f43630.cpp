#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43630);
CLANG_FORWARD_PROC_SYMBOL(public_6f466e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f43654 _public_6f43654
#define public_6f43672 _public_6f43672
#define public_6f4367d _public_6f4367d
#define public_6f43686 _public_6f43686
#define public_6f43691 _public_6f43691
#define public_6f436ad _public_6f436ad
#define public_6f436c4 _public_6f436c4
#define public_6f436d1 _public_6f436d1
#define public_6f436dc _public_6f436dc
#define public_6f436df _public_6f436df
#define public_6f436f7 _public_6f436f7
#define public_6f43702 _public_6f43702
#define public_6f43705 _public_6f43705
#define public_6f4371a _public_6f4371a
#define public_6f43725 _public_6f43725
#define public_6f43730 _public_6f43730
#define public_6f43733 _public_6f43733
#define public_6f43747 _public_6f43747
#define public_6f43753 _public_6f43753
#define public_6f4375f _public_6f4375f
#define public_6f43762 _public_6f43762
#define public_6f43780 _public_6f43780
#define public_6f437bf _public_6f437bf
#define public_6f437d2 _public_6f437d2
#define public_6f437dd _public_6f437dd
#define public_6f437e0 _public_6f437e0
#define public_6f437eb _public_6f437eb
#define public_6f437fe _public_6f437fe
#define public_6f43825 _public_6f43825
#define public_6f4383f _public_6f4383f
#define public_6f43865 _public_6f43865
#define public_6f43878 _public_6f43878
#define public_6f43885 _public_6f43885
#define public_6f43887 _public_6f43887
#define public_6f43892 _public_6f43892
#define public_6f438a9 _public_6f438a9
#define public_6f438c1 _public_6f438c1
#define public_6f438ce _public_6f438ce
#define public_6f438d0 _public_6f438d0
#define public_6f438dc _public_6f438dc
#define public_6f43906 _public_6f43906
#define public_6f4391e _public_6f4391e
#define public_6f4392e _public_6f4392e
#define public_6f43938 _public_6f43938
#define public_6f4395b _public_6f4395b
#define public_6f4396e _public_6f4396e
#define public_6f43979 _public_6f43979
#define public_6f4397c _public_6f4397c
#define public_6f43986 _public_6f43986
#define public_6f439af _public_6f439af
#define public_6f439c2 _public_6f439c2
#define public_6f439cf _public_6f439cf
#define public_6f439d1 _public_6f439d1
#define public_6f439d4 _public_6f439d4
#define public_6f439d7 _public_6f439d7
#define public_6f439da _public_6f439da

PROC_DECLARE(0x6f43630, internal_6f43630, public_6f43630);
extern "C" NAKED register_t __cdecl internal_6f43630()
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
        call public_6f466e0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f43672
        mov eax, dword ptr ds : [esi+8]
        public_6f43654 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f436f7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f43705
        public_6f43672 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4367d
        mov eax, edx
        jmp public_6f43654
        public_6f4367d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_6f43691
        public_6f43686 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_6f43686
        public_6f43691 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f43654
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f436ad
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f436c4
        public_6f436ad : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f436c4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f436d1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f436df
        public_6f436d1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f436dc
        mov dword ptr ds : [edx], ecx
        jmp public_6f436df
        public_6f436dc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f436df : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x50]
        mov dl, byte ptr ds : [ecx+0x50]
        mov byte ptr ds : [ecx+0x50], bl
        mov byte ptr ds : [esi+0x50], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f43762
        public_6f436f7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f43702
        mov dword ptr ds : [ecx], eax
        jmp public_6f43705
        public_6f43702 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f43705 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f43733
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4371a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f43730
        public_6f4371a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        mov edx, eax
        jne public_6f43730
        public_6f43725 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_6f43725
        public_6f43730 : nop
        mov dword ptr ss : [ebp], edx
        public_6f43733 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f43762
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f43747
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f4375f
        public_6f43747 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        mov edx, eax
        jne public_6f4375f
        public_6f43753 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_6f43753
        public_6f4375f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f43762 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x50]
        mov bl, 1
        cmp dl, bl
        jne public_6f439da
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f439d7
        nop 
        public_6f43780 : nop
        cmp byte ptr ds : [eax+0x50], bl
        jne public_6f439d7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4383f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f437eb
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f437bf
        mov dword ptr ds : [esi+4], ecx
        public_6f437bf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f437d2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f437e0
        public_6f437d2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f437dd
        mov dword ptr ds : [esi], edx
        jmp public_6f437e0
        public_6f437dd : nop
        mov dword ptr ds : [esi+8], edx
        public_6f437e0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f437eb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f437fe
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        je public_6f438a9
        public_6f437fe : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f438dc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x50], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x50], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f43825
        mov dword ptr ds : [esi+4], ecx
        public_6f43825 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f438c1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f438d0
        public_6f4383f : nop
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f43892
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f43865
        mov dword ptr ds : [esi+4], ecx
        public_6f43865 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f43878
        mov dword ptr ds : [esi+4], edx
        jmp public_6f43887
        public_6f43878 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f43885
        mov dword ptr ds : [esi+8], edx
        jmp public_6f43887
        public_6f43885 : nop
        mov dword ptr ds : [esi], edx
        public_6f43887 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f43892 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f43938
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f43938
        public_6f438a9 : nop
        mov byte ptr ds : [ecx+0x50], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f43780
        jmp public_6f439d7
        public_6f438c1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f438ce
        mov dword ptr ds : [esi+8], edx
        jmp public_6f438d0
        public_6f438ce : nop
        mov dword ptr ds : [esi], edx
        public_6f438d0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f438dc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x50]
        mov byte ptr ds : [ecx+0x50], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f43906
        mov dword ptr ds : [esi+4], ecx
        public_6f43906 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4391e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f439d4
        public_6f4391e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4392e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f439d4
        public_6f4392e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f439d4
        public_6f43938 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_6f43986
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x50], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x50], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4395b
        mov dword ptr ds : [esi+4], ecx
        public_6f4395b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4396e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4397c
        public_6f4396e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f43979
        mov dword ptr ds : [esi], edx
        jmp public_6f4397c
        public_6f43979 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4397c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f43986 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x50]
        mov byte ptr ds : [ecx+0x50], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f439af
        mov dword ptr ds : [esi+4], ecx
        public_6f439af : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f439c2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f439d1
        public_6f439c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f439cf
        mov dword ptr ds : [esi+8], edx
        jmp public_6f439d1
        public_6f439cf : nop
        mov dword ptr ds : [esi], edx
        public_6f439d1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f439d4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f439d7 : nop
        mov byte ptr ds : [eax+0x50], bl
        public_6f439da : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
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
        UNREACHABLE_TRAP(0x6f43630)
    }
}

#undef public_6f43654
#undef public_6f43672
#undef public_6f4367d
#undef public_6f43686
#undef public_6f43691
#undef public_6f436ad
#undef public_6f436c4
#undef public_6f436d1
#undef public_6f436dc
#undef public_6f436df
#undef public_6f436f7
#undef public_6f43702
#undef public_6f43705
#undef public_6f4371a
#undef public_6f43725
#undef public_6f43730
#undef public_6f43733
#undef public_6f43747
#undef public_6f43753
#undef public_6f4375f
#undef public_6f43762
#undef public_6f43780
#undef public_6f437bf
#undef public_6f437d2
#undef public_6f437dd
#undef public_6f437e0
#undef public_6f437eb
#undef public_6f437fe
#undef public_6f43825
#undef public_6f4383f
#undef public_6f43865
#undef public_6f43878
#undef public_6f43885
#undef public_6f43887
#undef public_6f43892
#undef public_6f438a9
#undef public_6f438c1
#undef public_6f438ce
#undef public_6f438d0
#undef public_6f438dc
#undef public_6f43906
#undef public_6f4391e
#undef public_6f4392e
#undef public_6f43938
#undef public_6f4395b
#undef public_6f4396e
#undef public_6f43979
#undef public_6f4397c
#undef public_6f43986
#undef public_6f439af
#undef public_6f439c2
#undef public_6f439cf
#undef public_6f439d1
#undef public_6f439d4
#undef public_6f439d7
#undef public_6f439da
