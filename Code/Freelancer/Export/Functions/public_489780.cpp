#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_489780);
CLANG_FORWARD_PROC_SYMBOL(public_4899c0);

#define public_4897ad _public_4897ad
#define public_4897be _public_4897be
#define public_4897d1 _public_4897d1
#define public_48980b _public_48980b
#define public_489819 _public_489819
#define public_48982d _public_48982d
#define public_489849 _public_489849
#define public_48985d _public_48985d
#define public_489879 _public_489879
#define public_489890 _public_489890
#define public_489894 _public_489894
#define public_4898b1 _public_4898b1
#define public_4898c2 _public_4898c2
#define public_4898d5 _public_4898d5
#define public_48990f _public_48990f
#define public_489925 _public_489925
#define public_489939 _public_489939
#define public_489955 _public_489955
#define public_489976 _public_489976
#define public_489992 _public_489992
#define public_4899a9 _public_4899a9

PROC_DECLARE(0x489780, internal_489780, public_489780);
extern "C" NAKED register_t __cdecl internal_489780()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+0xC]
        add ebx, 4
        push esi
        push edi
        mov edi, ecx
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ebp
        lea esi, ss:[ebp+4]
        jae public_4897ad
        mov edi, eax
        public_4897ad : nop
        cmp esi, ebx
        jne public_489819
        mov ebx, eax
        cmp dword ptr ds : [esi+8], edi
        jae public_4897be
        call dword ptr ds : [public_5c7064]
        public_4897be : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6fc4]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_4897d1
        mov ebx, eax
        public_4897d1 : nop
        test ebx, ebx
        jbe public_48980b
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_4899c0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_48980b
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_48980b : nop
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        jmp public_489894
        public_489819 : nop
        test edi, edi
        jbe public_48985d
        cmp edi, ecx
        jne public_48985d
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_48982d
        mov eax, dword ptr ds : [public_5c700c]
        public_48982d : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_48985d
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_489849
        mov eax, dword ptr ds : [public_5c700c]
        public_489849 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_489894
        public_48985d : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_489890
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_489879
        mov ebx, dword ptr ds : [public_5c700c]
        public_489879 : nop
        mov edx, dword ptr ds : [esi+4]
        push edi
        push ebx
        push edx
        call public_41d8a0
        add esp, 0xC
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_489890 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_489894 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_5c705c]
        lea ebx, ds:[eax+0x14]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, ecx
        cmp eax, edi
        lea esi, ss:[ebp+0x14]
        jae public_4898b1
        mov edi, eax
        public_4898b1 : nop
        cmp esi, ebx
        jne public_489925
        mov ebx, eax
        cmp dword ptr ds : [esi+8], edi
        jae public_4898c2
        call dword ptr ds : [public_5c7064]
        public_4898c2 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6fc4]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_4898d5
        mov ebx, eax
        public_4898d5 : nop
        test ebx, ebx
        jbe public_48990f
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_4899c0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_48990f
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_48990f : nop
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_489925 : nop
        test edi, edi
        jbe public_489976
        cmp edi, ecx
        jne public_489976
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_489939
        mov eax, dword ptr ds : [public_5c700c]
        public_489939 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_489976
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_489955
        mov eax, dword ptr ds : [public_5c700c]
        public_489955 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        inc cl
        pop esi
        mov byte ptr ds : [eax-1], cl
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_489976 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_4899a9
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_489992
        mov ebx, dword ptr ds : [public_5c700c]
        public_489992 : nop
        mov edx, dword ptr ds : [esi+4]
        push edi
        push ebx
        push edx
        call public_41d8a0
        add esp, 0xC
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_4899a9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x489780)
    }
}

#undef public_4897ad
#undef public_4897be
#undef public_4897d1
#undef public_48980b
#undef public_489819
#undef public_48982d
#undef public_489849
#undef public_48985d
#undef public_489879
#undef public_489890
#undef public_489894
#undef public_4898b1
#undef public_4898c2
#undef public_4898d5
#undef public_48990f
#undef public_489925
#undef public_489939
#undef public_489955
#undef public_489976
#undef public_489992
#undef public_4899a9
