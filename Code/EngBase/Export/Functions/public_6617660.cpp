#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6617660);
CLANG_FORWARD_PROC_SYMBOL(public_661a640);
CLANG_FORWARD_PROC_SYMBOL(public_661ad30);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_661768c _public_661768c
#define public_66176a6 _public_66176a6
#define public_66176b1 _public_66176b1
#define public_66176b9 _public_66176b9
#define public_66176c3 _public_66176c3
#define public_66176e3 _public_66176e3
#define public_66176fa _public_66176fa
#define public_6617707 _public_6617707
#define public_6617712 _public_6617712
#define public_6617715 _public_6617715
#define public_6617733 _public_6617733
#define public_661773e _public_661773e
#define public_6617741 _public_6617741
#define public_6617759 _public_6617759
#define public_6617763 _public_6617763
#define public_661776d _public_661776d
#define public_661776f _public_661776f
#define public_6617788 _public_6617788
#define public_6617793 _public_6617793
#define public_661779e _public_661779e
#define public_66177a1 _public_66177a1
#define public_66177b7 _public_66177b7
#define public_66177f8 _public_66177f8
#define public_661780b _public_661780b
#define public_6617816 _public_6617816
#define public_6617819 _public_6617819
#define public_6617824 _public_6617824
#define public_6617839 _public_6617839
#define public_6617862 _public_6617862
#define public_661787c _public_661787c
#define public_66178a3 _public_66178a3
#define public_66178b6 _public_66178b6
#define public_66178c3 _public_66178c3
#define public_66178c5 _public_66178c5
#define public_66178d0 _public_66178d0
#define public_66178e9 _public_66178e9
#define public_6617901 _public_6617901
#define public_661790e _public_661790e
#define public_6617910 _public_6617910
#define public_661791c _public_661791c
#define public_6617948 _public_6617948
#define public_6617960 _public_6617960
#define public_6617970 _public_6617970
#define public_661797a _public_661797a
#define public_661799f _public_661799f
#define public_66179b2 _public_66179b2
#define public_66179bd _public_66179bd
#define public_66179c0 _public_66179c0
#define public_66179ca _public_66179ca
#define public_66179f5 _public_66179f5
#define public_6617a08 _public_6617a08
#define public_6617a15 _public_6617a15
#define public_6617a17 _public_6617a17
#define public_6617a1a _public_6617a1a
#define public_6617a1d _public_6617a1d
#define public_6617a21 _public_6617a21
#define public_6617a32 _public_6617a32
#define public_6617a41 _public_6617a41

PROC_DECLARE(0x6617660, internal_6617660, public_6617660);
extern "C" NAKED register_t __cdecl internal_6617660()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, ecx
        push edi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x14], ebx
        call public_661a640
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+8]
        mov ebp, esi
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], ebp
        jne public_66176a6
        mov eax, dword ptr ds : [esi+8]
        public_661768c : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6617733
        mov dword ptr ds : [ecx+4], eax
        jmp public_6617741
        public_66176a6 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_66176b1
        mov eax, edx
        jmp public_661768c
        public_66176b1 : nop
        mov eax, dword ptr ds : [ecx]
        cmp byte ptr ds : [eax+0x31], 0
        jne public_66176c3
        public_66176b9 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        cmp byte ptr ds : [eax+0x31], 0
        je public_66176b9
        public_66176c3 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov ebp, ecx
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ebp
        je public_661768c
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_66176e3
        mov dword ptr ds : [eax+4], ecx
        jmp public_66176fa
        public_66176e3 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_66176fa : nop
        mov ebx, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [ebx+4], esi
        jne public_6617707
        mov dword ptr ds : [ebx+4], ecx
        jmp public_6617715
        public_6617707 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6617712
        mov dword ptr ds : [edx], ecx
        jmp public_6617715
        public_6617712 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6617715 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x30]
        mov dl, byte ptr ds : [ecx+0x30]
        mov byte ptr ds : [ecx+0x30], bl
        mov ebx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0x30], dl
        mov ebp, esi
        jmp public_66177a1
        public_6617733 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_661773e
        mov dword ptr ds : [ecx], eax
        jmp public_6617741
        public_661773e : nop
        mov dword ptr ds : [ecx+8], eax
        public_6617741 : nop
        mov edi, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [edi], esi
        jne public_661776f
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ebx+8]
        cmp edx, ecx
        jne public_6617759
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi], ecx
        jmp public_661776f
        public_6617759 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        cmp byte ptr ds : [ecx+0x31], 0
        jne public_661776d
        public_6617763 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        cmp byte ptr ds : [ecx+0x31], 0
        je public_6617763
        public_661776d : nop
        mov dword ptr ds : [edi], edx
        public_661776f : nop
        mov edi, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [edi+8], esi
        jne public_66177a1
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+8]
        cmp edx, ecx
        jne public_6617788
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+8], ecx
        jmp public_66177a1
        public_6617788 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        cmp byte ptr ds : [ecx+0x31], 0
        jne public_661779e
        public_6617793 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        cmp byte ptr ds : [ecx+0x31], 0
        je public_6617793
        public_661779e : nop
        mov dword ptr ds : [edi+8], edx
        public_66177a1 : nop
        cmp byte ptr ss : [ebp+0x30], 1
        jne public_6617a21
        mov edx, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6617a1d
        public_66177b7 : nop
        cmp byte ptr ds : [eax+0x30], 1
        jne public_6617a1d
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_661787c
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6617824
        mov byte ptr ds : [ecx+0x30], 1
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [ebx+8]
        je public_66177f8
        mov dword ptr ds : [esi+4], ecx
        public_66177f8 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_661780b
        mov dword ptr ds : [esi+4], edx
        jmp public_6617819
        public_661780b : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6617816
        mov dword ptr ds : [esi], edx
        jmp public_6617819
        public_6617816 : nop
        mov dword ptr ds : [esi+8], edx
        public_6617819 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6617824 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], 1
        jne public_6617839
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], 1
        je public_66178e9
        public_6617839 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], 1
        jne public_661791c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x30], 1
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x30], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6617862
        mov dword ptr ds : [esi+4], ecx
        public_6617862 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6617901
        mov dword ptr ds : [esi+4], edx
        jmp public_6617910
        public_661787c : nop
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_66178d0
        mov byte ptr ds : [ecx+0x30], 1
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [ebx+8]
        je public_66178a3
        mov dword ptr ds : [esi+4], ecx
        public_66178a3 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66178b6
        mov dword ptr ds : [esi+4], edx
        jmp public_66178c5
        public_66178b6 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_66178c3
        mov dword ptr ds : [esi+8], edx
        jmp public_66178c5
        public_66178c3 : nop
        mov dword ptr ds : [esi], edx
        public_66178c5 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_66178d0 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], 1
        jne public_661797a
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], 1
        jne public_661797a
        public_66178e9 : nop
        mov byte ptr ds : [ecx+0x30], 0
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_66177b7
        jmp public_6617a1d
        public_6617901 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_661790e
        mov dword ptr ds : [esi+8], edx
        jmp public_6617910
        public_661790e : nop
        mov dword ptr ds : [esi], edx
        public_6617910 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_661791c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x30]
        mov byte ptr ds : [ecx+0x30], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x30], 1
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x30], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6617948
        mov dword ptr ds : [esi+4], ecx
        public_6617948 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6617960
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6617a1a
        public_6617960 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6617970
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6617a1a
        public_6617970 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6617a1a
        public_661797a : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], 1
        jne public_66179ca
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x30], 1
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x30], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [ebx+8]
        je public_661799f
        mov dword ptr ds : [esi+4], ecx
        public_661799f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66179b2
        mov dword ptr ds : [esi+4], edx
        jmp public_66179c0
        public_66179b2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_66179bd
        mov dword ptr ds : [esi], edx
        jmp public_66179c0
        public_66179bd : nop
        mov dword ptr ds : [esi+8], edx
        public_66179c0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_66179ca : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x30]
        mov byte ptr ds : [ecx+0x30], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x30], 1
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x30], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [ebx+8]
        je public_66179f5
        mov dword ptr ds : [esi+4], ecx
        public_66179f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6617a08
        mov dword ptr ds : [esi+4], edx
        jmp public_6617a17
        public_6617a08 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6617a15
        mov dword ptr ds : [esi+8], edx
        jmp public_6617a17
        public_6617a15 : nop
        mov dword ptr ds : [esi], edx
        public_6617a17 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6617a1a : nop
        mov dword ptr ds : [ecx+4], edx
        public_6617a1d : nop
        mov byte ptr ds : [eax+0x30], 1
        public_6617a21 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [edx+0x20]
        mov edi, dword ptr ds : [edx+0x1C]
        lea esi, ds:[edx+0x18]
        cmp edi, ebp
        je public_6617a41
        public_6617a32 : nop
        push edi
        mov ecx, esi
        call public_661ad30
        add edi, 4
        cmp edi, ebp
        jne public_6617a32
        public_6617a41 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_66281d0
        mov ecx, dword ptr ss : [esp+0x14]
        xor eax, eax
        push ecx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        call public_66281d0
        mov eax, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 8
        dec eax
        mov dword ptr ds : [ebx+0x10], eax
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6617660)
    }
}

#undef public_661768c
#undef public_66176a6
#undef public_66176b1
#undef public_66176b9
#undef public_66176c3
#undef public_66176e3
#undef public_66176fa
#undef public_6617707
#undef public_6617712
#undef public_6617715
#undef public_6617733
#undef public_661773e
#undef public_6617741
#undef public_6617759
#undef public_6617763
#undef public_661776d
#undef public_661776f
#undef public_6617788
#undef public_6617793
#undef public_661779e
#undef public_66177a1
#undef public_66177b7
#undef public_66177f8
#undef public_661780b
#undef public_6617816
#undef public_6617819
#undef public_6617824
#undef public_6617839
#undef public_6617862
#undef public_661787c
#undef public_66178a3
#undef public_66178b6
#undef public_66178c3
#undef public_66178c5
#undef public_66178d0
#undef public_66178e9
#undef public_6617901
#undef public_661790e
#undef public_6617910
#undef public_661791c
#undef public_6617948
#undef public_6617960
#undef public_6617970
#undef public_661797a
#undef public_661799f
#undef public_66179b2
#undef public_66179bd
#undef public_66179c0
#undef public_66179ca
#undef public_66179f5
#undef public_6617a08
#undef public_6617a15
#undef public_6617a17
#undef public_6617a1a
#undef public_6617a1d
#undef public_6617a21
#undef public_6617a32
#undef public_6617a41
