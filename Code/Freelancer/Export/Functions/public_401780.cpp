#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401780);
CLANG_FORWARD_PROC_SYMBOL(public_536020);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4017a4 _public_4017a4
#define public_4017c2 _public_4017c2
#define public_4017cd _public_4017cd
#define public_4017d6 _public_4017d6
#define public_4017e1 _public_4017e1
#define public_4017fd _public_4017fd
#define public_401814 _public_401814
#define public_401821 _public_401821
#define public_40182c _public_40182c
#define public_40182f _public_40182f
#define public_401847 _public_401847
#define public_401852 _public_401852
#define public_401855 _public_401855
#define public_40186a _public_40186a
#define public_401875 _public_401875
#define public_401880 _public_401880
#define public_401883 _public_401883
#define public_401897 _public_401897
#define public_4018a3 _public_4018a3
#define public_4018af _public_4018af
#define public_4018b2 _public_4018b2
#define public_4018d0 _public_4018d0
#define public_40190f _public_40190f
#define public_401922 _public_401922
#define public_40192d _public_40192d
#define public_401930 _public_401930
#define public_40193b _public_40193b
#define public_40194e _public_40194e
#define public_401975 _public_401975
#define public_40198f _public_40198f
#define public_4019b5 _public_4019b5
#define public_4019c8 _public_4019c8
#define public_4019d5 _public_4019d5
#define public_4019d7 _public_4019d7
#define public_4019e2 _public_4019e2
#define public_4019f9 _public_4019f9
#define public_401a11 _public_401a11
#define public_401a1e _public_401a1e
#define public_401a20 _public_401a20
#define public_401a2c _public_401a2c
#define public_401a56 _public_401a56
#define public_401a6e _public_401a6e
#define public_401a7e _public_401a7e
#define public_401a88 _public_401a88
#define public_401aab _public_401aab
#define public_401abe _public_401abe
#define public_401ac9 _public_401ac9
#define public_401acc _public_401acc
#define public_401ad6 _public_401ad6
#define public_401aff _public_401aff
#define public_401b12 _public_401b12
#define public_401b1f _public_401b1f
#define public_401b21 _public_401b21
#define public_401b24 _public_401b24
#define public_401b27 _public_401b27
#define public_401b2a _public_401b2a

PROC_DECLARE(0x401780, internal_401780, public_401780);
extern "C" NAKED register_t __cdecl internal_401780()
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
        call public_536020
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_4017c2
        mov eax, dword ptr ds : [esi+8]
        public_4017a4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_401847
        mov dword ptr ds : [ecx+4], eax
        jmp public_401855
        public_4017c2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_4017cd
        mov eax, edx
        jmp public_4017a4
        public_4017cd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_4017e1
        public_4017d6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_4017d6
        public_4017e1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_4017a4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4017fd
        mov dword ptr ds : [eax+4], ecx
        jmp public_401814
        public_4017fd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_401814 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_401821
        mov dword ptr ds : [edx+4], ecx
        jmp public_40182f
        public_401821 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_40182c
        mov dword ptr ds : [edx], ecx
        jmp public_40182f
        public_40182c : nop
        mov dword ptr ds : [edx+8], ecx
        public_40182f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x18]
        mov dl, byte ptr ds : [ecx+0x18]
        mov byte ptr ds : [ecx+0x18], bl
        mov byte ptr ds : [esi+0x18], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_4018b2
        public_401847 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_401852
        mov dword ptr ds : [ecx], eax
        jmp public_401855
        public_401852 : nop
        mov dword ptr ds : [ecx+8], eax
        public_401855 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_401883
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_40186a
        mov edx, dword ptr ds : [esi+4]
        jmp public_401880
        public_40186a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_401880
        public_401875 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_401875
        public_401880 : nop
        mov dword ptr ss : [ebp], edx
        public_401883 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_4018b2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_401897
        mov edx, dword ptr ds : [esi+4]
        jmp public_4018af
        public_401897 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_4018af
        public_4018a3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_4018a3
        public_4018af : nop
        mov dword ptr ss : [ebp+8], edx
        public_4018b2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x18]
        mov bl, 1
        cmp dl, bl
        jne public_401b2a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_401b27
        nop 
        public_4018d0 : nop
        cmp byte ptr ds : [eax+0x18], bl
        jne public_401b27
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_40198f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_40193b
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_40190f
        mov dword ptr ds : [esi+4], ecx
        public_40190f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_401922
        mov dword ptr ds : [esi+4], edx
        jmp public_401930
        public_401922 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_40192d
        mov dword ptr ds : [esi], edx
        jmp public_401930
        public_40192d : nop
        mov dword ptr ds : [esi+8], edx
        public_401930 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_40193b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_40194e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        je public_4019f9
        public_40194e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_401a2c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_401975
        mov dword ptr ds : [esi+4], ecx
        public_401975 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_401a11
        mov dword ptr ds : [esi+4], edx
        jmp public_401a20
        public_40198f : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_4019e2
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4019b5
        mov dword ptr ds : [esi+4], ecx
        public_4019b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4019c8
        mov dword ptr ds : [esi+4], edx
        jmp public_4019d7
        public_4019c8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4019d5
        mov dword ptr ds : [esi+8], edx
        jmp public_4019d7
        public_4019d5 : nop
        mov dword ptr ds : [esi], edx
        public_4019d7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_4019e2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_401a88
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_401a88
        public_4019f9 : nop
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4018d0
        jmp public_401b27
        public_401a11 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_401a1e
        mov dword ptr ds : [esi+8], edx
        jmp public_401a20
        public_401a1e : nop
        mov dword ptr ds : [esi], edx
        public_401a20 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_401a2c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_401a56
        mov dword ptr ds : [esi+4], ecx
        public_401a56 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_401a6e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_401b24
        public_401a6e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_401a7e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_401b24
        public_401a7e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_401b24
        public_401a88 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_401ad6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_401aab
        mov dword ptr ds : [esi+4], ecx
        public_401aab : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_401abe
        mov dword ptr ds : [esi+4], edx
        jmp public_401acc
        public_401abe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_401ac9
        mov dword ptr ds : [esi], edx
        jmp public_401acc
        public_401ac9 : nop
        mov dword ptr ds : [esi+8], edx
        public_401acc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_401ad6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_401aff
        mov dword ptr ds : [esi+4], ecx
        public_401aff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_401b12
        mov dword ptr ds : [esi+4], edx
        jmp public_401b21
        public_401b12 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_401b1f
        mov dword ptr ds : [esi+8], edx
        jmp public_401b21
        public_401b1f : nop
        mov dword ptr ds : [esi], edx
        public_401b21 : nop
        mov dword ptr ds : [edx+8], ecx
        public_401b24 : nop
        mov dword ptr ds : [ecx+4], edx
        public_401b27 : nop
        mov byte ptr ds : [eax+0x18], bl
        public_401b2a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x401780)
    }
}

#undef public_4017a4
#undef public_4017c2
#undef public_4017cd
#undef public_4017d6
#undef public_4017e1
#undef public_4017fd
#undef public_401814
#undef public_401821
#undef public_40182c
#undef public_40182f
#undef public_401847
#undef public_401852
#undef public_401855
#undef public_40186a
#undef public_401875
#undef public_401880
#undef public_401883
#undef public_401897
#undef public_4018a3
#undef public_4018af
#undef public_4018b2
#undef public_4018d0
#undef public_40190f
#undef public_401922
#undef public_40192d
#undef public_401930
#undef public_40193b
#undef public_40194e
#undef public_401975
#undef public_40198f
#undef public_4019b5
#undef public_4019c8
#undef public_4019d5
#undef public_4019d7
#undef public_4019e2
#undef public_4019f9
#undef public_401a11
#undef public_401a1e
#undef public_401a20
#undef public_401a2c
#undef public_401a56
#undef public_401a6e
#undef public_401a7e
#undef public_401a88
#undef public_401aab
#undef public_401abe
#undef public_401ac9
#undef public_401acc
#undef public_401ad6
#undef public_401aff
#undef public_401b12
#undef public_401b1f
#undef public_401b21
#undef public_401b24
#undef public_401b27
#undef public_401b2a
